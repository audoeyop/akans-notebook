https://en.wikipedia.org/wiki/Computer_program

A computer program is a set sequence of instructions in a programming language that a computer can execute or interpret.

Instructions are defined via a programming language to perform operations. Some simple operations include:
- Printing output
- Recieving user input
- Reading/writing a file
- Itterating through a data set

These instrictions are defined via code that follows the coding format/conventions of a programming language. For this module, we will use the Python programming language. Many programming languages such as C, Ruby, Python, Javascript, Java, PHP, etc. share similar functionality.

Let's say that we want to print 2 lines. The first line displaying "The Complete". Then, the second line, printing "Software Engineer". The program will look like the following:

print "The Complete"
print "Software Engineer"

In the program, we are instructing the computer to print the 2 lines of text.

Execute the program
```
> python program.py
```
Output
```
The Complete
Software Engineer
```

As mentioned above, many programming languages such as C, Ruby, Python, Javascript, Java, PHP, etc. share similar functionality. So, the same program can we written in ither languages. The following examples show how to print the same 2 lines of text in C, and in Ruby:

C
```
# include C's stdio.h labrady to allow for standard input/output functions like 'printf'
# -------------------------------------------------------------------------
#include<stdio.h>

printf("The Complete")
printf("Software Engineer")
```

Ruby
```
puts "The Complete"
puts "Software Engineer"
```

Notice that C uses the `printf` function to print output to the terminal and Ruby uses `puts` to do the same. Also notice that C requires the inclusion of the `stdio.h` library to provide standard input/output functions that includes 'printf'.

Another example of computer programs that perform the same operation in different languages can be seen in the following example. In this example, we will be reading from a file of numbers and calculating the average of the numbers.

When comparing C vs Ruby, the Slant community recommends C for most people. In the question“What is the best programming language to learn first?” C is ranked 2nd while Ruby is ranked 9th. The most important reason people chose C is:

Learning C forces you to grapple with the low-level workings of your computer (memory management, pointers, etc.) in ways that the other languages abstract away. Without an understanding of these low-level aspects of computer programming you will be limited if you try to develop an application that needs to run in a memory or performance constrained environment. Other languages like Python can obscure a lot of details, so your foundation may be weaker.
