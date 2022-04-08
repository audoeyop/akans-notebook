# Ruby Strings

A String object in Ruby holds and manipulates an arbitrary sequence of one or more bytes, typically representing characters that represent human language.

The simplest string literals are enclosed in single quotes (the apostrophe character). The text within the quote marks is the value of the string −

'This is a simple Ruby string literal'
If you need to place an apostrophe within a single-quoted string literal, precede it with a backslash, so that the Ruby interpreter does not think that it terminates the string −

'Won\'t you read O\'Reilly\'s book?'
The backslash also works to escape another backslash, so that the second backslash is not itself interpreted as an escape character.

Following are the string-related features of Ruby.

Expression Substitution
Expression substitution is a means of embedding the value of any Ruby expression into a string using #{ and } −

Live Demo
#!/usr/bin/ruby

x, y, z = 12, 36, 72
puts "The value of x is #{ x }."
puts "The sum of x and y is #{ x + y }."
puts "The average was #{ (x + y + z)/3 }."
This will produce the following result −

The value of x is 12.
The sum of x and y is 48.
The average was 40.
General Delimited Strings
With general delimited strings, you can create strings inside a pair of matching though arbitrary delimiter characters, e.g., !, (, {, <, etc., preceded by a percent character (%). Q, q, and x have special meanings. General delimited strings can be −

%{Ruby is fun.}  equivalent to "Ruby is fun."
%Q{ Ruby is fun. } equivalent to " Ruby is fun. "
%q[Ruby is fun.]  equivalent to a single-quoted string
%x!ls! equivalent to back tick command output `ls`
Escape Characters
Following table is a list of escape or non-printable characters that can be represented with the backslash notation.
Character Encoding
The default character set for Ruby is ASCII, whose characters may be represented by single bytes. If you use UTF-8, or another modern character set, characters may be represented in one to four bytes.

You can change your character set using $KCODE at the beginning of your program, like this −

$KCODE = 'u'
Following are the possible values for $KCODE.
String Built-in Methods
We need to have an instance of String object to call a String method. Following is the way to create an instance of String object −

new [String.new(str = "")]
This will return a new string object containing a copy of str. Now, using str object, we can all use any available instance methods. For example −

Live Demo
#!/usr/bin/ruby

myStr = String.new("THIS IS TEST")
foo = myStr.downcase

puts "#{foo}"
This will produce the following result −

this is test
Following are the public String methods ( Assuming str is a String object ) −
String unpack Directives
Following table lists the unpack directives for method String#unpack.
Example
Try the following example to unpack various data.

"abc \0\0abc \0\0".unpack('A6Z6')   #=> ["abc", "abc "]
"abc \0\0".unpack('a3a3')           #=> ["abc", " \000\000"]
"abc \0abc \0".unpack('Z*Z*')       #=> ["abc ", "abc "]
"aa".unpack('b8B8')                 #=> ["10000110", "01100001"]
"aaa".unpack('h2H2c')               #=> ["16", "61", 97]
"\xfe\xff\xfe\xff".unpack('sS')     #=> [-2, 65534]
"now = 20is".unpack('M*')           #=> ["now is"]
"whole".unpack('xax2aX2aX1aX2a')    #=> ["h", "e", "l", "l", "o"]

# References
https://www.tutorialspoint.com/ruby/ruby_strings.htm
