https://timseverien.github.io/binary-cheatsheet/

Background
Looking at your computer screen, what do you see? Text, colours, images, videos and much more. Everything you see, everything you store on your computer, every button you press is a stream of ones and zeros. Why? How does it work?

Computers parts are able to store data via tiny electronic components called flip-flops. They can be set to either of two states: “one” or “zero.” These components can store a single value we call a bit.

To store other values than ones and zeroes, a series of bits can be grouped. If one bit can have two different states, a group of two bits can have four. A group of four bits can have up to sixteen unique states. The amount of different states grows exponentially for every bit that is added to a group. s = n2, where s is the number of states, and n the number of bits within the group.

The de-facto standard is to call a group of bits a byte, and one byte contains 8 bits. The more explicit term for an 8-bit group is octet.

Binary is the purest representation of data on computers, but it isn’t easy to understand what the data represents. How do we get from binary to other values?

Representation
Many typed programming languages have datatypes like integers, floats, strings, etc. These datatypes tell the computer how to interpret binary data. Instead of modifying bits and bytes to add two integers, we can use arithmetic operators, like a plus (+), and the computer will know what to do at binary level. Dynamically typed languages do the same, but also removes the need to tell which variable has which type.

A common datatype is an unsigned integer (uint). When an integer is signed, the first bit will be used to store whether the integer is a positive or negative integer. When it’s unsigned, the data type can only store positive integers. So a uint is an integer that must be equal or greater than 0.

Let’s have look at the binary representation of such an integer, in 8 bits. A uint is a positive integer starting from 0. Incrementing is very similar to our decimal system:

Increment the least significant number
If least significant number exceeds maximum value, reset and increment the number one place left
// No bits set => zero
00000000 = 0
// Increment least significant bit
00000001 = 1
// Least significant bit exceeds max, so we reset it and increment bit left of it
00000010 = 2
00000011 = 3
00101010 = 42
11111111 = 255
Understanding uint is quite valuable, as many programming languages use the datatype as default representation for binary data.

// JavaScript
const answer = 0b00101010;
console.log(answer); // 42
Why use binary?
At this point you might wonder why you’re reading this page. Why should you understand bits and bytes? How can you benefit from this knowledge when programming in higher level languages?

Imagine we’re building a web application that needs data from a webserver. The conventional communication format is JavaScript Object Notation (JSON). Let’s say we’re sending an array of 8 random integers ranging from 0 to 255:

[
  10,
  240,
  106,
  236,
  244,
  226,
  139,
  30
]
Because the data is sent as a string with a specific format, we’ll need 8 bits per character, assuming it’s UTF-8 encoded. Ignoring whitespace, above JSON string is 31 characters, making it 248 bits.

We can send the exact same data in binary, but way more efficient. Instead of returning a formatted string, because that’s what JSON is, we can send the data as one binary blob. For numbers ranging from 0 to 255, we still need 8 bits to represent each. Because each number has a fixed bit length, we can just concatinate them. The complete blob will be 64 bits long, saving just under 75% of data!

00001010 // 10
11110000 // 240
01101010 // 106
11101100 // 236
11110100 // 244
11100010 // 226
10001011 // 139
00011110 // 30
The strength of JSON isn’t size, but flexibility. Because it’s a formatted string, it’s length and contents is irrelevant. The strength of binary is it’s size. It all depends on your use-case, but a 75% reduction of bandwidth is worth considering.

Operators
Bitwise operators are operators that allow you to modify data on bit-level. Welcome to Boolean algebra.

In the following examples, we will define binary data using “binary literals.” This means they are prefixed with 0b, which is common in many programming languages. For more information, see notes.

NOT
Flipping, or negating bits can be done using the NOT (~) operator. The operator toggles all the bits.

~0b01 = 10
~0b11 = 00
AND
The AND (&) operator returns 1 for each bit only if the corresponding bits of both operands are 1’s.

0b01 & 0b11 = 01
0b01 & 0b00 = 00
OR
The OR (|) operator returns 1’s if a bit of either of the operands is 1.

0b10 | 0b01 = 11
0b00 | 0b00 = 00
0b11 | 0b10 = 11
XOR
Similar to the OR operator, the XOR (^), exclusive OR, operator only returns 1’s if either of the corresponding bits of the operands is 1, but 0 if both are.

0b10 ^ 0b01 = 11
0b00 ^ 0b00 = 00
0b11 ^ 0b10 = 01
It could be considered a shorthand of the following:

a = 0b11
b = 0b10
(a | b) & ~(a & b) = 01
Shift
Bit shifting is the act of shifting a set of bits to the left or the right.

To shift bits to the left, use <<. Additional bits, 0s, will be added on the right-hand side.

0b1001 << 2 = 100100
To shift bits the other way, use >>. This will discard the right-hand bits.

Note that this operation retains the first bit for signed integers. This means that negative integers stay negative.

0b1001 >> 2 = 1001
When shifting bits to the right, notice the amount of bits decreases? A zero-fill right shift (>>>) also adds bits on the left-hand side, so the amount of bits is unchanged.

Unlike a regular right shift, the zero-fill right shift also moves the sign bit in a signed integer, which is often undesired.

0b1001 >>> 2 = 001001
Practical
Read a bit at a specific position
First, a set of bits must be shifted to the right until the bit of interest is all the way on the right. To discard all other bits, we can use the AND operator with a so called bitmask.

bitmask = 0b1

// the highlighted bits are moved all the way to the right, then all other bits are cancelled out with the bitmask
(0b1101 >> 2) & bitmask = 1
(0b1101 >> 1) & bitmask = 0
The bitmask determines how much of the info is returned, so to get two bits, a two-bit bitmask is required.

bitmask = 0b11
(0b1101) >> 2) & bitmask = 11
Set a bit
To set a specific bit to 1, you can use the OR operator. First, the bit you wish to set is shifted to the position you wish to set it to, the OR operator does the rest.

byte = 0b0000
byte | (0b1 << 2) = 0100
To set a specific bit to 0, you must use the AND operator.

byte = 0b1111
byte & (0b0 << 2) = 1011
If the new bit has a dynamic value, the following allows you to change a bit to any value at a given position.

x = 1 // new value of bit...
n = 2 // at this location
byte = 0b0010

byte ^ (-x ^ byte) & (1 << n) = 0110
Toggle a bit at a specific position
The XOR operator returns 1 if operands are unequal. By having one operand set to 1, it toggles.

n = 2 // at this location
byte = 0b0100
byte ^ (0b1 << n) = 0000
Store flags
Flags, a fancy name for “options,” can easily be stored in a byte. This example is inspired by the TCP protocol.

FLAG_FIN    = 0b000001
FLAG_SYN    = 0b000010
FLAG_RESET  = 0b000100
FLAG_PUSH   = 0b001000
FLAG_ACK    = 0b010000
FLAG_URGENT = 0b100000

// Set header to SYN, ACK and URGENT (110010)
header = FLAG_SYN | FLAG_ACK | FLAG_URGENT

// Turn off URGENT flag
header = header & ~FLAG_URGENT
Hex to RGB
Colours are often stored as hexadecimals. Sometimes, you will want to get the value of each channel. Note that hexadecimals are just another representation of uints.

// mask = 11111111
mask = 0xFF

// rgb = 11100110 01000010 00011001
rgb = 0xE64219

// to get the red component,
// shift 16 bits to the right
// and get the first 8 bits
// 11100110 01000010 00011001
(rgb >> 16) & mask = 0xE6 // = 11100110

// to get green,
// shift 8 bits to the right,
// and only get the first 8 bits
// 11100110 01000010 00011001
(rgb >> 8) & mask = 0x42 // = 01000010

// blue is the first 8 bits
// 11100110 01000010 00011001
rgb & mask = 0x19
RGB to hex
You can do the opposite as well; convert RGB to hexadecimals.

r = 0xE6 // 11100110
g = 0x42 // 11100110
b = 0x19 // 00011001

// 11100110 01000010 00011001
(r << 16) | (g << 8) | b = 0xE64219
Notes
The above code is pseudo-code, and may not work in all languages. Other than the basics—like data-types and equations—there are few things to consider in particular to make this work in your language.

Declare binary literals
Although many languages seem to support binary literals by prefixing them with 0b, some do not.

JavaScript = parseInt('0010', 2) // pre-ES6
PHP        = bindec('0010')      // pre-5.4
Scala      = Integer.parseInt("0010", 2)
For more information, please refer to the documentation of your preferred language.

Converting Binary to a String
Displaying binary data as a string can help debug binary values.

JavaScript = (0b1011).toString(2)
PHP        = decbin(0b1011)
Ruby       = "%b" % 0b1011
