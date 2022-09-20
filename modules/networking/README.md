Computer networking
-----------------------------

A basic understanding of networking is important for anyone managing a server. Not only is it essential for getting your services online and running smoothly, it also gives you the insight to diagnose problems.

This document will provide a basic overview of some common networking concepts. We will discuss basic terminology, common protocols, and the responsibilities and characteristics of the different layers of networking.

This guide is operating system agnostic, but should be very helpful when implementing features and services that utilize networking on your server.

Networking Glossary
-------------------

* * * * *

Before we begin discussing networking with any depth, we must define some common terms that you will see throughout this guide, and in other guides and documentation regarding networking.

These terms will be expanded upon in the appropriate sections that follow:

-   Connection: In networking, a connection refers to pieces of related information that are transfered through a network. This generally infers that a connection is built before the data transfer (by following the procedures laid out in a protocol) and then is deconstructed at the at the end of the data transfer.

-   Packet: A packet is, generally speaking, the most basic unit that is transfered over a network. When communicating over a network, packets are the envelopes that carry your data (in pieces) from one end point to the other.

    Packets have a header portion that contains information about the packet including the source and destination, timestamps, network hops, etc. The main portion of a packet contains the actual data being transfered. It is sometimes called the body or the payload.

-   Network Interface: A network interface can refer to any kind of software interface to networking hardware. For instance, if you have two network cards in your computer, you can control and configure each network interface associated with them individually.

    A network interface may be associated with a physical device, or it may be a representation of a virtual interface. The "loopback" device, which is a virtual interface to the local machine, is an example of this.

-   LAN: LAN stands for "local area network". It refers to a network or a portion of a network that is not publicly accessible to the greater internet. A home or office network is an example of a LAN.

-   WAN: WAN stands for "wide area network". It means a network that is much more extensive than a LAN. While WAN is the relevant term to use to describe large, dispersed networks in general, it is usually meant to mean the internet, as a whole.

    If an interface is said to be connected to the WAN, it is generally assumed that it is reachable through the internet.

-   Protocol: A protocol is a set of rules and standards that basically define a language that devices can use to communicate. There are a great number of protocols in use extensively in networking, and they are often implemented in different layers.

    Some low level protocols are TCP, UDP, IP, and ICMP. Some familiar examples of application layer protocols, built on these lower protocols, are HTTP (for accessing web content), SSH, TLS/SSL, and FTP.

-   Port: A port is an address on a single machine that can be tied to a specific piece of software. It is not a physical interface or location, but it allows your server to be able to communicate using more than one application.

-   Firewall: A firewall is a program that decides whether traffic coming into a server or going out should be allowed. A firewall usually works by creating rules for which type of traffic is acceptable on which ports. Generally, firewalls block ports that are not used by a specific application on a server.

-   NAT: NAT stands for network address translation. It is a way to translate requests that are incoming into a routing server to the relevant devices or servers that it knows about in the LAN. This is usually implemented in physical LANs as a way to route requests through one IP address to the necessary backend servers.

-   VPN: VPN stands for virtual private network. It is a means of connecting separate LANs through the internet, while maintaining privacy. This is used as a means of connecting remote systems as if they were on a local network, often for security reasons.

There are many other terms that you may come across, and this list cannot afford to be exhaustive. We will explain other terms as we need them. At this point, you should understand some basic, high-level concepts that will enable us to better discuss the topics to come.

Network Layers
--------------

* * * * *

While networking is often discussed in terms of topology in a horizontal way, between hosts, its implementation is layered in a vertical fashion throughout a computer or network.

What this means is that there are multiple technologies and protocols that are built on top of each other in order for communication to function more easily. Each successive, higher layer abstracts the raw data a little bit more, and makes it simpler to use for applications and users.

It also allows you to leverage lower layers in new ways without having to invest the time and energy to develop the protocols and applications that handle those types of traffic.

The language that we use to talk about each of the layering scheme varies significantly depending on which model you use. Regardless of the model used to discuss the layers, the path of data is the same.

As data is sent out of one machine, it begins at the top of the stack and filters downwards. At the lowest level, actual transmission to another machine takes place. At this point, the data travels back up through the layers of the other computer.

Each layer has the ability to add its own "wrapper" around the data that it receives from the adjacent layer, which will help the layers that come after decide what to do with the data when it is passed off.

### OSI Model

* * * * *

Historically, one method of talking about the different layers of network communication is the OSI model. OSI stands for Open Systems Interconnect.

This model defines seven separate layers. The layers in this model are:

-   Application: The application layer is the layer that the users and user-applications most often interact with. Network communication is discussed in terms of availability of resources, partners to communicate with, and data synchronization.

-   Presentation: The presentation layer is responsible for mapping resources and creating context. It is used to translate lower level networking data into data that applications expect to see.

-   Session: The session layer is a connection handler. It creates, maintains, and destroys connections between nodes in a persistent way.

-   Transport: The transport layer is responsible for handing the layers above it a reliable connection. In this context, reliable refers to the ability to verify that a piece of data was received intact at the other end of the connection.

    This layer can resend information that has been dropped or corrupted and can acknowledge the receipt of data to remote computers.

-   Network: The network layer is used to route data between different nodes on the network. It uses addresses to be able to tell which computer to send information to. This layer can also break apart larger messages into smaller chunks to be reassembled on the opposite end.

-   Data Link: This layer is implemented as a method of establishing and maintaining reliable links between different nodes or devices on a network using existing physical connections.

-   Physical: The physical layer is responsible for handling the actual physical devices that are used to make a connection. This layer involves the bare software that manages physical connections as well as the hardware itself (like Ethernet).

As you can see, there are many different layers that can be discussed based on their proximity to bare hardware and the functionality that they provide.

### TCP/IP Model

* * * * *

The TCP/IP model, more commonly known as the Internet protocol suite, is another layering model that is simpler and has been widely adopted. It defines the four separate layers, some of which overlap with the OSI model:

-   Application: In this model, the application layer is responsible for creating and transmitting user data between applications. The applications can be on remote systems, and should appear to operate as if locally to the end user.

    The communication is said to take place between peers.

-   Transport: The transport layer is responsible for communication between processes. This level of networking utilizes ports to address different services. It can build up unreliable or reliable connections depending on the type of protocol used.

-   Internet: The internet layer is used to transport data from node to node in a network. This layer is aware of the endpoints of the connections, but does not worry about the actual connection needed to get from one place to another. IP addresses are defined in this layer as a way of reaching remote systems in an addressable manner.

-   Link: The link layer implements the actual topology of the local network that allows the internet layer to present an addressable interface. It establishes connections between neighboring nodes to send data.

As you can see, the TCP/IP model, is a bit more abstract and fluid. This made it easier to implement and allowed it to become the dominant way that networking layers are categorized.

Interfaces
----------

* * * * *

Interfaces are networking communication points for your computer. Each interface is associated with a physical or virtual networking device.

Typically, your server will have one configurable network interface for each Ethernet or wireless internet card you have.

In addition, it will define a virtual network interface called the "loopback" or localhost interface. This is used as an interface to connect applications and processes on a single computer to other applications and processes. You can see this referenced as the "lo" interface in many tools.

Many times, administrators configure one interface to service traffic to the internet and another interface for a LAN or private network.

In DigitalOcean, in datacenters with private networking enabled, your VPS will have two networking interfaces (in addition to the local interface). The "eth0" interface will be configured to handle traffic from the internet, while the "eth1" interface will operate to communicate with the private network.

Protocols
---------

* * * * *

Networking works by piggybacking a number of different protocols on top of each other. In this way, one piece of data can be transmitted using multiple protocols encapsulated within one another.

We will talk about some of the more common protocols that you may come across and attempt to explain the difference, as well as give context as to what part of the process they are involved with.

We will start with protocols implemented on the lower networking layers and work our way up to protocols with higher abstraction.

### Medium Access Control

* * * * *

Medium access control is a communications protocol that is used to distinguish specific devices. Each device is supposed to get a unique media access control address (MAC address) during the manufacturing process that differentiates it from every other device on the internet.

Addressing hardware by the MAC address allows you to reference a device by a unique value even when the software on top may change the name for that specific device during operation.

Medium access control is one of the only protocols from the link layer that you are likely to interact with on a regular basis.

### IP

* * * * *

The IP protocol is one of the fundamental protocols that allow the internet to work. IP addresses are unique on each network and they allow machines to address each other across a network. It is implemented on the internet layer in the IP/TCP model.

Networks can be linked together, but traffic must be routed when crossing network boundaries. This protocol assumes an unreliable network and multiple paths to the same destination that it can dynamically change between.

There are a number of different implementations of the protocol. The most common implementation today is IPv4, although IPv6 is growing in popularity as an alternative due to the scarcity of IPv4 addresses available and improvements in the protocols capabilities.

### ICMP

* * * * *

ICMP stands for internet control message protocol. It is used to send messages between devices to indicate the availability or error conditions. These packets are used in a variety of network diagnostic tools, such as ping and traceroute.

Usually ICMP packets are transmitted when a packet of a different kind meets some kind of a problem. Basically, they are used as a feedback mechanism for network communications.

### TCP

* * * * *

TCP stands for transmission control protocol. It is implemented in the transport layer of the IP/TCP model and is used to establish reliable connections.

TCP is one of the protocols that encapsulates data into packets. It then transfers these to the remote end of the connection using the methods available on the lower layers. On the other end, it can check for errors, request certain pieces to be resent, and reassemble the information into one logical piece to send to the application layer.

The protocol builds up a connection prior to data transfer using a system called a three-way handshake. This is a way for the two ends of the communication to acknowledge the request and agree upon a method of ensuring data reliability.

After the data has been sent, the connection is torn down using a similar four-way handshake.

TCP is the protocol of choice for many of the most popular uses for the internet, including WWW, FTP, SSH, and email. It is safe to say that the internet we know today would not be here without TCP.

### UDP

* * * * *

UDP stands for user datagram protocol. It is a popular companion protocol to TCP and is also implemented in the transport layer.

The fundamental difference between UDP and TCP is that UDP offers unreliable data transfer. It does not verify that data has been received on the other end of the connection. This might sound like a bad thing, and for many purposes, it is. However, it is also extremely important for some functions.

Because it is not required to wait for confirmation that the data was received and forced to resend data, UDP is much faster than TCP. It does not establish a connection with the remote host, it simply fires off the data to that host and doesn't care if it is accepted or not.

Because it is a simple transaction, it is useful for simple communications like querying for network resources. It also doesn't maintain a state, which makes it great for transmitting data from one machine to many real-time clients. This makes it ideal for VOIP, games, and other applications that cannot afford delays.

### HTTP

* * * * *

HTTP stands for hypertext transfer protocol. It is a protocol defined in the application layer that forms the basis for communication on the web.

HTTP defines a number of functions that tell the remote system what you are requesting. For instance, GET, POST, and DELETE all interact with the requested data in a different way.

### FTP

* * * * *

FTP stands for file transfer protocol. It is also in the application layer and provides a way of transferring complete files from one host to another.

It is inherently insecure, so it is not recommended for any externally facing network unless it is implemented as a public, download-only resource.

### DNS

* * * * *

DNS stands for domain name system. It is an application layer protocol used to provide a human-friendly naming mechanism for internet resources. It is what ties a domain name to an IP address and allows you to access sites by name in your browser.

### SSH

* * * * *

SSH stands for secure shell. It is an encrypted protocol implemented in the application layer that can be used to communicate with a remote server in a secure way. Many additional technologies are built around this protocol because of its end-to-end encryption and ubiquity.

There are many other protocols that we haven't covered that are equally important. However, this should give you a good overview of some of the fundamental technologies that make the internet and networking possible.


Below are several core concepts in computer networking that a networking professional would be required to know:

-   LAN vs. WAN

-   Clients and servers

-   DNS lookup & IP addresses

-   Ethernet

-   Default gateway

-   Routers and switches

### LAN vs. WAN

A local area network (LAN) is a network that connects computing devices in the same relative vicinity. This could be an office building or a residential home where a local network is required for sharing resources. A wide area network, or WAN, is a network that is geographically boundless, and instead relies on DNS protocols and IP addresses.

### Clients and servers

A server is simply a large computer that holds services, images, digital video, internet protocols and more things that a client can access. A client is a computing device that reaches out to a server to access information and data. The client can be a home computer, a personal computing device like a tablet, smartphone or laptop, or it can even be an entity like a browser interacting with an API.

### DNS lookup & IP addresses

Domain naming system, or DNS, as it's commonly known, is a foundational piece of network infrastructure. That's because the DNS maps the domain name to an IP address. The reason that a domain name takes you to a webpage when you type it into your browser bar is because of DNS lookup retrieving the IP address that goes to the domain name.

An IP address is basically a network address for any device that is accessing the internet. It is mapped to other things, like email addresses, so that you can receive data, like an email for instance. The IP address mapped to a given email tells the internet where to send it to when it performs the function of delivering an email.

IP addresses can either be manually configured to a DNS server or they are received via Dynamic Host Configuration Protocol. Either way, they can be viewed by performing an IPCONFIG /ALL in Windows.

### Ethernet

In plain terms, Ethernet is a protocol to LAN. It is a cable composed of necessary components to connect a computing device to a network, like a network interface card (NIC). It's the most popular product for connecting LAN networks and has been the top choice since the 1990s for reliability and ease of use. Ethernet devices can be easily identified by their MAC address. Using address resolution protocol (or ARP), network engineers can map an IP address to a MAC address, which gives each computing device that connects to the Internet a unique identifier.

### Default gateway

When your computer interacts with other computing devices that are not on your LAN, it does so by accessing a default gateway. The default gateway is accessible because of a piece of equipment called a router. Routers are important tools that network professionals use daily.

### Routers and switches

The purpose of a router is to send traffic to IP subnets, as is the case when they offer a gateway for computing devices to go from LAN to WAN networks. Routers can offer additional features that include security additions, like firewalls, and increased functionality with multi-port switches.

Switches are used to connect computers to a LAN network. These work by switching frames based on MAC address information received. Network administrators are required to be skilled in connecting to both LAN and WAN. Routers and switches are an essential part of doing that.

Networking considerations
-------------------------

There are three types of deployment that you can use to activate your wireless network. These are:

### Cloud-based deployment

Using platform technology to connect devices in the cloud is an emerging way of managing networks. In a cloud-based deployment, a user can access a single cloud instance of the network where all of the devices are supported, powered by the Internet.

### Converged deployment

Some small offices and campuses operate on a converged model of deployment. In a converged model of deployment, multiple components, like wireless and wired devices, are connected in the same access switch. The switch then serves as a wireless control for wired devices as well as performing the traditional functions of a switch.

### Centralized deployment

Centralized deployment is the most common way to deploy a new network. If the network is in an office building or college, you can use centralized deployment which focuses the network out of a single, central location, consolidating it. Controllers that exist on-site direct the network.

# References
https://www.indeed.com/career-advice/career-development/everything-you-need-to-know-about-networking
