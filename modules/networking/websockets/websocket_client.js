var io = require('socket.io-client');
var websocket_server_location = 'http://localhost:3001';
var socket = io.connect(websocket_server_location, {reconnect: true});

// Add a connect event listener
socket.on('connect', function () {

  var greeting_string = 'hello, how are you?';

  console.log('connected to ' + websocket_server_location);

  console.log("sending greeting to server: " + greeting_string);

  socket.emit('greeting', greeting_string);
});

socket.on('disconnect', function () {

  console.log('disconnected from ' + websocket_server_location);
});

// add listener for 'greeting response' message
socket.on('greeting response', function (data) {

  var greeting_response_string = "you're welcome"

  console.log("recieved greeting response from server: " + data);

  console.log("sending message to server: " + greeting_response_string);

  socket.emit('message_to_server', greeting_response_string);
});

socket.on('message_to_client', function(data){

  var message_string = "recieved 'message_to_client': " + data;

  console.log("recieved 'message_to_client': " + data);

  console.log("sending message to server: " + message_string);

  socket.emit('message_to_server', message_string);
});
