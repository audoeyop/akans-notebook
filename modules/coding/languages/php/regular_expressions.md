# PHP Regular Expressions

Regular expressions are nothing more than a sequence or pattern of characters itself. They provide the foundation for pattern-matching functionality.

Using regular expression you can search a particular string inside a another string, you can replace one string by another string and you can split a string into many chunks.

PHP offers functions specific to two sets of regular expression functions, each corresponding to a certain type of regular expression. You can use any of them based on your comfort.

POSIX Regular Expressions
PERL Style Regular Expressions
POSIX Regular Expressions
The structure of a POSIX regular expression is not dissimilar to that of a typical arithmetic expression: various elements (operators) are combined to form more complex expressions.

The simplest regular expression is one that matches a single character, such as g, inside strings such as g, haggle, or bag.

Lets give explanation for few concepts being used in POSIX regular expression. After that we will introduce you with regular expression related functions.

Brackets
Brackets ([]) have a special meaning when used in the context of regular expressions. They are used to find a range of characters.

Sr.No	Expression & Description
1
[0-9]

It matches any decimal digit from 0 through 9.

2
[a-z]

It matches any character from lower-case a through lowercase z.

3
[A-Z]

It matches any character from uppercase A through uppercase Z.

4
[a-Z]

It matches any character from lowercase a through uppercase Z.

The ranges shown above are general; you could also use the range [0-3] to match any decimal digit ranging from 0 through 3, or the range [b-v] to match any lowercase character ranging from b through v.

Quantifiers
The frequency or position of bracketed character sequences and single characters can be denoted by a special character. Each special character having a specific connotation. The +, *, ?, {int. range}, and $ flags all follow a character sequence.

Sr.No	Expression & Description
1
p+

It matches any string containing at least one p.

2
p*

It matches any string containing zero or more p's.

3
p?

It matches any string containing zero or one p's.

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
Following examples will clear your concepts about matching characters.

Sr.No	Expression & Description
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

It matches any string containing a p followed by zero or more instances of the sequence php.

Predefined Character Ranges
For your programming convenience several predefined character ranges, also known as character classes, are available. Character classes specify an entire range of characters, for example, the alphabet or an integer set −

Sr.No	Expression & Description
1
[[:alpha:]]

It matches any string containing alphabetic characters aA through zZ.

2
[[:digit:]]

It matches any string containing numerical digits 0 through 9.

3
[[:alnum:]]

It matches any string containing alphanumeric characters aA through zZ and 0 through 9.

4
[[:space:]]

It matches any string containing a space.

PHP's Regexp POSIX Functions
PHP currently offers seven functions for searching strings using POSIX-style regular expressions −

Sr.No	Function & Description
1	ereg()
The ereg() function searches a string specified by string for a string specified by pattern, returning true if the pattern is found, and false otherwise.

2	ereg_replace()
The ereg_replace() function searches for string specified by pattern and replaces pattern with replacement if found.

3	eregi()
The eregi() function searches throughout a string specified by pattern for a string specified by string. The search is not case sensitive.

4	eregi_replace()
The eregi_replace() function operates exactly like ereg_replace(), except that the search for pattern in string is not case sensitive.

5	split()
The split() function will divide a string into various elements, the boundaries of each element based on the occurrence of pattern in string.

6	spliti()
The spliti() function operates exactly in the same manner as its sibling split(), except that it is not case sensitive.

7	sql_regcase()
The sql_regcase() function can be thought of as a utility function, converting each character in the input parameter string into a bracketed expression containing two characters.

PERL Style Regular Expressions
Perl-style regular expressions are similar to their POSIX counterparts. The POSIX syntax can be used almost interchangeably with the Perl-style regular expression functions. In fact, you can use any of the quantifiers introduced in the previous POSIX section.

Lets give explanation for few concepts being used in PERL regular expressions. After that we will introduce you wih regular expression related functions.

Meta characters
A meta character is simply an alphabetical character preceded by a backslash that acts to give the combination a special meaning.

For instance, you can search for large money sums using the '\d' meta character: /([\d]+)000/, Here \d will search for any string of numerical character.

Following is the list of meta characters which can be used in PERL Style Regular Expressions.

Character		Description
.              a single character
\s             a whitespace character (space, tab, newline)
\S             non-whitespace character
\d             a digit (0-9)
\D             a non-digit
\w             a word character (a-z, A-Z, 0-9, _)
\W             a non-word character
[aeiou]        matches a single character in the given set
[^aeiou]       matches a single character outside the given set
(foo|bar|baz)  matches any of the alternatives specified
Modifiers
Several modifiers are available that can make your work with regexps much easier, like case sensitivity, searching in multiple lines etc.

Modifier	Description
i 	Makes the match case insensitive
m 	Specifies that if the string has newline or carriage
	return characters, the ^ and $ operators will now
	match against a newline boundary, instead of a
	string boundary
o 	Evaluates the expression only once
s 	Allows use of . to match a newline character
x 	Allows you to use white space in the expression for clarity
g 	Globally finds all matches
cg 	Allows a search to continue even after a global match fails
PHP's Regexp PERL Compatible Functions
PHP offers following functions for searching strings using Perl-compatible regular expressions −

Sr.No	Function & Description
1	preg_match()
The preg_match() function searches string for pattern, returning true if pattern exists, and false otherwise.

2	preg_match_all()
The preg_match_all() function matches all occurrences of pattern in string.

3	preg_replace()
The preg_replace() function operates just like ereg_replace(), except that regular expressions can be used in the pattern and replacement input parameters.

4	preg_split()
The preg_split() function operates exactly like split(), except that regular expressions are accepted as input parameters for pattern.

5	preg_grep()
The preg_grep() function searches all elements of input_array, returning all elements matching the regexp pattern.

6	preg_ quote()
Quote regular expression characters

# References
https://www.tutorialspoint.com/php/php_regular_expression.htm
