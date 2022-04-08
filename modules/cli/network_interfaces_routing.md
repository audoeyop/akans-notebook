# Network Interfaces and Routing Commands

## Ifconfig
ifconfig stands for "interface configuration." It is used to view and change the configuration of the network interfaces on your system.

Display link status & IP Addresses
```
ifconfig
```

Bring interface up
```
ifconfig eth0 up
```
Bring interface down
```
ifconfig eth0 down
```
Assign IP to device eth0
```
ifconfig eth0 192.168.0.2
```
Assign IP to device including netmask and broadcast
```
ifconfig eth0 192.168.0.2 netmask 255.255.255.0 broadcast 192.168.0.1
```
Add IP as alias
```
ifconfig eth0:1 192.168.1.2
```

## Route Command

The `route` command is used for displaying network routing information and setting static (non-dynamic by route) route paths in the route tables.

Running route on the command line without any options displays the routing table entries:

```
$ route

Kernel IP routing table
Destination     Gateway         Genmask         Flags Metric Ref    Use Iface
default         192.168.1.2     0.0.0.0         UG    1024   0        0 eth0
192.168.1.0     *               255.255.255.0   U     0      0        0 eth0
```

This shows us how the system is currently configured. If a packet comes into the system and has a destination in the range 192.168.1.0 through 192.168.1.255, then it is forwarded to the gateway *, which is `0.0.0.0` — a special address which represents an invalid or non-existant destination. Here, our system will not route these packets. Other ip addresses are routed through the default gateway, which is `192.168.1.2`.

Output is organized as follows:

- Destination - The destination network or destination host.

- Gateway - The gateway address or ’*’ if none set.

- Genmask - The netmask for the destination net;
 ’255.255.255.255’ for a host destination and ’0.0.0.0’ for the default route.

- Flags	Possible flags include
 - U (route is up)
 - H (target is a host)
 - G (use gateway)
 - R (reinstate route for dynamic routing)
 - D (dynamically installed by daemon or redirect)
 - M (modified from routing daemon or redirect)
 - A (installed by addrconf)
 - C (cache entry)
 - ! (reject route)


- Metric - The ’distance’ to the target (usually counted in hops). It is not used by recent kernels, but may be needed by routing daemons.

- Ref	Number of references to this route. (Not used in the Linux kernel.)
Use	Count of lookups for the route. Depending on the use of -F and -C this will be either route cache misses (-F) or hits (-C).

- Iface	- Interface to which packets for this route will be sent.

### Routing Commands

Shows routing table for all IPs bound to the server.
```
route -n
```

Add a route to the network 192.56.76.x via "eth0" The Class C netmask modifier is not really necessary here because >192.* is a Class C IP address. The word "dev" can be omitted here.
```
route add -net 192.56.76.0 netmask 255.255.255.0 dev eth0
```

This command sets all of the class D (multicast) IP routes to go via "eth0". This is the correct normal configuration for a multicasting kernel.
```
route add -net 224.0.0.0 netmask 240.0.0.0 dev eth0
```

The following command deletes a route
```
sudo route del -net 192.168.3.0 gw 192.168.1.1 netmask 255.255.255.0 dev eth0
```

Add default route
```
route add default gw 192.168.1.1
```

Delete defualt route
```
route del default gw 192.168.1.1
```

| Command |	Description |
|-----|-----|
| `route add -net 127.0.0.0` | adds the normal loopback entry, using netmask 255.0.0.0 (class A net, determined from the destination address) and associated with the "lo" device (assuming this device was prviously set up correctly with ifconfig(8)). |
| `route add -net 192.56.76.0 netmask 255.255.255.0 dev eth0` | adds a route to the network 192.56.76.x via "eth0". The Class C netmask modifier is not really necessary here because 192.* is a Class C IP address. The word "dev" can be omitted here. |
| `route add default gw mango-gw` | adds a default route (which will be used if no other route matches). All packets using this route will be gatewayed through "mango-gw". The device which will actually be used for that route depends on how we can reach "mango-gw" - the static route to "mango-gw" will have to be set up before. |
| `route add ipx4 sl0` | Adds the route to the "ipx4" host via the SLIP interface (assuming that "ipx4" is the SLIP host). |
| `route add -net 192.57.66.0 netmask 255.255.255.0 gw ipx4` | This command adds the net "192.57.66.x" to be gatewayed through the former route to the SLIP interface. |
| `route add -net 224.0.0.0 netmask 240.0.0.0 dev eth0` | This is an obscure one documented so people know how to do it. This sets all of the class D (multicast) IP routes to go via "eth0". This is the correct normal configuration line with a multicasting kernel. |
| `route add -net 10.0.0.0 netmask 255.0.0.0 reject` | This installs a rejecting route for the private network "10.x.x.x." |

## IP Command
The `ip` command is used to show or manipulate netwotk interfaces, routing, and tunnels.

### IP Queries
| Command | Descriptions and Tasks |
| ----- | -----|
| `ip addr` | Show information for all addresses |
| `ip addr show dev em1` | Display information only for device em1 |
|`ip link` | Show information for all interfaces |
| `ip link show dev em1` | Display information only for device em1 |
| `ip -s link` | Display interface statistics |
| `ip route` |List all of the route entries in the kernel |
| `ip maddr` | Display multicast information for all devices|
| `ip maddr show dev em1` | Display multicast information for device em1 |
| `ip neigh` | Display neighbour objects |
| `ip neigh` show dev em1 | Show the ARP cache for device em1 |
| `ip help` | Display ip commands and arguments |
| `ip addr help` | Display address commands and arguments|
| `ip link help` | Display link commands and arguments |
| `ip neigh help` | Display neighbour commands and arguments |

### Modifying Address and Link Properties

| Command | Descriptions and Tasks |
| ----- | -----|
| `ip addr add 192.168.1.1/24 dev em1` | Add address 192.168.1.1 with netmask 24 to device em1 |
| `ip addr del 192.168.1.1/24 dev em1` | Remove address 192.168.1.1/24 from device em1 |
| `ip link set em1 up` | Bring em1 online |
| `ip link set em1 down` | Bring em1 offline |
| `ip link set em1 mtu 9000` | Set the MTU on em1 to 9000 |
| `ip link set em1 promisc on` | Enable promiscuous mode for em1 |

### Adjusting and Viewing Routes

| Command | Descriptions and Tasks |
| ----- | -----|
| `ip route add default via 192.168.1.1 dev em1` | Add a default route (for all addresses) via the local gateway 192.168.1.1 that can be reached on device em1 |
| `ip route add 192.168.1.0/24 via 192.168.1.1` | Add a route to 192.168.1.0/24 via the gateway at 192.168.1.1
| `ip route add 192.168.1.0/24 dev em1` | Add a route to 192.168.1.0/24 that can be reached on device em1
| `ip route delete 192.168.1.0/24 via 192.168.1.1` | Delete the route for 192.168.1.0/24 via the gateway at 192.168.1.1
| `ip route replace 192.168.1.0/24 dev em1` | Replace the defined route for 192.168.1.0/24 to use device em1
| `ip route get 192.168.1.5` | Display the route taken for IP 192.168.1.5

### Multicast addressing

| Command | Descriptions and Tasks |
| ----- | -----|
| `ip maddr add 33:33:00:00:00:01 dev em1` | Add mutlicast address 33:33:00:00:00:01 to em1
| `ip maddr del 33:33:00:00:00:01 dev em1` | Delete address 33:33:00:00:00:01 from em1

### Mapping the ARP table

| Command | Descriptions and Tasks |
| ----- | -----|
| `ip neigh add 192.168.1.1 lladdr 1:2:3:4:5:6 dev em1` | Add address 192.168.1.1 with MAC 1:2:3:4:5:6 to em1
| `ip neigh del 192.168.1.1 dev em1` | Invalidate the entry for 192.168.1.1 on em1 |
| `ip neigh replace 192.168.1.1 lladdr 1:2:3:4:5:6 dev em1` | Replace the entry for address 192.168.1 |


USEFUL NETWORKING COMMANDS (NOT NECESSARILY PROVIDED FROM IPROUTE)
### Other Useful Network Commands

`arping` - Send ARP request to a neighbour host

| Command | Descriptions and Tasks |
| ----- | -----|
| `arping -I eth0 192.168.1.1` | Send ARP request to 192.168.1.1 via interface eth0
| `arping -D -I eth0 192.168.1.1` | Check for duplicate MAC addresses at 192.168.1.1 on eth0

`ethtool` - Query or control network driver and hardware settings

| Command | Descriptions and Tasks |
| ----- | -----|
| `ethtool -g eth0` | Display ring buffer for eth0
| `ethtool -i eth0` | Display driver information for eth0
| `ethtool -p eth0` | Identify eth0 by sight, typically by causing LEDs to blink on the network port
| `ethtool -S eth0` | Display network and driver statistics for eth0

`ss` -  Display socket statistics. The below options can be combined

| Command | Descriptions and Tasks |
| ----- | -----|
| `ss -a` | Show all sockets (listening and non-listening)
| `ss -e` | Show detailed socket information
| `ss -o` |  Show timer information
| `ss -n` | Do not resolve addresses
| `ss -p` | Show process using the socket

| Network Command | IP Route Command |
| ----- | -----|
| `arp -a` |  `ip neigh`
| `arp -v` | `ip -s neigh`
| `arp -s 192.168.1.1 1:2:3:4:5:6` | `ip neigh add 192.168.1.1 lladdr 1:2:3:4:5:6 dev eth1`
| `arp -i eth1 -d 192.168.1.1` | `ip neigh del 192.168.1.1 dev eth1`
| `ifconfig -a` | `ip addr`
| `ifconfig eth0 down` | `ip link set eth0 down`
| `ifconfig eth0 up` | `ip link set eth0 up`
| `ifconfig eth0 192.168.1.1` | `ip addr add 192.168.1.1/24 dev eth0`
| `ifconfig eth0 netmask 255.255.255.0` | `ip addr add 192.168.1.1/24 dev eth0`
| `ifconfig eth0 mtu 9000` | `ip link set eth0 mtu 9000`
| `ifconfig eth0:0 192.168.1.2` | `ip addr add 192.168.1.2/24 dev eth0`
| `netstat` | `ss`
| `netstat -neopa` | `ss -neopa`
| `netstat -g` | `ip maddr`
| `route` | `ip route`
| `route add -net 192.168.1.0 netmask 255.255.255.0 dev eth0` | `ip route add 192.168.1.0/24 dev eth0`
| `route add default gw 192.168.1.1` | `ip route add default via 192.168.1.1`

# References
https://access.redhat.com/sites/default/files/attachments/rh_ip_command_cheatsheet_1214_jcs_print.pdf
