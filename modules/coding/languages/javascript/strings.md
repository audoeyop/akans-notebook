# Javascript Strings

The String object lets you work with a series of characters; it wraps Javascript's string primitive data type with a number of helper methods.

As JavaScript automatically converts between string primitives and String objects, you can call any of the helper methods of the String object on a string primitive.

Syntax
Use the following syntax to create a String object −

var val = new String(string);
The String parameter is a series of characters that has been properly encoded.

String Properties
Here is a list of the properties of String object and their description.

Sr.No.	Property & Description
1	constructor
Returns a reference to the String function that created the object.

2	length
Returns the length of the string.

3	prototype
The prototype property allows you to add properties and methods to an object.

In the following sections, we will have a few examples to demonstrate the usage of String properties.

String Methods
Here is a list of the methods available in String object along with their description.

Sr.No.	Method & Description
1	charAt()
Returns the character at the specified index.

2	charCodeAt()
Returns a number indicating the Unicode value of the character at the given index.

3	concat()
Combines the text of two strings and returns a new string.

4	indexOf()
Returns the index within the calling String object of the first occurrence of the specified value, or -1 if not found.

5	lastIndexOf()
Returns the index within the calling String object of the last occurrence of the specified value, or -1 if not found.

6	localeCompare()
Returns a number indicating whether a reference string comes before or after or is the same as the given string in sort order.

7	match()
Used to match a regular expression against a string.

8	replace()
Used to find a match between a regular expression and a string, and to replace the matched substring with a new substring.

9	search()
Executes the search for a match between a regular expression and a specified string.

10	slice()
Extracts a section of a string and returns a new string.

11	split()
Splits a String object into an array of strings by separating the string into substrings.

12	substr()
Returns the characters in a string beginning at the specified location through the specified number of characters.

13	substring()
Returns the characters in a string between two indexes into the string.

14	toLocaleLowerCase()
The characters within a string are converted to lower case while respecting the current locale.

15	toLocaleUpperCase()
The characters within a string are converted to upper case while respecting the current locale.

16	toLowerCase()
Returns the calling string value converted to lower case.

17	toString()
Returns a string representing the specified object.

18	toUpperCase()
Returns the calling string value converted to uppercase.

19	valueOf()
Returns the primitive value of the specified object.

String HTML Wrappers
Here is a list of the methods that return a copy of the string wrapped inside an appropriate HTML tag.

Sr.No.	Method & Description
1	anchor()
Creates an HTML anchor that is used as a hypertext target.

2	big()
Creates a string to be displayed in a big font as if it were in a <big> tag.

3	blink()
Creates a string to blink as if it were in a <blink> tag.

4	bold()
Creates a string to be displayed as bold as if it were in a <b> tag.

5	fixed()
Causes a string to be displayed in fixed-pitch font as if it were in a <tt> tag

6	fontcolor()
Causes a string to be displayed in the specified color as if it were in a <font color="color"> tag.

7	fontsize()
Causes a string to be displayed in the specified font size as if it were in a <font size="size"> tag.

8	italics()
Causes a string to be italic, as if it were in an <i> tag.

9	link()
Creates an HTML hypertext link that requests another URL.

10	small()
Causes a string to be displayed in a small font, as if it were in a <small> tag.

11	strike()
Causes a string to be displayed as struck-out text, as if it were in a <strike> tag.

12	sub()
Causes a string to be displayed as a subscript, as if it were in a <sub> tag

13	sup()
Causes a string to be displayed as a superscript, as if it were in a <sup> tag

In the following sections, we will have a few examples to demonstrate the usage of String methods.

# References
https://www.tutorialspoint.com/javascript/javascript_strings_object.htm
