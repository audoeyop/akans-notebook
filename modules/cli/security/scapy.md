# Scapy

Scapy is a Python library with its own command line interpreter (CLI), which allows to create, modify, send and capture network packets. Scapy also allows us to perform scans and/or network attacks.

The main advantage of Scapy is that, unlike other tools, it provides us with the ability to create & modify network packages at a low level, allowing us to use existing network protocols and parameterize them based on our needs.

Basic Functions via Command Line (CLI)
The main basic functions we should know are:
```
ls() : list of available layers
explore() : graphical interface to display existing layers
lsc() : available functions
help() : help menu.
And within the function group, the most common are:

send(): send packets to level 2.
sendp(): send packets to level 3.
sr(): send and receive packets at level 3.
srp(): send and receive packets at level 2.
sr1(): send and receive only the first packet at level 3.
srp1(): sends and receives only the first packet to level 2.
sniff(): packet sniffing.
traceroute(): command trace route.
arping(): Send who-has ARP requests to determine which machines are up in the network.
```

Run scapy as root
```
max@dumbass:~$ sudo scapy
```
Create ans send an ICMP packet
```
>>> send(IP(dst="10.1.99.2")/ICMP()/"HelloWorld")
.
Sent 1 packets.
```

- `send` - this tells Scapy that you want to send a packet (just a single packet)
- `IP` - the type of packet you want to create, in this case an IP packet
- `(dst=”10.1.99.2”)` - the destination to send the packet to (in this case my router)
- `ICMP()` - you want to create an ICMP packet with the default values provided by Scapy
- `"HelloWorld"` - the payload to include in the ICMP packet (optional)

Spoof the packet source (src) ip address
```
send(IP(src="10.1.99.100", dst="10.1.99.2")/ICMP()/"HelloWorld")
```

Set packet TIme-To-Live (ttl)
```
send(IP(src="10.1.99.100", dst="10.1.99.2", ttl=128)/ICMP()/"HelloWorld")
```

Send ping reply (type=0)
```
send(IP(src="10.1.99.100", dst="10.1.99.2", ttl=128)/ICMP(type=0)/"HelloWorld")
```
Send a single ICMP packet and recieve a answer/response.
```
>>> packet = sr1(IP(dst="10.1.99.2")/ICMP())
Begin emission:
.Finished to send 1 packets.
*
Received 2 packets, got 1 answers, remaining 0 packets
```
The r "answered" packet is stored in the  `packet` variable. To see the “answered” packet (remember the sr functions can show the answered and unanswered packets, but sr1() is only interested in the first answered packet), simply type:

```
>>> packet
<IP version=4L ihl=5L tos=0x0 len=28 id=7394 flags= frag=0L ttl=64 proto=icmp chksum=0x83e2
src=10.1.99.2 dst=10.1.99.25 options=[] |<ICMP type=echo-reply code=0 chksum=0xffff id=0x0
seq=0x0 |<Padding load='\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00e@\x07-'
|>>>
```

To view detailed information about the packet
```
>>> packet.show()
###[ IP ]###
version= 4L
ihl= 5L
tos= 0x0
len= 28
id= 7394
flags=
frag= 0L
ttl= 64
proto= icmp
chksum= 0x83e2
src= 10.1.99.2
dst= 10.1.99.25
\options\
###[ ICMP ]###
type= echo-reply
code= 0
chksum= 0xffff
id= 0x0
seq= 0x0
###[ Padding ]###
load= '\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00e@\x07-'
```

Adding our own payload
```
>>> packet = sr1(IP(dst="10.1.99.2")/ICMP()/"HelloWorld")
```

You will now see the `load= 'HelloWorld'` payload in the packet
```
>>> packet.show()
###[ IP ]###
version= 4L
ihl= 5L
tos= 0x0
len= 38
id= 7395
flags=
frag= 0L
ttl= 64
proto= icmp
chksum= 0x83d7
src= 10.1.99.2
dst= 10.1.99.25
\options\
###[ ICMP ]###
type= echo-reply
code= 0
chksum= 0x0
id= 0x0
seq= 0x0
###[ Raw ]###
load= 'HelloWorld'
###[ Padding ]###
load= '\x00\x00\x00\x00\xe7\x03N\x99'
```

Example with the `sr()` function so that we can see the
“unanswered” packets as well.
```
>>> packet = sr(IP(dst="10.1.99.2")/TCP(dport=23))
Begin emission:
.Finished to send 1 packets.
*
Received 2 packets, got 1 answers, remaining 0 packets
```

```
>>> packet
(<Results: TCP:1 UDP:0 ICMP:0 Other:0>, <Unanswered: TCP:0 UDP:0 ICMP:0 Other:0>)
```

To view detailed information, we must store the packet as a tuple
```
answered_packets, unanswered_packets = packet
```

From here, we can use the `summary()` function to view information about the answered packets.
```
answered_packets.summary()
IP / TCP 10.1.99.25:ftp_data > 10.1.99.2:telnet S ==> IP / TCP 10.1.99.2:telnet > 10.1.99.25:ftp_data
RA / Padding
```

We can also use the `summary()` function to view information about the unanswered packets.
```
unanswered_packets.summary()
IP / TCP 10.1.99.25:ftp_data > 10.1.99.2:telnet S ==> IP / TCP 10.1.99.2:telnet > 10.1.99.25:ftp_data
RA / Padding
```

You can also specify ranges of destination ports in your packet creation. The following requests will send an ICMP packet to ports 23, 80, and 53.
```
>>> answered_packets, unanswered_packets = sr(IP(dst="10.1.99.2")/TCP(dport=[23,80,53]))
Begin emission:
.**Finished to send 3 packets.
*
Received 4 packets, got 3 answers, remaining 0 packets
```

We see 3 packets sent (one to each of the ports above) & answers received for each of them:
```
>>> answered_packets.summary()
IP / TCP 10.1.99.25:ftp_data > 10.1.99.2:telnet S ==> IP / TCP 10.1.99.2:telnet > 10.1.99.25:ftp_data
RA / Padding
IP / TCP 10.1.99.25:ftp_data > 10.1.99.2:http S ==> IP / TCP 10.1.99.2:http > 10.1.99.25:ftp_data SA /
Padding
IP / TCP 10.1.99.25:ftp_data > 10.1.99.2:domain S ==> IP / TCP 10.1.99.2:domain >
10.1.99.25:ftp_data SA / Padding
```
Each sent packet has the corresponding received packet listed, it's not as much detail as using sr1()
shows but from the output above, you can actually tell which ports on my router are “open”
