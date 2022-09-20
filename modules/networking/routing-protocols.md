# Network Routing Protocols

There are six common routing protocols, separated into three related pairings:

### 1\. Distance vector and link state protocols

Distance vector protocols can measure the distance---called hops---it takes data to arrive at its destination within a system or application. The number of hops refers to the specific number of routers the data may run through before reaching its ultimate destination. Typically, these protocols send information to other nearby devices, which might require large bandwidths for support. By sending this information, the protocols determine the most efficient routing paths.

Link state protocols also find the best routing path and also share information with nearby routers. However, they calculate the speed and the cost of resources associated with each potential path. For example, if a route is longer, it may cost more for the data to be copied additional times. To solve this, they apply algorithms and alert other routers when pathways have changed. They can also create and share different tables like:

-   Neighbor tables: This table type can store information and details from other close routers.

-   Topology tables: These help by storing information about the organization of entire networks.

-   Routing tables: These store information about the most efficient data routes.

The information from these tables can help link states determine and compare the data's journey speed and the components and costs involved in getting it there.

### 2\. Interior gateway (IGP) and exterior gateway (EGP) protocols

Interior gateway protocols usually exchange information with other routers within single autonomous systems. These systems can include one routing network or a group of networks operating under the same control. This allows for simpler information changes within the same internal network, without the interference of outside routers.

Exterior gateway protocols communicate information between routing networks in different autonomous systems. Typically, because they're in different systems, this process is more complex and potentially less common. The extra complexity can come from the need for computer networks to communicate outside of their default systems. This might make EGPs less common than other protocols that communicate within the same systems.

### 3\. Classful and classless protocols

Classful protocols perform routing updates without including subnet mask information. This is a number identification for devices with similar internet protocol (IP) network information. This classification might exclude the information because it focuses on identifying entire networks rather than individual IP address identification. Classful protocols require greater bandwidth because they perform routing updates at regular intervals. Because this classification supports fewer protocol types, it's becoming less common.

These protocols include subnet mask information during routing updates, and they can communicate with devices in separate networks. This may be because classless protocols focus on transferring more detailed data at higher complexity levels. Including the subnet mask information might help produce more accurate routes for data efficiency. Classless protocols also use less bandwidth because they perform updates only when there are changes to the data.

7 types of routing protocols
----------------------------

Once you know how to categorize routing protocols, you can learn more about the seven different types.

### 1\. Routing information protocol (RIP)

RIP, an interior gateway protocol, is one of the first protocols created. You can use it with local area networks (LANs), which are linked computers in a small range, or wide area networks (WANs), which are telecommunications networks that cover a greater range. There are two different versions of this protocol type: RIPv1 and RIPv2.

RIPv1, the original version, is a classful protocol that examines and evaluates network paths based on the hops to the pre-determined destination. Typically, it communicates with other networks by broadcasting its IP address. Meanwhile, the newer version, RIPv2, shares its routing table through a multicast address, which identifies the main computer network. This version, which is a classless protocol, also features advanced security measures, like authentication, to protect data. RIPv2 is beneficial for smaller networks because it can only support router journeys of 15 hops or fewer.

### 2\. Interior gateway protocol (IGRP)

Cisco, an international technology company, created IGRP. It uses many of RIP's foundational functions but increases the maximum amount of supported hops to 100. As a result, it may work better for larger networks. IGRPs are distance vector and classful protocols. To function, IGRP includes metrics like network capacity, reliability and load to compare. This type also automatically updates when changes, like route adjustments, occur. This helps prevent routing loops, which are errors that create an endless circle of data transfer.


### 3\. Enhanced interior gateway routing protocol (EIGRP)

Cisco also developed EIGRP, which allows for 255 hops. This type classifies as a distance vector, interior gateway and classless protocol. It uses the reliable transport protocol and the diffusing update algorithm to speed up the data convergence process, which maximizes efficiency. When in use, a router can take information from other routers' tables and record them as references. If a change occurs, each router notifies its neighbor to help ensure they all know which data routes are in use. This helps prevent potential miscommunications between routers.

### 4\. Open shortest path first (OSPF)

OSPF---which classifies as a link state, interior gateway and classless protocol---uses the shortest path first (SPF) algorithm to ensure the efficient transmission of data. Internally, this type maintains multiple databases with topology tables and information about its entire network. Typically, the information comes from link state advertisements sent by individual routers. The advertisements, which are like reports, share detailed descriptions of the path's distance and how many resources it may require.

OSPF uses an algorithm called Dijkstra to recalculate pathways when topology changes occur. It also uses authentication practices to ensure its data is secure throughout changes or network breaches. Small and large network organizations may benefit from using OSPF because of its scalability features.

### 5\. Exterior Gateway Protocol (EGP)

EGP, a type of exterior gateway protocol, is useful for exchanging data or information between different gateway hosts in autonomous systems. Specifically, it helps provide routers with space to share information across domains, like the internet. The routing table for this protocol includes:

-   Recognized routers

-   Route costs

-   Network addresses of nearby devices

EGP maintains closely located network databases to route the different pathways data might take to reach its destination. The databases then share the information between the connected routers to ensure all routers update their tables. The new routing tables can help determine the best route for data.

### 6\. Border gateway protocol (BGP)

BGP is another type of exterior gateway protocol that was initially developed to replace EGP. It uses the best path selection algorithm for performing data package transfers, making it a distance vector protocol as well. To automatically determine the best route, BGP references factors like:

-   Path length

-   Origin type

-   Router identification

-   Neighbor IP addresses

BGP allows administrators to alter transfer routes depending on their needs and offers advanced security features so only authorized routers can exchange data and information with each other.

### 7\. Immediate system-to-immediate system (IS-IS)

IS-IS---classified as a link state, interior gateway and classless protocol---is commonly used to send and share IP routing information on the internet. The protocol uses an altered version of the Dijkstra algorithm. Usually, the protocol organizes routers into groups to create larger domains and connect routers for data transferring. IS-IS frequently uses these two network types:

-   Network service access point (NSAP): Similar to an IP address, an NSAP is the identification of a service access point in systems that use the open system interconnection (OSI) model.

-   Network entity title (NET): This helps identify individual network routers within larger computer networks.
