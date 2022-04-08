# telnet

Telnet is a protocol that allows you to connect to remote computers (called hosts) over a TCP/IP network (such as the internet). With `telnet` client on your computer, you can make a connection to a telnet server (that is, the remote host). Once your telnet client establishes a connection to the remote host, your client becomes a virtual terminal, allowing you to communicate with the remote host from your computer. In most cases, you'll need to log into the remote host, which requires that you have an account on that system. Occasionally, you can log in as guest or public without having an account.

Connect to a remote host running a telnet server
```
$ telnet 192.168.142.138
Password:
```

The default port for Telnet is 23. Clients will attempt to connect to this port unless configured to connect to another port.
```
telnet 192.168.142.138 2323
```

The telnet client essensially establishes a TCP connection, after which continues to capture & send your input to the remote host. Because of this, `telnet` can be used to connect to other TCP based protocols.

For example, you can connect to an HTTP server (HTTP servers typically run on port 80)
```
# telnet localhost 80
Trying 127.0.0.1...
Connected to localhost.mywebsite.net (127.0.0.1).
Escape character is '^]'.
```

From here, you can enter a valid HTTP request and should recieve a response from the server.
```
GET / HTTP/1.0                       

HTTP/1.1 200 OK
Date: Wed, 29 Jul 2009 15:16:50 GMT
Server: Apache/1.3.37 (Unix) mod_fastcgi/2.4.6 mod_auth_passthrough/1.8 mod_log_bytes/1.2 mod_bwlimited/1.4 PHP/4.4.7 abbr.
Last-Modified: Mon, 05 Feb 2007 11:04:57 GMT
ETag: "1b200-b2c-45c70f59"
Accept-Ranges: bytes
Content-Length: 2860
Connection: close
Content-Type: text/html

<html>
<html>
<title>TEST</title>

abbr.

</body>
</html>
Connection closed by foreign host.
#
```
