https://www.itprotoday.com/windows-78/binary-numbers-and-subnet-masks#:~:text=A%20subnet%20mask%2C%20like%20an,part%20of%20the%20network%20ID.
https://d12vzecr6ihe4p.cloudfront.net/media/965927/wp-binary-and-ip-address-basics-of-subnetting.pdf

To truly understand how to derive IP subnet masks and apply them to addresses, you must understand binary numbers and how to convert them to decimal numbers. Let's start with something that we're all pretty comfortable with--namely, decimal (base 10) numbers. Each digit in a decimal number stands for a different power of 10. You interpret the number 7836, for example, as follows:

7*103 + 8*102 + 3*101 + 6*100 =
7*1000 + 8*100 + 3*10 + 6*1 =
7000 + 800 + 30 + 6 =
7836
You interpret binary (base 2) numbers the same way as you do decimal numbers, except that each column of a binary number represents a different power of 2 rather than 10. Let's first review the powers of 2 (we're only going to go as far as we need to for an 8-bit byte because IP addresses have 8-bit bytes).

20 = 124 = 16
21 = 225 = 32
22 = 426 = 64
23 = 827 = 128
Given this information, you can convert the binary number 11010011 to decimal as follows.

11010011 =
1*27 + 1*26 + 0*25 + 1*24 + 0*23 + 0*22 + 1*21 + 1*20 =
1*128 + 1*64 + 0*32 + 1*16 + 0*8 + 0*4 + 1*2 + 1*1 =
128 + 64 + 16 + 2 + 1 =
211
IP Addresses and Subnet Masks
You can apply what you know about binary numbers to IP addresses and subnet masks. IP addresses are 32 bits, or four 8-bit bytes, in length. Although computers store IP addresses in binary format, you typically write them in dotted-decimal notation because it's easier to read. Dotted-decimal notation lets you examine an IP address one byte at a time. In standard classful addressing, Class A addresses devote one byte to the network ID and three bytes to the host ID. Class B addresses devote two bytes to the network ID and two bytes to the host ID, and Class C addresses devote three bytes to the network ID and one byte to the host ID.

A subnet mask provides IP, routing protocol, and any other software that deals with addresses a way to determine the network ID and host ID. A subnet mask, like an IP address, is 32 bits in length. Subnet masks are composed of some number of 1 bits followed by enough 0 bits to form a 32-bit value. The bit positions with a 1 correspond with the bit positions in the IP address that are part of the network ID. Therefore, in classful addressing, the subnet mask has eight 1 bits for Class A, sixteen 1 bits for Class B, and twenty-four 1 bits for Class C addresses. These masks are said to be 8, 16, or 24 bits in length, but these numbers refer only to the number of 1 bits because masks really are always 24 bits long.


Suppose you have the Class C address 192.168.18.55 with the regular classful 24-bit Class C subnet mask 255.255.255.0. In binary, the address is (with spaces inserted for readability)

11000000 10101000 00010010 00110111
and the mask is

11111111 11111111 11111111 00000000
When software needs to determine the network ID portion of the 192.168.18.55 address, it performs a logical AND operation with the address bits and the subnet mask bits:

Address:	11000000	10101000	00010010	00110111
Subnet Mask:	11111111	11111111	11111111	00000000
AND	_______________	_______________	_______________	_______________
Network ID:	11000000	10101000	00010010	00000000
In the AND calculation, any address bit corresponding with a 1 bit in the subnet mask maintains the address bit's value (either 0 or 1), and any address bit corresponding with a 0 bit in the subnet mask is forced to 0. Thus, the calculation reveals that the network ID is 192.168.18.0.

Variable-Length Subnet Masks
In variable-length subnet mask (VLSM) and Classless Inter-Domain Routing (CIDR) notation, the 255.255.255.0 mask is referred to as a /24 (pronounced "slash 24") because it has twenty-four 1 bits. VLSMs are essential to support classless addressing, letting you build masks that aren't restricted to the byte boundaries of classful addressing. Thus, you can aggregate many network IDs into one entry in a routing table or segment one Class C address, for example, into several subaddresses.

Because you write some number of 1s followed by 0s to create a mask, an all-1s byte has the value 255 and an all-0s byte has the value 0. But a VLSM might not have a mask that falls on a byte boundary, so one of the bytes can have a value other than 0 or 255. In fact, an 8-bit byte has eight possible subnet values as you increase the number of 1 bits from the left:

10000000 = 128
11000000 = 192 = (128+64)
11100000 = 224 = (128+64+32)
11110000 = 240 = (128+64+32+16)
11111000 = 248 = (128+64+32+16+8)
11111100 = 252 = (128+64+32+16+8+4)
11111110 = 254 = (128+64+32+16+8+4+2)
11111111 = 255 = (128+64+32+16+8+4+2+1)

VLSMs give you a lot of flexibility to carve out multiple subnets within the Class C space. Suppose you want to create eight subnetworks in the 192.168.18.0 address space. You add 3 bits to the length of the 24-bit subnet mask because 23 = 8. You now have a /27, or 255.255 .255.224, subnet mask. (Recall that the first 24 bits are all 1s, so each of the first three bytes is 255.) The fourth byte has three 1s in it and, therefore, has the value 224.

Because you used 3 bits of the final byte as a mask, the host IDs are limited to 5 bits. Thus, each subnet is limited to 25, or 32, hosts. (In fact, each subnet is limited to 30 hosts. The all-0s host ID is used as the 0 placeholder for the network number, and the all-1s host ID is reserved as the subnet's broadcast address.)

The /27 mask does indeed give you eight subnets, but to build a network diagram or a routing table, you also need to know the subnet numbers. The eight possible values of the 3-bit subnet mask are

0 = 0004 = 100
1 = 0015 = 101
2 = 0106 = 110
3 = 0117 = 111
Therefore, the eight possible values of the final address byte are

000 00000 = 0
001 00000 = 32
010 00000 = 64
011 00000 = 96 = (64+32)
100 00000 = 128
101 00000 = 160 = (128+32)
110 00000 = 192 = (128+64)
111 00000 = 224 = (128+64+32)
And the eight network IDs that you can use for routing purposes are

192.168.18.0/27192.168.18.128/27
192.168.18.32/27192.168.18.160/27
192.168.18.64/27192.168.18.192/27
192.168.18.96/27192.168.18.224/27
To avoid ambiguity, always indicate the subnet mask along with the address itself, as I've done. The address 192.168.18.128, for example, can be used with a subnet mask anywhere from 26 to 30 bits in length.
