# Javascript Regular Expressions

A regular expression is an object that describes a pattern of characters.

The JavaScript RegExp class represents regular expressions, and both String and RegExp define methods that use regular expressions to perform powerful pattern-matching and search-and-replace functions on text.

Syntax
A regular expression could be defined with the RegExp () constructor, as follows −

var pattern = new RegExp(pattern, attributes);
or simply
var pattern = /pattern/attributes;
Here is the description of the parameters −

pattern − A string that specifies the pattern of the regular expression or another regular expression.

attributes − An optional string containing any of the "g", "i", and "m" attributes that specify global, case-insensitive, and multi-line matches, respectively.

Brackets
Brackets ([]) have a special meaning when used in the context of regular expressions. They are used to find a range of characters.

Sr.No.	Expression & Description
1
[...]

Any one character between the brackets.

2
[^...]

Any one character not between the brackets.

3
[0-9]

It matches any decimal digit from 0 through 9.

4
[a-z]

It matches any character from lowercase a through lowercase z.

5
[A-Z]

It matches any character from uppercase A through uppercase Z.

6
[a-Z]

It matches any character from lowercase a through uppercase Z.

The ranges shown above are general; you could also use the range [0-3] to match any decimal digit ranging from 0 through 3, or the range [b-v] to match any lowercase character ranging from b through v.

Quantifiers
The frequency or position of bracketed character sequences and single characters can be denoted by a special character. Each special character has a specific connotation. The +, *, ?, and $ flags all follow a character sequence.

Sr.No.	Expression & Description
1
p+

It matches any string containing one or more p's.

2
p*

It matches any string containing zero or more p's.

3
p?

It matches any string containing at most one p.

4
p{N}

It matches any string containing a sequence of N p's

5
p{2,3}

It matches any string containing a sequence of two or three p's.

6
p{2, }

It matches any string containing a sequence of at least two p's.

7
p$

It matches any string with p at the end of it.

8
^p

It matches any string with p at the beginning of it.

Examples
Following examples explain more about matching characters.

Sr.No.	Expression & Description
1
[^a-zA-Z]

It matches any string not containing any of the characters ranging from a through z and A through Z.

2
p.p

It matches any string containing p, followed by any character, in turn followed by another p.

3
^.{2}$

It matches any string containing exactly two characters.

4
<b>(.*)</b>

It matches any string enclosed within <b> and </b>.

5
p(hp)*

It matches any string containing a p followed by zero or more instances of the sequence hp.

Literal characters
Sr.No.	Character & Description
1
Alphanumeric

Itself

2
\0

The NUL character (\u0000)

3
\t

Tab (\u0009

4
\n

Newline (\u000A)

5
\v

Vertical tab (\u000B)

6
\f

Form feed (\u000C)

7
\r

Carriage return (\u000D)

8
\xnn

The Latin character specified by the hexadecimal number nn; for example, \x0A is the same as \n

9
\uxxxx

The Unicode character specified by the hexadecimal number xxxx; for example, \u0009 is the same as \t

10
\cX

The control character ^X; for example, \cJ is equivalent to the newline character \n

Metacharacters
A metacharacter is simply an alphabetical character preceded by a backslash that acts to give the combination a special meaning.

For instance, you can search for a large sum of money using the '\d' metacharacter: /([\d]+)000/, Here \d will search for any string of numerical character.

The following table lists a set of metacharacters which can be used in PERL Style Regular Expressions.

Sr.No.	Character & Description
1
.

a single character

2
\s

a whitespace character (space, tab, newline)

3
\S

non-whitespace character

4
\d

a digit (0-9)

5
\D

a non-digit

6
\w

a word character (a-z, A-Z, 0-9, _)

7
\W

a non-word character

8
[\b]

a literal backspace (special case).

9
[aeiou]

matches a single character in the given set

10
[^aeiou]

matches a single character outside the given set

11
(foo|bar|baz)

matches any of the alternatives specified

Modifiers
Several modifiers are available that can simplify the way you work with regexps, like case sensitivity, searching in multiple lines, etc.

Sr.No.	Modifier & Description
1
i

Perform case-insensitive matching.

2
m

Specifies that if the string has newline or carriage return characters, the ^ and $ operators will now match against a newline boundary, instead of a string boundary

3
g

Performs a global matchthat is, find all matches rather than stopping after the first match.

RegExp Properties
Here is a list of the properties associated with RegExp and their description.

Sr.No.	Property & Description
1	constructor
Specifies the function that creates an object's prototype.

2	global
Specifies if the "g" modifier is set.

3	ignoreCase
Specifies if the "i" modifier is set.

4	lastIndex
The index at which to start the next match.

5	multiline
Specifies if the "m" modifier is set.

6	source
The text of the pattern.

In the following sections, we will have a few examples to demonstrate the usage of RegExp properties.

RegExp Methods
Here is a list of the methods associated with RegExp along with their description.

Sr.No.	Method & Description
1	exec()
Executes a search for a match in its string parameter.

2	test()
Tests for a match in its string parameter.

3	toSource()
Returns an object literal representing the specified object; you can use this value to create a new object.

4	toString()
Returns a string representing the specified object.

# References
https://www.tutorialspoint.com/javascript/javascript_regexp_object.htm
