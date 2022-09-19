# Node.js Utility Modules

There are several utility modules available in Node.js module library. These modules are very common and are frequently used while developing any Node based application.

##OS Module
Provides basic operating-system related utility functions.

Node.js os module provides a few basic operating-system related utility functions. This module can be imported using the following syntax.
```
var os = require("os")
```

**os.tmpdir()**

Returns the operating system's default directory for temp files.

**os.endianness()**

Returns the endianness of the CPU. Possible values are "BE" or "LE".

**os.hostname()**

Returns the hostname of the operating system.

**os.type()**

Returns the operating system name.

**os.platform()**

Returns the operating system platform.

**os.arch()**

Returns the operating system CPU architecture. Possible values are "x64", "arm" and "ia32".

**os.release()**

Returns the operating system release.

**os.uptime()**

Returns the system uptime in seconds.

**os.loadavg()**

Returns an array containing the 1, 5, and 15 minute load averages.

**os.totalmem()**

Returns the total amount of system memory in bytes.

**os.freemem()**

Returns the amount of free system memory in bytes.

**os.cpus()**

Returns an array of objects containing information about each CPU/core installed: model, speed (in MHz), and times (an object containing the number of milliseconds the CPU/core spent in: user, nice, sys, idle, and irq).

**os.networkInterfaces()**

Get a list of network interfaces.

### Properties

**os.EOL**

A constant defining the appropriate End-of-line marker for the operating system.

**Example**

The following example demonstrates a few OS methods. Create a js file named main.js with the following code.

```
var os = require("os");

// Endianness
console.log('endianness : ' + os.endianness());

// OS type
console.log('type : ' + os.type());

// OS platform
console.log('platform : ' + os.platform());

// Total system memory
console.log('total memory : ' + os.totalmem() + " bytes.");

// Total free memory
console.log('free memory : ' + os.freemem() + " bytes.");
```
Now run the main.js to see the result −
```
$ node main.js
```
Verify the Output.
```
endianness : LE
type : Linux
platform : linux
total memory : 25103400960 bytes.
free memory : 20676710400 bytes.
```

## Path Module
Provides utilities for handling and transforming file paths.

Node.js path module is used for handling and transforming file paths. This module can be imported using the following syntax.
```
var path = require("path")
```

**path.normalize(p)**

Normalize a string path, taking care of '..' and '.' parts.

**path.join([path1][, path2][, ...])**

Join all the arguments together and normalize the resulting path.

**path.resolve([from ...], to)**

Resolves to an absolute path.

**path.isAbsolute(path)**

Determines whether the path is an absolute path. An absolute path will always resolve to the same location, regardless of the working directory.

**path.relative(from, to)**

Solve the relative path from from to to.

**path.dirname(p)**

Return the directory name of a path. Similar to the Unix dirname command.

**path.basename(p[, ext])**

Return the last portion of a path. Similar to the Unix basename command.

**path.extname(p)**

Return the extension of the path, from the last '.' to end of string in the last portion of the path. If there is no '.' in the last portion of the path or the first character of it is '.', then it returns an empty string.

**path.parse(pathString)**

Returns an object from a path string.

**path.format(pathObject)**

Returns a path string from an object, the opposite of path.parse above.

## Properties

**path.sep**

The platform-specific file separator. '\\' or '/'.

**path.delimiter**

The platform-specific path delimiter, ; or ':'.

**path.posix**

Provide access to aforementioned path methods but always interact in a posix compatible way.

**path.win32**

Provide access to aforementioned path methods but always interact in a win32 compatible way.

### Example
Create a js file named main.js with the following code −
```
var path = require("path");

// Normalization
console.log('normalization : ' + path.normalize('/test/test1//2slashes/1slash/tab/..'));

// Join
console.log('joint path : ' + path.join('/test', 'test1', '2slashes/1slash', 'tab', '..'));

// Resolve
console.log('resolve : ' + path.resolve('main.js'));

// extName
console.log('ext name : ' + path.extname('main.js'));
```
Now run the main.js to see the result −
```
$ node main.js
```
Verify the Output.
```
normalization : /test/test1/2slashes/1slash
joint path : /test/test1/2slashes/1slash
resolve : /web/com/1427176256_27423/main.js
ext name : .js
```

## Net Module
Provides both servers and clients as streams. Acts as a network wrapper.

Node.js net module is used to create both servers and clients. This module provides an asynchronous network wrapper and it can be imported using the following syntax.
```
var net = require("net")
```

### Methods

**net.createServer([options][, connectionListener])**

Creates a new TCP server. The connectionListener argument is automatically set as a listener for the 'connection' event.

**net.connect(options[, connectionListener])**

A factory method, which returns a new 'net.Socket' and connects to the supplied address and port.

**net.createConnection(options[, connectionListener])**

A factory method, which returns a new 'net.Socket' and connects to the supplied address and port.

**net.connect(port[, host][, connectListener])**

Creates a TCP connection to port on host. If host is omitted, 'localhost' will be assumed. The connectListener parameter will be added as a listener for the 'connect' event. It is a factory method which returns a new 'net.Socket'.

**net.createConnection(port[, host][, connectListener])**

Creates a TCP connection to port on host. If host is omitted, 'localhost' will be assumed. The connectListener parameter will be added as a listener for the 'connect' event. It is a factory method which returns a new 'net.Socket'.

**net.connect(path[, connectListener])**

Creates Unix socket connection to path. The connectListener parameter will be added as a listener for the 'connect' event. It is a factory method which returns a new 'net.Socket'.

**net.createConnection(path[, connectListener])**

Creates Unix socket connection to path. The connectListener parameter will be added as a listener for the 'connect' event. It is a factory method which returns a new 'net.Socket'.

**net.isIP(input)**

Tests if the input is an IP address. Returns 0 for invalid strings, 4 for IP version 4 addresses, and 6 for IP version 6 addresses.

**net.isIPv4(input)**

Returns true if the input is a version 4 IP address, otherwise returns false.

**net.isIPv6(input)**

Returns true if the input is a version 6 IP address, otherwise returns false.

### Class - net.Server
This class is used to create a TCP or local server.

**Methods**

**server.listen(port[, host][, backlog][, callback])**

Begin accepting connections on the specified port and host. If the host is omitted, the server will accept connections directed to any IPv4 address (INADDR_ANY). A port value of zero will assign a random port.

**server.listen(path[, callback])**

Start a local socket server listening for connections on the given path.

**server.listen(handle[, callback])**

The handle object can be set to either a server or socket (anything with an underlying _handle member), or a {fd: <n>} object. It will cause the server to accept connections on the specified handle, but it is presumed that the file descriptor or handle has already been bound to a port or domain socket. Listening on a file descriptor is not supported on Windows.

**server.listen(options[, callback])**

The port, host, and backlog properties of options, as well as the optional callback function, behave as they do on a call to server.listen(port, [host], [backlog], [callback]) . Alternatively, the path option can be used to specify a UNIX socket.

**server.close([callback])**

Finally closed when all connections are ended and the server emits a 'close' event.

**server.address()**

Returns the bound address, the address family name and port of the server as reported by the operating system.

**server.unref()**

Calling unref on a server will allow the program to exit if this is the only active server in the event system. If the server is already unrefd, then calling unref again will have no effect.

**server.ref()**

Opposite of unref, calling ref on a previously unrefd server will not let the program exit if it's the only server left (the default behavior). If the server is refd, then calling the ref again will have no effect.

**server.getConnections(callback)**

Asynchronously get the number of concurrent connections on the server. Works when sockets were sent to forks. Callback should take two arguments err and count.

### Events

**listening**

Emitted when the server has been bound after calling server.listen.

**connection**

Emitted when a new connection is made. Socket object, the connection object is available to event handler. Socket is an instance of net.Socket.

**close**

Emitted when the server closes. Note that if connections exist, this event is not emitted until all the connections are ended.

**error**

Emitted when an error occurs. The 'close' event will be called directly following this event.

### Class - net.Socket
This object is an abstraction of a TCP or local socket. net.Socket instances implement a duplex Stream interface. They can be created by the user and used as a client (with connect()) or they can be created by Node and passed to the user through the 'connection' event of a server.

Events
net.Socket is an eventEmitter and it emits the following events.

**lookup**

Emitted after resolving the hostname but before connecting. Not applicable to UNIX sockets.

**connect**

Emitted when a socket connection is successfully established.

**data**

Emitted when data is received. The argument data will be a Buffer or String. Encoding of data is set by socket.setEncoding().

**end**

Emitted when the other end of the socket sends a FIN packet.

**timeout**

Emitted if the socket times out from inactivity. This is only to notify that the socket has been idle. The user must manually close the connection.

**drain**

Emitted when the write buffer becomes empty. Can be used to throttle uploads.

**error**

Emitted when an error occurs. The 'close' event will be called directly following this event.

**close**

Emitted once the socket is fully closed. The argument had_error is a boolean which indicates if the socket was closed due to a transmission error.

### Properties
net.Socket provides many useful properties to get better control over socket interactions.

**socket.bufferSize**

This property shows the number of characters currently buffered to be written.

**socket.remoteAddress**

The string representation of the remote IP address. For example, '74.125.127.100' or '2001:4860:a005::68'.

**socket.remoteFamily**

The string representation of the remote IP family. 'IPv4' or 'IPv6'.

**socket.remotePort**

The numeric representation of the remote port. For example, 80 or 21.

**socket.localAddress**

The string representation of the local IP address the remote client is connecting on. For example, if you are listening on '0.0.0.0' and the client connects on '192.168.1.1', the value would be '192.168.1.1'.

**socket.localPort**

The numeric representation of the local port. For example, 80 or 21.

**socket.bytesRead**

The amount of received bytes.

**socket.bytesWritten**

The amount of bytes sent.

### Methods

**new net.Socket([options])**

Construct a new socket object.

**socket.connect(port[, host][, connectListener])**

Opens the connection for a given socket. If port and host are given, then the socket will be opened as a TCP socket, if host is omitted, localhost will be assumed. If a path is given, the socket will be opened as a Unix socket to that path.

**socket.connect(path[, connectListener])**

Opens the connection for a given socket. If port and host are given, then the socket will be opened as a TCP socket, if host is omitted, localhost will be assumed. If a path is given, the socket will be opened as a Unix socket to that path.

**socket.setEncoding([encoding])**

Set the encoding for the socket as a Readable Stream.

**socket.write(data[, encoding][, callback])**

Sends data on the socket. The second parameter specifies the encoding in the case of a string--it defaults to UTF8 encoding.

**socket.end([data][, encoding])**

Half-closes the socket, i.e., it sends a FIN packet. It is possible the server will still send some data.

**socket.destroy()**

Ensures that no more I/O activity happens on this socket. Necessary only in case of errors (parse error or so).

**socket.pause()**

Pauses the reading of data. That is, 'data' events will not be emitted. Useful to throttle back an upload.

**socket.resume()**

Resumes reading after a call to pause().

**socket.setTimeout(timeout[, callback])**

Sets the socket to timeout after timeout milliseconds of inactivity on the socket. By default, net.Socket does not have a timeout.

**socket.setNoDelay([noDelay])**

Disables the Nagle algorithm. By default, TCP connections use the Nagle algorithm, they buffer data before sending it off. Setting true for noDelay will immediately fire off data each time socket.write() is called. noDelay defaults to true.

**socket.setKeepAlive([enable][, initialDelay])**

Enable/disable keep-alive functionality, and optionally set the initial delay before the first keepalive probe is sent on an idle socket. enable defaults to false.

**socket.address()**

Returns the bound address, the address family name, and the port of the socket as reported by the operating system. Returns an object with three properties, e.g. { port: 12346, family: 'IPv4', address: '127.0.0.1' }.

**socket.unref()**

Calling unref on a socket will allow the program to exit if this is the only active socket in the event system. If the socket is already unrefd, then calling unref again will have no effect.

**socket.ref()**

Opposite of unref, calling ref on a previously unrefd socket will not let the program exit if it's the only socket left (the default behavior). If the socket is refd, then calling ref again will have no effect.

### Example
Create a js file named server.js with the following code −

File: server.js
```
var net = require('net');
var server = net.createServer(function(connection) {
   console.log('client connected');

   connection.on('end', function() {
      console.log('client disconnected');
   });

   connection.write('Hello World!\r\n');
   connection.pipe(connection);
});

server.listen(8080, function() {
   console.log('server is listening');
});
```
Now run the server.js to see the result −
```
$ node server.js
```
Verify the Output.

server is listening
Create a js file named client.js with the following code −

File: client.js
```
var net = require('net');
var client = net.connect({port: 8080}, function() {
   console.log('connected to server!');  
});

client.on('data', function(data) {
   console.log(data.toString());
   client.end();
});

client.on('end', function() {
   console.log('disconnected from server');
});
```
Now run the client.js from another terminal to see the result −
```
$ node client.js
```
Verify the Output.
```
connected to server!
Hello World!

disconnected from server
```
Verify the Output on the terminal where server.js is running.
```
server is listening
client connected
client disconnected
```

## DNS Module
Provides functions to do actual DNS lookup as well as to use underlying operating system name resolution functionalities.

Node.js dns module is used to do actual DNS lookup as well as to use underlying operating system name resolution functionalities. This module provides an asynchronous network wrapper and can be imported using the following syntax.

var dns = require("dns")
Methods
Sr.No.	Method & Description

**dns.lookup(hostname[, options], callback)**

Resolves a hostname (e.g. 'google.com') into the first found A (IPv4) or AAAA (IPv6) record. options can be an object or integer. If options is not provided, then IP v4 and v6 addresses are both valid. If options is an integer, then it must be 4 or 6.


**dns.lookupService(address, port, callback)**

Resolves the given address and port into a hostname and service using getnameinfo.


**dns.resolve(hostname[, rrtype], callback)**

Resolves a hostname (e.g. 'google.com') into an array of the record types specified by rrtype.


**dns.resolve4(hostname, callback)**

The same as dns.resolve(), but only for IPv4 queries (A records). addresses is an array of IPv4 addresses (e.g. ['74.125.79.104', '74.125.79.105', '74.125.79.106']).


**dns.resolve6(hostname, callback)**

The same as dns.resolve4() except for IPv6 queries (an AAAA query).


**dns.resolveMx(hostname, callback)**

The same as dns.resolve(), but only for mail exchange queries (MX records).


**dns.resolveTxt(hostname, callback)**

The same as dns.resolve(), but only for text queries (TXT records). addresses is an 2-d array of the text records available for hostname (e.g., [ ['v=spf1 ip4:0.0.0.0 ', '~all' ] ]). Each sub-array contains TXT chunks of one record. Depending on the use case, they could be either joined together or treated separately.


**dns.resolveSrv(hostname, callback)**

The same as dns.resolve(), but only for service records (SRV records). addresses is an array of the SRV records available for hostname. Properties of SRV records are priority, weight, port, and name (e.g., [{'priority': 10, 'weight': 5, 'port': 21223, 'name': 'service.example.com'}, ...]).


**dns.resolveSoa(hostname, callback)**

The same as dns.resolve(), but only for start of authority record queries (SOA record).

1
**dns.resolveNs(hostname, callback)**

The same as dns.resolve(), but only for name server records (NS records). addresses is an array of the name server records available for hostname (e.g., ['ns1.example.com', 'ns2.example.com']).

1
**dns.resolveCname(hostname, callback)**

The same as dns.resolve(), but only for canonical name records (CNAME records). addresses is an array of the canonical name records available for hostname (e.g., ['bar.example.com']).

1
**dns.reverse(ip, callback)**

Reverse resolves an ip address to an array of hostnames.

1
**dns.getServers()**

Returns an array of IP addresses as strings that are currently being used for resolution.

1
**dns.setServers(servers)**

Given an array of IP addresses as strings, set them as the servers to use for resolving.

### rrtypes
Following is the list of valid rrtypes used by dns.resolve() method −

A − IPV4 addresses, default

AAAA − IPV6 addresses

MX − mail exchange records

TXT − text records

SRV − SRV records

PTR − used for reverse IP lookups

NS − name server records

CNAME − canonical name records

SOA − start of authority record

Error Codes
Each DNS query can return one of the following error codes −

dns.NODATA − DNS server returned answer with no data.

dns.FORMERR − DNS server claims query was misformatted.

dns.SERVFAIL − DNS server returned general failure.

dns.NOTFOUND − Domain name not found.

dns.NOTIMP − DNS server does not implement requested operation.

dns.REFUSED − DNS server refused query.

dns.BADQUERY − Misformatted DNS query.

dns.BADNAME − Misformatted hostname.

dns.BADFAMILY − Unsupported address family.

dns.BADRESP − Misformatted DNS reply.

dns.CONNREFUSED − Could not contact DNS servers.

dns.TIMEOUT − Timeout while contacting DNS servers.

dns.EOF − End of file.

dns.FILE − Error reading file.

dns.NOMEM − Out of memory.

dns.DESTRUCTION − Channel is being destroyed.

dns.BADSTR − Misformatted string.

dns.BADFLAGS − Illegal flags specified.

dns.NONAME − Given hostname is not numeric.

dns.BADHINTS − Illegal hints flags specified.

dns.NOTINITIALIZED − c-ares library initialization not yet performed.

dns.LOADIPHLPAPI − Error loading iphlpapi.dll.

dns.ADDRGETNETWORKPARAMS − Could not find GetNetworkParams function.

dns.CANCELLED − DNS query cancelled.

**Example**
Create a js file named main.js with the following code −
```
var dns = require('dns');

dns.lookup('www.google.com', function onLookup(err, address, family) {
   console.log('address:', address);
   dns.reverse(address, function (err, hostnames) {
      if (err) {
         console.log(err.stack);
      }

      console.log('reverse for ' + address + ': ' + JSON.stringify(hostnames));
   });  
});
```
Now run the main.js to see the result −
```
$ node main.js
```
Verify the Output.
```
address: 173.194.46.83
reverse for 173.194.46.83: ["ord08s11-in-f19.1e100.net"]
```

## Domain Module
Provides ways to handle multiple different I/O operations as a single group.

Node.js domain module is used to intercept unhandled error. These unhandled error can be intercepted using internal binding or external binding. If errors are not handled at all, then they will simply crash the Node application.

Internal Binding − Error emitter is executing its code within the run method of a domain.

External Binding − Error emitter is added explicitly to a domain using its add method.

This module can be imported using the following syntax.
```
var domain = require("domain")
```
The domain class of domain module is used to provide functionality of routing errors and uncaught exceptions to the active Domain object. It is a child class of EventEmitter. To handle the errors that it catches, listen to its error event. It is created using the following syntax −
```
var domain = require("domain");
var child = domain.create();
```

### Methods

**domain.run(function)**

Run the supplied function in the context of the domain, implicitly binding all event emitters, timers, and lowl evel requests that are created in that context. This is the most basic way to use a domain.


**domain.add(emitter)**

Explicitly adds an emitter to the domain. If any event handlers called by the emitter throw an error, or if the emitter emits an error event, it will be routed to the domain's error event, just like with implicit binding.


**domain.remove(emitter)**

The opposite of domain.add(emitter). Removes domain handling from the specified emitter.


**domain.bind(callback)**

The returned function will be a wrapper around the supplied callback function. When the returned function is called, any errors that are thrown will be routed to the domain's error event.


**domain.intercept(callback)**

This method is almost identical to domain.bind(callback). However, in addition to catching thrown errors, it will also intercept Error objects sent as the first argument to the function.


**domain.enter()**

The enter method is plumbing used by the run, bind, and intercept methods to set the active domain. It sets domain.active and process.domain to the domain, and implicitly pushes the domain onto the domain stack managed by the domain module (see domain.exit() for details on the domain stack). The call to enter delimits the beginning of a chain of asynchronous calls and I/O operations bound to a domain.


**domain.exit()**

The exit method exits the current domain, popping it off the domain stack. Whenever the execution switches to the context of a different chain of asynchronous calls, it's important to ensure that the current domain is exited. The call to exit delimits either the end of or an interruption to the chain of asynchronous calls and I/O operations bound to a domain.


**domain.dispose()**

Once dispose has been called, the domain will no longer be used by callbacks bound into the domain via run, bind, or intercept, and a dispose event is emit

### Properties

**domain.members**

An array of timers and event emitters that have been explicitly added to the domain.

Example
Create a js file named main.js with the following code −
```
var EventEmitter = require("events").EventEmitter;
var domain = require("domain");

var emitter1 = new EventEmitter();

// Create a domain
var domain1 = domain.create();

domain1.on('error', function(err) {
   console.log("domain1 handled this error ("+err.message+")");
});

// Explicit binding
domain1.add(emitter1);

emitter1.on('error',function(err) {
   console.log("listener handled this error ("+err.message+")");
});

emitter1.emit('error',new Error('To be handled by listener'));
emitter1.removeAllListeners('error');
emitter1.emit('error',new Error('To be handled by domain1'));

var domain2 = domain.create();

domain2.on('error', function(err) {
   console.log("domain2 handled this error ("+err.message+")");
});

// Implicit binding
domain2.run(function() {
   var emitter2 = new EventEmitter();
   emitter2.emit('error',new Error('To be handled by domain2'));   
});

domain1.remove(emitter1);
emitter1.emit('error', new Error('Converted to exception. System will crash!'));
```
Now run the main.js to see the result −
```
$ node main.js
```
Verify the Output.
```
listener handled this error (To be handled by listener)
domain1 handled this error (To be handled by domain1)
domain2 handled this error (To be handled by domain2)

events.js:72 throw er; // Unhandled 'error' event
         ^
Error: Converted to exception. System will crash!
   at Object. (/web/com/1427722220_30772/main.js:40:24)
   at Module._compile (module.js:456:26)
   at Object.Module._extensions..js (module.js:474:10)
   at Module.load (module.js:356:32)
   at Function.Module._load (module.js:312:12)
   at Function.Module.runMain (module.js:497:10)
   at startup (node.js:119:16)
   at node.js:906:3
```

# References
https://www.tutorialspoint.com/nodejs/nodejs_utility_module.htm
