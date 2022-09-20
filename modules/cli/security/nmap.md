# nmap

Nmap, short for Network Mapper, is a free, open-source tool for network discovery and vulnerability scanning.

### Nmap Command
The following commands will scan the respective host and display its open ports (default ports 1-254) if the host is online.
```
$ nmap www.google.com
```
```
$ nmap 10.0.0.7
```

### Stealth TCP Scan `-sS`

SYN (stealth) scan is the default and most popular scan option for nmap for good reason. It can be performed quickly, scanning thousands of ports per second on a fast network not hampered by intrusive firewalls. SYN scan is relatively unobtrusive and stealthy, since it never completes TCP connections. The stealth scan begins a TCP connection which requires:

1. Sending an initial SYN packet from your host to a remote host
2. Followed by a SYN/ACK response from the remote host to your host

3. Then, followed by an ACK packet from your host to the remote host to establish an connection

The SYN scan sends the initial SYN packet, and receives a response from the remote host/port if it is open. The response lets us know that the port is open & responding to ICMP SYN packets. If no SYN/ACK response sent, we can assume that the port is not open and/or not accessible. For stealth scans, *the ACK packet is not sent, thus TCP connection is not established*. This is how we can tell whether a port is open without establishing a full TCP connection. Stealthy, I know. In some systems where complete communication is recorded, this type of scan can be used to prevent communication from being recorded in the target system. This can also bypass some firewalls that filter based on established tcp connections.

Performing a stealth (SYN) scan `(-sS)`
```
$ nmap -sS 10.0.0.7
```

### Connect Scan (TCP) `-sT`
Perform a "connect" scan `(-sT)`, which establishes a full TCP connection. Because of this, network monitoring and or filtering (firewall) tools would detect the full TCP connection.
```
$ nmap -sT 10.0.0.7
```

### Ping Scan `-sP`
A ping scan lists the hosts within the specified range that responded to a ping (ICMP Echo request).
```
nmap  -sP 172.31.1-255.1-255
```

### Scan Network
Scan all host on a network (`192.168.0.0/24` -> `192.168.0.1` - `192.168.0.254`)
```
nmap 192.168.0.0/24
```
This can also be done the following way by specifying an ip range
```
nmap 192.168.0.1-254
```
### UDP Scan `-sU`
Scanning for open UDP ports is done with the -sU option. With this scan type, Nmap sends 0-byte UDP packets to each target port on the victim. Receipt of an ICMP Port Unreachable message signifies the port is closed, otherwise it is assumed open. Since UDP is a connectionless protocol, it does not require responses like the SYN/ACK and ACK packets to ensure that a TCP connection is established before sending data.
```
nmap -sU 10.0.0.7
```

### Protocol Scan `-sO`
The IP Protocol Scans attempt to determine the IP protocols supported on a target. Nmap sends a raw IP packet without any additional protocol header (see a good TCP/IP book for information about IP packets), to each protocol on the target machine. Receipt of an ICMP Protocol Unreachable message tells us the protocol is not in use, otherwise it is assumed open. Not all hosts send ICMP Protocol Unreachable messages. These may include firewalls, AIX, HP-UX and Digital UNIX). These machines will report all protocols open.  This scan type also falls victim to the ICMP limiting rate described in the UDP scans section.
```
nmap -sO 127.0.0.1
```

### Version Detection `-sV` `-A`

Version Detection collects information about the specific service running on an open port, including the product name and version number if available. This information can be critical in determining an entry point for an attack. `The -sV` option enables version detection, and the `-A` option enables both OS fingerprinting and version detection.

Nmap version detection
```
nmap -sV 127.0.0.1
```

Nmap version detection and OS fingerprinting
```
nmap -A 127.0.0.1
```

# Port scans
By default, Nmap scans the most common 1,000 ports for each protocol. You can specify specific ports to scan as well as whether to perform a TCP or UDP scan on the port.
```
nmap -p 80 192.168.0.1	  # Scan http
nmap -p T:80 192.168.0.1	# Scan tcp/http
nmap -p U:53 192.168.0.1	# Scan udp/dns

# Scan port range
nmap -p 21-25,U:53-59,T:80-100  192.168.0.1	  
```

### ACK Scan [-sA]
Usually used to map firewall rulesets and distinguish between stateful and stateless firewalls, this scan type sends ACK packets to a host. If an RST comes back, the port is classified ”unfiltered” (that is, it was allowed to send its RST through whatever firewall was in place). If nothing comes back, the port is said to be "filtered". That is, the firewall prevented the RST coming back from the port. This scan type can help determine if a firewall is stateless (just blocks incoming SYN packets) or stateful (tracks connections and also blocks unsolicited ACK packets).

Note that an ACK scan will never show ports in the ”open” state, and so it should be used in conjunction with another scan type to gain more information about firewalls or packet filters between yourself and the remote host.
```
nmap -A 192.168.1.7
```

### Window Scan
The TCP Window scan is similar to the ACK scan but can sometimes detect open ports as well as filtered/unfiltered ports. This is due to anomalies in TCP Window size reporting by some operating systems (see the Nmap manual for a list, or the nmap-hackers mailing list for the full list of susceptible OS’).
```
nmap -sW 192.168.1.7
```

### RPC Scan
RPC Scans can be used in conjunction with other scan types to try to determine if an open TCP or UDP port is an RPC service, and if so, which program, and version numbers are running on it. Decoys are not supported with RPC scans (see section on Timing and Hiding Scans, below).
```
nmap -sR 192.168.1.7
```

### List Scan
List scanning simply prints a list of IPs and names (DNS resolution will be used unless the -n option is passed to Nmap) without actually pinging or scanning the hosts.
```
nmap -sL 192.168.1.7
```

### Timing and Hiding Scans
Nmap adjusts its timings automatically depending on network speed and response times of the victim. However, you may want more control over the timing in order to create a more stealthy scan, or to get the scan over and done with quicker. The main timing option is set through the `-T` parameter. There are six predefined timing policies which can be specified by name or number (starting with 0, corresponding to Paranoid timing). The timings are Paranoid, Sneaky, Polite, Normal, Aggressive and Insane. The values range from 0-5 with `-T0` being the slowest, and `T5` being the fastest.

- A "-T Paranoid" (or `-T0`) scan will wait (generally) at least 5 minutes between each packet sent. This makes it almost impossible for a firewall to detect a port scan in progress (since the scan takes so long it would most likely be attributed to random network traffic). Such a scan will still show up in logs, but it will be
so spread out that most analysis tools or humans will miss it completely.
```
nmap -sS -T0 192.168.1.7
```
- A "-T Insane" (or `-T5`) scan will map a host in very little time, provided you are on a very fast network or don’t mind losing some information along the way. Timings for individual aspects of a scan can also be set using the –host timeout, –max rtt timeout, –min rtt timeout, –initial rtt timeout, –max parallelism, –min parallelism, and –scan delay options.
```
nmap -sS -T5 192.168.1.7
```

### Decoy
The -D option allows you to specify Decoys. This option makes it look like those decoys are scanning the target network. It does not hide your own IP, but it makes your IP one of a torrent of others supposedly scanning the victim at the same time. This not only makes the scan look more scary, but reduces the chance of you being traced from your scan (difficult to tell which system is the ”real” source).

The following performs a scan from my host, as well as sending spoofed packets that appear to originate from example.com and aol.com.
```
nmap -Dexample.com,aol.com visionadministrator.com
```

### Spoof MAC address

Perform a scan with a spoofed MAC address.
```
nmap --spoof-mac MAC-ADDRESS-HERE 192.168.0.1
```

Perform a scan with a random MAC address.
```
nmap -v -sT -PN --spoof-mac 0 192.168.0.1
```

### Firewalls
The following commands scan firewalls for weaknesses

tcp null scan
```
nmap -sN 192.168.0.1
```

tcp fin scan
```
nmap -sF 192.168.0.1
```

tcp xmas scan
```
nmap -sX 192.168.0.1
```

# Scan a firewall for packet fragments
```
nmap -f 192.168.0.1
```

# Other useful nmap scans
```
nmap -p 80 192.168.0.1	  # Scan http
nmap -p T:80 192.168.0.1	# Scan tcp/http
nmap -p U:53 192.168.0.1	# Scan udp/dns
nmap -PN 192.168.0.1	    # Scan a firewall protected host
nmap -6 ::1	             # Scan IPv6 address
nmap --reason 192.168.0.1   # Document the reason for a service discovery
nmap --packet-trace 192.168.0.1 # Show packet trace (sent/received)
nmap --iflist	Show host interface and routes
```

TODO: add screenshots from
https://nmap.org/book/synscan.html

https://nmap.org/book/synscan.html
http://www.csc.villanova.edu/~nadi/csc8580/S11/nmap-tutorial.pdf

https://tuttlem.github.io/2015/12/02/nmap-cheatshet.html
