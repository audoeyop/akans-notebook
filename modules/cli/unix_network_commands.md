# Network Commands

## hostname

Displays the device's hostname
- `hostname` with no options displays the machine's hostname
- `hostname –d` displays the domain name the machine belongs to
- `hostname –f` displays the fully qualified host and domain name
- `hostname –i` displays the IP address for the current machine

## ping

Ping sends (ICMP) packets to a network destination. If the packets are received, the destination device sends packets back.
Ping can be used for two purposes:
1. To ensure that a network connection can be established.
2. Timing information as to the speed of the connection.


For example, if you run `ping www.yahoo.com`, it will display its the ip address of the destination along with the amount of time that it took the network packets to travel to/from the destination (latency). Use Ctrl+C to stop the test.
```
$ ping www.yahoo.com
PING new-fp-shed.wg1.b.yahoo.com (74.6.143.26): 56 data bytes
64 bytes from 74.6.143.26: icmp_seq=0 ttl=49 time=41.526 ms
64 bytes from 74.6.143.26: icmp_seq=1 ttl=49 time=49.653 ms
64 bytes from 74.6.143.26: icmp_seq=2 ttl=49 time=44.314 ms
64 bytes from 74.6.143.26: icmp_seq=3 ttl=49 time=55.281 ms
64 bytes from 74.6.143.26: icmp_seq=4 ttl=49 time=45.391 ms
^C
```

## Network Interfaces and Routing

ifconfig
route
ip
arping
ethtool
ss

## netstat

Netstat provides basic statistics on all network activities and informs users on which ports and addresses the corresponding connections (TCP, UDP) are running and which ports are open for tasks.

- `netstat -l` will display a list of all "listening" ip addresses and network ports
- `netstat -n` will display ip addresses instead of dns names for network locations
- `netstat -p` will display the process & process IDs of programs with active network locations of open ports
- `netstat --tcp`  or `netstat –t` will display only TCP  connection
- `netstat --udp` or `netstat –u` will display only UDP  connection
- `netstat -a`  or `netstat –all` will display all connections including TCP  and UDP

Note: The `-p` flag is not available for Mac OSX's version of netstat. You would have to re-install a version of netstat that supports this feature on Mac OSX.

These flags can be combined as follows:
- `netstat -lntp` will display process id of applications with listening ports via tcp and network locations displayed as ip addresses
- `netstat -nap | grep <port_number>` will display process id of application which is using that port

Display multicast networks:
- `netstat -g` will display all multicast network subscribed by this host.


# nslookup

Nslookup finds the IP addresses for a given domain name and vice versa.

Find IP addresses from domain name:
```
$ nslookup blogger.com
Server:		2001:558:feed::1
Address:	2001:558:feed::1#53

Non-authoritative answer:
Name:	blogger.com
Address: 172.217.0.41
```

Find Domain name address from ip:
```
nslookup 172.217.0.41
Server:		2001:558:feed::1
Address:	2001:558:feed::1#53

Non-authoritative answer:
41.0.217.172.in-addr.arpa	name = iad66s02-in-f9.1e100.net.
41.0.217.172.in-addr.arpa	name = lga15s43-in-f9.1e100.net.
41.0.217.172.in-addr.arpa	name = sfo07s26-in-f9.1e100.net.
41.0.217.172.in-addr.arpa	name = lga15s43-in-f41.1e100.net.

```

# traceroute

Traceroute shows all of the network routing hops from your device to a network location. Traceroute works by sending Internet Control Message Protocol (ICMP) packets, and every router involved in transferring the data gets these packets. The ICMP packets provide information about whether the routers used in the transmission are able to effectively transfer the data.

An Internet Protocol (IP) tracer is helpful for figuring out the routing hops as data has to go through, as well as response delays as it travels across nodes, which are what send the data toward its destination. Traceroute also enables you to locate where the data was unable to be sent along, known as points of failure. You can also perform a visual traceroute to get a visual representation of each hop.

The following example shows each routing hop to google.com (142.250.65.78).
```
$ traceroute google.com
traceroute to google.com (142.250.65.78), 64 hops max, 52 byte packets
 1  10.0.0.1 (10.0.0.1)  4.658 ms  4.244 ms  5.654 ms
 2  96.120.11.49 (96.120.11.49)  13.315 ms  15.506 ms  18.250 ms
 3  24.124.181.189 (24.124.181.189)  11.464 ms  14.401 ms  26.694 ms
 4  96.110.234.217 (96.110.234.217)  15.522 ms  17.228 ms  14.390 ms
 5  68.86.204.101 (68.86.204.101)  25.450 ms  14.411 ms  16.756 ms
 6  96.216.131.253 (96.216.131.253)  15.531 ms  18.129 ms  23.171 ms
 7  be-31421-cs02.ashburn.va.ibone.comcast.net (96.110.40.21)  13.893 ms  22.132 ms
    be-31441-cs04.ashburn.va.ibone.comcast.net (96.110.40.29)  16.120 ms
 8  be-2412-pe12.ashburn.va.ibone.comcast.net (96.110.34.126)  18.877 ms
    be-2307-pe07.ashburn.va.ibone.comcast.net (96.110.32.194)  24.342 ms
    be-2401-pe01.ashburn.va.ibone.comcast.net (96.110.37.126)  17.141 ms
 9  66.208.228.90 (66.208.228.90)  20.590 ms  30.714 ms
    50.208.232.110 (50.208.232.110)  24.776 ms
10  * * *
11  108.170.240.97 (108.170.240.97)  22.948 ms
    142.251.53.2 (142.251.53.2)  18.776 ms
    108.170.240.97 (108.170.240.97)  16.223 ms
12  108.170.240.98 (108.170.240.98)  16.347 ms
    108.170.246.3 (108.170.246.3)  18.601 ms
    142.251.52.63 (142.251.52.63)  16.370 ms
13  iad23s91-in-f14.1e100.net (142.250.65.78)  14.689 ms  16.448 ms  15.887 ms
```

# Packet Capturing & Filtering

tcpdump & ngrep & scapy
TODO: * mention Wireshark

# Network Scanning

nmap

# Open Process Files

lsof

# Remote Login

ssh & telnet

# Certificate Creation / Management

key-gen (see ssh) & openssl

# netcat

Netcat (`nc`) is a utility that allows for connecting to TCP network ports, port scanning, and port listening. In addition, you can actually transfer files directly through Netcat or use it as a proxy into other networked systems. This can be used for many reasons. Common reasons includes quickly testing to see whether a service can be connected to and setting up a quick network service to test whether it is reachable on the host.

### Conect to a TCP Service
The following command will initiate a tcp connection to a tcp service
```
nc <remote_address> <remote_port>
```

### Begin listening TCP port
```
nc -l <local_address> <local_port>
```
This command will instruct the local system to begin listening for TCP connections and UDP activity on a specific port number. Once connected, nmap will listen for standard input/output from the host running the service and the host connecting to the service.

### File Transfer
```
nc 1.2.3.4 1234 < file_name
```
This command will transfer the contents of `filename` to a tcp service on remote host located at `1.2.3.4` on remote port `1234`.


```
nc -l <local_address> 1234 < file_name
```
This command will instruct the system to begin listening for connections on `<local_address>` on local port `1234` and send the contents of `filename` to a host that connects to the port when it connects.

### Port Scan
```
nc -z -v <remote_address>
```
This will run a basic port scan of the specified website or server. Netcat will return verbose results with lists of ports and statuses. Keep in mind that you can use an IP address in place of the site domain.

### TCP / UDP
By default, netcat tries to connect via TCP. To connect to a UDP port, add the `-u` flag to your `nc` command.

Connect to a UAT service port
```
nc -u <remote_address> <remote_port>
```

### Pipe Standard Input/Output
Send text from standard in to a tcp connection on `<remote_address>` on port `80` to mimic an HTTP request.
```
echo "GET /index.html HTTP/1.0\r\nHost: info.cern.ch\r\n\r\n" | nc <remote_address> 80
```

# References
https://javarevisited.blogspot.com/2010/10/basic-networking-commands-in-linuxunix.html#ixzz7GMzovDno

https://www.varonis.com/blog/netcat-commands
https://en.wikipedia.org/wiki/Netcat

https://www.computerhope.com/unix/route.htm
