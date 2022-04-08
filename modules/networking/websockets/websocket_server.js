var app = require('express')();
var request = require('request');
var server = require('http').Server(app);
var io = require('socket.io')(server);

var socket_host = '127.0.0.1';

var socket_port = 3001;

server.listen(socket_port, socket_host);

io.on('disconnect', function(data){

  console.log("websocket disconnected");
});

io.on('connection', function(socket){

  console.log("websocket connected");

  socket.on('greeting', function(data){

    console.log("recieved greeting: " + data);

    socket.emit('greeting response', 'I am doing well. Thankyou.');
  });

  socket.on('message_to_server', function(data){

    console.log("recieved 'message_to_server': " + data);
  });

  // send 'message_to_client' every 5 seconds with the server's Date
  var send_message_interval = setInterval(function(){

    var timestamp = Date.now();

    console.log("sending 'message_to_client': " + 'update from server: ' + timestamp);

    socket.emit('message_to_client', 'update from server: ' + timestamp);

  }, 5000);

  socket.on('disconnect', function () {

    console.log('client disconnected');

    clearInterval(send_message_interval);
  });
});
