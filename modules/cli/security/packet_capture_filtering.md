# Packet Capturing & Filtering

## Tcpdump

Tcpdump is a command line utility that allows you to capture and analyze network traffic going through your system. It is often used to help troubleshoot network issues, as well as a security tool.

### Basic Command
Let’s start with a basic command that will get us HTTPS traffic:
```
tcpdump -nnSX port 443

04:45:40.573686 IP 78.149.209.110.27782 > 172.30.0.144.443: Flags [.], ack
278239097, win 28, options [nop,nop,TS val 939752277 ecr 1208058112], length 0
    0x0000:  4500 0034 0014 0000 2e06 c005 4e8e d16e  E..4........N..n
    0x0010:  ac1e 0090 6c86 01bb 8e0a b73e 1095 9779  ....l......>...y
    0x0020:  8010 001c d202 0000 0101 080a 3803 7b55  ............8.{U
    0x0030:  4801 8100
```

This showed some HTTPS traffic, with a hex display visible on the right portion of the output (alas, it’s encrypted). Just remember—when in doubt, run the command above with the port you’re interested in, and you should be on your way.


### Everything on an interface
Print traffic that is flowing through a network interface on your device. In the example below, the device is `eth0`.
```
tcpdump -i eth0
```
Or get all interfaces with `-i any`.
```
tcpdump -i any
```

### Find traffic by ip
Using the `host` option allows you to filter by ip address. For example, you can see traffic that’s going to or from 1.1.1.1.
```
tcpdump host 1.1.1.1
06:20:25.593207 IP 172.30.0.144.39270 > one.one.one.one.domain:
12790+ A? google.com.
(28) 06:20:25.594510 IP one.one.one.one.domain > 172.30.0.144.39270:
12790 1/0/0 A 172.217.15.78 (44)
```

Filter by host, network, and port:

`host` - ip address (eg. 1.1.1.1)

`net` - network (eg. 10.0.0.0/16)

`port` - network port (eg. 80)

Directions:

`src` - Filter packets coming from

`dst` - Filter packets coming from


Network Protocols:

`tcp`, `udp`, `icmp`, and many more.


### Filtering By Source and/or Destination
If you only want to see traffic in one direction or the other, you can use `src` and `dst`.
```
tcpdump src 1.1.1.1
tcpdump dst 1.0.0.1
```

### Finding packets by network
To find packets going to or from a particular network or subnet, use the net option.

You can combine this with the `src` and `dst` options as well.
```
tcpdump net 1.2.3.0/24
```

### Get packet contents with hex output
The hex output option `-X` is useful when you want to see the content of the packets in question, and it’s often best used when you’re isolating a few candidates for closer scrutiny.
```
tcpdump -X icmp
```

### Show traffic related to a specific port
You can find specific port traffic by using the `port` option followed by the port number.
```
tcpdump port 3389
tcpdump src port 1025
```

### Tcpdump Common Options

`-nn` : Don’t resolve hostnames or port names.

`-S` : Get the entire packet.

`-X` : Get hex output.

### Show traffic of one protocol
If you’re looking for one particular kind of traffic, you can use `tcp`, `udp`, `icmp`, and many others as well.
```
tcpdump icmp
````

### Show only ip6 traffic
You can also find all IP6 traffic using the protocol option.
```
tcpdump ip6
```

### Find traffic using port ranges
You can also use a range of ports to find traffic.
```
tcpdump portrange 21-23
```

### Find traffic based on packet size
If you’re looking for packets of a particular size you can use these options. You can use less, greater, or their associated symbols that you would expect from mathematics.
```
tcpdump less 32
tcpdump greater 64
tcpdump <= 128
```

### Reading / writing captures to a file (pcap)
It’s often useful to save packet captures into a file for analysis in the future. These files are known as PCAP (PEE-cap) files, and they can be processed by hundreds of different applications, including network analyzers, intrusion detection systems, and of course by tcpdump itself. Here we’re writing to a file called capture_file using the -w switch.
```
tcpdump port 80 -w capture_file
```
You can read PCAP files by using the -r switch. Note that you can use all the regular commands within tcpdump while reading in a file; you’re only limited by the fact that you can’t capture and process what doesn’t exist in the file already.
```
tcpdump -r capture_file
```

## Ngrep
The ngrep command line utility allows you to search and filter network packets. Feed ngrep a regular expression, and optionally a protocol, interface, and bpf filter, and you can print live networking packets to stdout, redirect (>) the contents to a file, or pipe (|) to another utility.

### Basic Usage
```
ngrep -q 'HTTP'
```
This command will query all interfaces and protocols for a string match of 'HTTP'. The -q flag will 'quiet' the output by printing only packet headers and relevant payloads. Most of the time, it is best to use 'quiet' output; otherwise, you might as well use tcpdump to capture everything. I will use -q in all the examples below so nobody cuts-and-pastes from this article and gets flooded with too much data.

### Adding Timestamps
```
ngrep -qt 'HTTP'
```
Use the t flag to print a timestamp along with the matched information. Use T to print the time elapsed between successive matches.

### Reading from pcap
```
ngrep -I network_capture.pcap -qt 'HTTP'
```
If you have a network capture file in .pcap format, use -I $FILE to filter the capture instead of a network interface. This can be handy, for example, if you have a record of a networking event and you need to do a quick analysis without all the bells and whistles of wireshark.

### Writing to pcap
```
ngrep -O network_capture.pcap -q 'HTTP'
```
Reverse of the above command, using only the -O flag will filter against a network interface and copy the matched packets into a capture file in .pcap format.

### Reading with byline
```
ngrep -q -Wbyline 'HTTP'
```
Linefeeds are printed as linefeeds, making the output pretty and more legible.

### Common bpf filters
A bpf specifies a rich syntax for filtering network packets based on information such as IP address, IP protocol, and port number.

IP address
```
ngrep -q 'HTTP' 'host 192.168' matches all headers containing the string 'HTTP' sent to or from the ip address starting with 192.168
ngrep -q 'HTTP' 'dst host 192.168' will do as above, but instead match a destination host
ngrep -q 'HTTP' 'src host 192.168' will do as above, but instead match a source host
```

IP protocol
```
ngrep -q 'HTTP' 'tcp'
ngrep -q 'HTTP' 'udp'
ngrep -q 'HTTP' 'icmp'
port number
ngrep -q 'HTTP' 'port 80'
```

## Wireshark

Wireshark is a packet sniffer and analysis tool. It captures network traffic on the local network and stores that data for offline analysis. Wireshark captures network traffic from Ethernet, Bluetooth, Wireless (IEEE.802.11), Token Ring, Frame Relay connections, and more.

Wireshark allows you to filter the log either before the capture starts or during analysis, so you can narrow down and zero into what you are looking for in the network trace. For example, you can set a filter to see TCP traffic between two IP addresses. You can set it only to show you the packets sent from one computer. The filters in Wireshark are one of the primary reasons it became the standard tool for packet analysis.

### Capturing Data Packets on Wireshark
When you open Wireshark, you see a screen that shows you a list of all of the network connections you can monitor. You also have a capture filter field, so you only capture the network traffic you want to see.

You can select one or more of the network interfaces using “shift left-click.” Once you have the network interface selected, you can start the capture, and there are several ways to do that.

Click the first button on the toolbar, titled “Start Capturing Packets.”

Wireshark how to start capturing screenshot

You can select the menu item Capture -> Start.

Wireshark capture packets screenshot

Or you could use the keystroke Control – E.

During the capture, Wireshark will show you the packets that it captures in real-time.

Wireshark how to stop capture screenshot

Once you have captured all the packets you need, you use the same buttons or menu options to stop the capture.

Best practice says that you should stop Wireshark packet capture before you do analysis.

### Analyzing Data Packets on Wireshark
Wireshark shows you three different panes for inspecting packet data. The Packet List, the top pane, is a list of all the packets in the capture. When you click on a packet, the other two panes change to show you the details about the selected packet. You can also tell if the packet is part of a conversation. Here are some details about each column in the top pane:

- No.: This is the number order of the packet that got captured. The bracket indicates that this packet is part of a conversation.

- Time: This column shows you how long after you started the capture that this packet got captured. You can change this value in the Settings menu if you need something different displayed.

- Source: This is the address of the system that sent the packet.

- Destination: This is the address of the destination of that packet.

- Protocol: This is the type of packet, for example, TCP, DNS, DHCPv6, or ARP.
Length: This column shows you the length of the packet in bytes.

- Info: This column shows you more information about the packet contents, and will vary depending on what kind of packet it is.

Packet Details, the middle pane, shows you as much readable information about the packet as possible, depending on what kind of packet it is. You can right-click and create filters based on the highlighted text in this field.

The bottom pane, Packet Bytes, displays the packet exactly as it got captured in hexadecimal.

When you are looking at a packet that is part of a conversation, you can right-click the packet and select Follow to see only the packets that are part of that conversation.

### Wireshark Filters
One of the best features of Wireshark is the Wireshark Capture Filters and Wireshark Display Filters. Filters allow you to view the capture the way you need to see it so you can troubleshoot the issues at hand. Here are several filters to get you started.

Wireshark Capture Filters
Capture filters limit the captured packets by the filter. Meaning if the packets don’t match the filter, Wireshark won’t save them. Here are some examples of capture filters:

host IP-address: this filter limits the capture to traffic to and from the IP address

net 192.168.0.0/24: this filter captures all traffic on the subnet.

dst host IP-address: capture packets sent to the specified host.

port 53: capture traffic on port 53 only.

port not 53 and not arp: capture all traffic except DNS and ARP traffic

### Wireshark Display Filters
Wireshark Display Filters change the view of the capture during analysis. After you have stopped the packet capture, you use display filters to narrow down the packets in the Packet List so you can troubleshoot your issue.

The most useful (in my experience) display filter is:

`ip.src==IP-address and ip.dst==IP-address`

This filter shows you packets from one computer (ip.src) to another (ip.dst). You can also use ip.addr to show you packets to and from that IP. Here are some others:

`tcp.port eq 25`: This filter will show you all traffic on port 25, which is usually SMTP traffic.

`icmp`: This filter will show you only ICMP traffic in the capture, most likely they are pings.

`ip.addr != IP_address`: This filter shows you all traffic except the traffic to or from the specified computer.

Analysts even build filters to detect specific attacks, like this filter to detect the Sasser worm:

`ls_ads.opnum==0x09`


### Wireshark Promiscuous Mode
By default, Wireshark only captures packets going to and from the computer where it runs. By checking the box to run Wireshark in Promiscuous Mode in the Capture Settings, you can capture most of the traffic on your LAN.

### Wireshark Command Line Interface
Wireshark does provide a Command Line Interface (CLI) if you operate a system without a GUI. Best practice would be to use the CLI to capture and save a log so you can review the log with the GUI.

`wireshark` : run Wireshark in GUI mode

`wireshark –h`: show available command line parameters for Wireshark
`wireshark –a duration:300 –i eth1 –w wireshark.` : capture traffic on the Ethernet interface 1 for 5 minutes. `–a` means automatically stop the capture, `-i` specifics which interface to capture

# Metrics and Statistics
Under the Statistics menu item, you will find a plethora of options to show details about your capture.

Capture File Properties:

Wireshark I/O Graph:

## References
https://danielmiessler.com/study/tcpdump/
https://coderwall.com/p/zqulaw/introduction-to-ngrep
https://www.varonis.com/blog/how-to-use-wireshark
TODO: add wireshark screenshots
