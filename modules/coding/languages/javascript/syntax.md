# JavaScript Syntax
Learn some important characteristics of JavaScript syntax in this section.

As mentioned in the previous chapter, JavaScript code can be written inside HTML Script Tags or in a separate file with .js extension.

Write JavaScript Code
<script>
    //Write javascript code here...

</script>
Character Set
JavaScript uses the unicode character set, so allows almost all characters, punctuations, and symbols.

Case Sensitive
JavaScript is a case-sensitive scripting language. So, name of functions, variables and keywords are case sensitive. For example, myfunction and MyFunction are different, Name is not equal to nAme, etc.

Variables
In JavaScript, a variable is declared with or without the var keyword.

Example: JavaScript Statements
<script>
    var name = "Steve";
    id = 10;
</script>
Semicolon
JavaScript statements are separated by a semicolon. However, it is not mandatory to end a statement with a semicolon, but it is recommended.

Example: JavaScript Statements
<script>
    var one = 1; two = 2; three = 3; //three different statements

    var four = 4; //single statement
    var five = "Five" //single statement without ;
</script>
Whitespaces
JavaScript ignores multiple spaces and tabs. The following statements are the same.

Example: Whitespaces in JavaScript
<script>
    var one =1;
    var one   =   1;
    var one        =         1;
</script>
Code Comments
A comment is single or multiple lines, which give some information about the current program. Comments are not for execution.

Write comment after double slashes // or write multiple lines of comments between /* and */

Example: Comment JavaScript Code
<script>
    var one =1; // this is a single line comment

    /* this  
    is multi line
    comment*/

    var two = 2;
    var three = 3;
</script>
String
A string is a text in JavaScript. The text content must be enclosed in double or single quotation marks.

Example: String in JavaScript
<script>
    var msg = "Hello World" //JavaScript string in double quotes

    var msg = 'Hello World' //JavaScript string in single quotes  
</script>
Number
JavaScript allows you to work with any type of number like integer, float, hexadecimal etc. Number must NOT be wrapped in quotation marks.

Example: Numbers in JavaScript
<script>
    var num = 100;

    var flot = 10.5;
</script>
Boolean
As in other languages, JavaScript also includes true and false as a boolean value.

Example: Booleans in JavaScript
<script>
    var yes = true;

    var no = false;
</script>
Keywords
Keywords are reserved words in JavaScript, which cannot be used as variable names or function names.

The following table lists some of the keywords used in JavaScript.

JavaScript Reserved Keywords
var	function	if
else	do	while
for	switch	break
continue	return	try
catch	finally	debugger
case	class	this
default	false	true
in	instanceOf	typeOf
new	null	throw
void	width	delete

# References
https://www.tutorialsteacher.com/javascript/javascript-basics
