# Electron - Native Node Libraries

We used a node module, fs, in the previous chapter. We will now look at some other node modules that we can use with Electron.

OS module
Using the OS module, we can get a lot of information about the system our application is running on. Following are a few methods that help while the app is being created. These methods help us customize the apps according to the OS that they are running on.

Sr.No	Function & Description
1
os.userInfo([options])

The os.userInfo() method returns information about the currently effective user. This information can be used to personalize the application for the user even without explicitly asking for information.

2
os.platform()

The os.platform() method returns a string identifying the operating system platform. This can be used to customize the app according to the user OS.

3
os.homedir()

The os.homedir() method returns the home directory of the current user as a string. Generally, configs of all users reside in the home directory of the user. So this can be used for the same purpose for our app.

4
os.arch()

The os.arch() method returns a string identifying the operating system CPU architecture. This can be used when running on exotic architectures to adapt your application for that system.

5
os.EOL

A string constant defining the operating system-specific end-ofline marker. This should be used whenever ending lines in files on the host OS.

Using the same main.js file and the following HTML file, we can print these properties on the screen −

<html>
   <head>
      <title>OS Module</title>
   </head>

   <body>
      <script>
         let os = require('os')
         document.write('User Info: ' + JSON.stringify(os.userInfo()) + '<br>' +
            'Platform: ' + os.platform() + '<br>' +
            'User home directory: ' +  os.homedir() + '<br>' +
            'OS Architecture: ' + os.arch() + '<br>')
      </script>
   </body>
</html>
Now run the app using the following command −

$ electron ./main.js
The above command will generate the following output −

User Info: {"uid":1000,"gid":1000,"username":"ayushgp","homedir":"/home/ayushgp",
   "shell":"/usr/bin/zsh"}
Platform: linux
User home directory: /home/ayushgp
OS Architecture: x64
Net Module
The net module is used for network related work in the app. We can create both servers and socket connections using this module. Generally, the use of wrapper module from npm is recommended over the use of the net module for networking related tasks.

The following tables lists down the most useful methods from the module −

Sr.No	Function & Description
1
net.createServer([options][, connectionListener])

Creates a new TCP server. The connectionListener argument is automatically set as a listener for the 'connection' event.

2
net.createConnection(options[, connectionListener])

A factory method, which returns a new 'net.Socket' and connects to the supplied address and port.

3
net.Server.listen(port[, host][, backlog][, callback])

Begin accepting connections on the specified port and host. If the host is omitted, the server will accept connections directed to any IPv4 address.

4
net.Server.close([callback])

Finally closed when all connections are ended and the server emits a 'close' event.

5
net.Socket.connect(port[, host][, connectListener])

Opens the connection for a given socket. If port and host are given, then the socket will be opened as a TCP socket.

The net module comes with a few other methods too. To get a more comprehensive list, see this.

Now, let us create an electron app that uses the net module to create connections to the server. We will need to create a new file, server.js −

var net = require('net');
var server = net.createServer(function(connection) {
   console.log('Client Connected');

   connection.on('end', function() {
      console.log('client disconnected');
   });

   connection.write('Hello World!\r\n');
   connection.pipe(connection);
});

server.listen(8080, function() {
   console.log('Server running on http://localhost:8080');
});
Using the same main.js file, replace the HTML file with the following −

<html>
   <head>
      <title>net Module</title>
   </head>

   <body>
      <script>
         var net = require('net');
         var client = net.connect({port: 8080}, function() {
            console.log('Connection established!');  
         });

         client.on('data', function(data) {
            document.write(data.toString());
            client.end();
         });

         client.on('end', function() {
            console.log('Disconnected :(');
         });
      </script>
   </body>
</html>
Run the server using the following command −

$ node server.js
Run the application using the following command −

$ electron ./main.js
The above command will generate the following output −

Net Module
Observe that we connect to the server automatically and automatically get disconnected too.

We also have a few other node modules that we can be used directly on the front-end using Electron. The usage of these modules depends on the scenario you use them in.

# References
https://www.tutorialspoint.com/electron/electron_native_node_libraries.htm
