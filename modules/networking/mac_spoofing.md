# MAC Spoofing

MAC Address, abbreviated as Media Access Control address, is the distinct serial number given for each interface from the factory by its vendor. In simpler words, it is the exclusive, worldwide physical identification number given to every device that is connected to a network interface, be it wired or wireless. This address is used to recognize the communications of the network interface on every local network. MAC address includes 48 bits, or 6 bytes, and takes the subsequent format: 'XX:XX:XX:YY:YY: YY'. Let us learn more about mac spoofing attack.

An IP address is used to recognize where you are on the Internet and the MAC address is used to recognize what device is on the local network. This MAC address is virtually burned to the hardware by the vendor and hence the end-user cannot alter or rewrite this burned--in address (BIA). However, masking the MAC address on the software side is possible and this is how MAC spoofing works.

1\. WHAT IS A MAC SPOOFING ATTACK?
----------------------------------

MAC spoofing attack is a common phenomenon currently, thanks to the ever-growing technology. But first, we need to understand what a MAC spoofing attack is in order to prevent ourselves from falling victims to it. 

MAC address spoofing attack is where the impostor or hacker hunts the network for valid and original MAC addresses and circumvents access control measures, giving the hacker the advantage to pose as one of the valid MAC addresses. 

MAC address spoofing is which type of attack wherein the hacker is also able to bypass authentication checks as he presents this as the default gateway and copies all of the data passed on to the default gateway without being identified, giving him all the important details about applications in use and end-host IP addresses. 

2\. WHAT IS MAC SPOOFING AND WHY IS IT DONE?
--------------------------------------------

One of the most important strategies used in MAC spoofing attacks is to mask the MAC address, also popularly known as MAC ID spoofing. Spoofing in general means the diverse methods available to control and operate the fundamental address system in different computer networks. 

So the answer to what is MAC address spoofing is very simple as it means a method for changing or masking the factory-assigned MAC address of a network interface on a device.

3\. WHY IS MAC SPOOFING DONE?
-----------------------------

Besides hackers using the strategy of MAC spoofing to bypass access controls and security checks or for illegal activities, people also use MAC spoofing for legitimate reasons. As explained before, the MAC address is the unique number given to every network device and it is used to identify that network device in the wide world. Therefore, the following are some of the reasons to mask or spoof the MAC address:

### A) Protection of privacy

Since MAC addresses are passed over open or public WLAN or LAN networks, it is unencrypted, giving away the details of devices that are registered in that network and respective hardware addresses. In order to prevent the easy availability of this information, some users mask the address to protect their privacy. However, it is also to be noted that hackers use the same reason to hide their identity and surf anonymously for illegal activities.  

### B) Prevention of Identity theft

Many administrators and IT Teams use security measures to guard IT systems from internal and external hazards, by restricting access to the LAN to authorized devices. At the network stage, connecting factors such as Ethernet switches by way of port security enables to filter network data passage on the OSI layer 2. Using the technique of white-listing, if there is an unknown address, it is automatically blocked. MAC filters are also used to restrict access by WLAN networks.

### C) Access to paid software applications

MAC address spoofing is also done to reproduce an authorized device to get access to paid software applications or online services. But sometimes, it's misused by some people who rewrite or mask their MAC address to the one given in the license agreement of the paid software to use the software. The software or online service provider could always deem this type of MAC spoofing is a deceptive use of services and take legal recourse. 

4\. HOW IT WORKS
----------------

All operating systems such as Windows, Mac (OS-X), Linux, Android, enables you to alter the MAC addresses without much difficulty. The following steps indicate how MAC spoofing works on each platform:

### A) Mac spoofing windows

Step 1- Go to the control panel or simply click Windows key X on your keyboard and open 'device manager'.

Step 2- Click to expand 'Network Adapters' and right-click the Ethernet or the adapter for which you want to change the MAC address for and choose 'Properties'

Step 3- Go to the Advanced tab and in the property box, click either the 'Network Address' or 'Locally administered Address'.

 Step 4- In the 'Value' box you will see the MAC address.  Clear its contents then enter a new address.

 Step 5- Click OK and restart your computer after entering the new MAC address

 Step 6- You can check by opening 'Command Prompt', and then click Run as administrator. At the command prompt, type: *ipconfig/all* and then hit Enter to check the physical address. 

### B) Mac spoofing android

There are a lot of methods and apps to MAC address spoofing android. While a lot of methods include rooting your android device, some tricks don't involve rooting but it is only temporary. The below method enlists the one with a rooted android device.

Step 1- Install the Busybox and Terminal app in the android device and open the Terminal type.

Step 2- Type in the following command: *busybox iplink show eth0* which will display the current MAC address.

Step 3- Change the MAC address using the following command: *busybox ifconfig eth0 hw ether XX:XX:XX:XX:XX:* XX, wherein the XX:XX:XX:XX:XX: XX is to be replaced with the new MAC address. 

Step 4- Check if your MAC address is changed using the command given in Step 2.

5\. HOW TO PREVENT MAC SPOOFING
-------------------------------

Spoofing a MAC address doesn't go around the network and hence a network manager will still be able to scrutinize the traffic from the spoofed MAC address. An address that has been spoofed will end up showing traffic from two different sources concurrently. Another method would be a company device ostensibly connected to the network from another physical location on the network. It is also imperative to harden the system, access points, or individual machines to prevent MAC spoofing attacks.

One can also firewall or can run a service built especially for MAC SPOOFING, for raising protection against MAC spoofing. There are many MAC spoofing tools that would facilitate the detection of MAC spoofing examples such as Reverse ARP, traffic analyzers, and bandwidth monitors.

# References
https://www.jigsawacademy.com/blogs/cyber-security/mac-spoofing-attack/
