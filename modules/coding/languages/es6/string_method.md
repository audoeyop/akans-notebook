ES6 String Methods

Following is a list of methods with their description.

**String.prototype.startsWith(searchString, position = 0)**

Returns true if the receiver starts with searchString; the position lets you specify where the string to be checked starts.

Example
```
var str = 'hello world!!!';
console.log(str.startsWith('hello'));
```
Output
```
true
```

 |
**String.prototype.endsWith(searchString, endPosition = searchString.length)**

Returns true if the receiver starts with searchString; the position lets you specify where the string to be checked starts.

Example
```
var str = 'Hello World !!! ';

console.log(str.endsWith('Hello'));
console.log(str.endsWith('Hello',5));
```
Output
```
false
true
```

 **String.prototype.includes(searchString, position = 0)**


Returns true if the receiver contains searchString; position lets you specify where the string to be searched starts.

Example
```
var str = 'Hello World';  

console.log(str.includes('hell'))     
console.log(str.includes('Hell'));  

console.log(str.includes('or'));   
console.log(str.includes('or',1))
```
Output
```
false
true
true
true
```

**String.prototype.repeat(count)**

Returns the receiver, concatenated count times.

Example
```
var myBook = new String("Perl");
console.log(myBook.repeat(2));
```
Output
```
PerlPerl
```

Template Literals
-----------------

Template literals are string literals that allow embedded expressions. Templatestrings use back-ticks (`\`\`) rather than the single or double quotes. A template string could thus be written as -
```
var greeting = `Hello World!`;
```
### String Interpolation and Template literals

Template strings can use placeholders for string substitution using the ${ } syntax, as demonstrated.

Example 1
```
var name =  "Brendan";
console.log('Hello, ${name}!');
```
The following output is displayed on successful execution of the above code.
```
Hello, Brendan!
```
Example 2: Template literals and expressions
```
var a =  10;
var b =  10;
console.log(`The sum of ${a} and ${b} is  ${a+b} `);
```
The following output is displayed on successful execution of the above code.
```
The sum of 10 and 10 is 20
```
Example 3: Template literals and function expression

```
function fn() { return "Hello World"; }
console.log(`Message: ${fn()} !!`);
```

The following output is displayed on successful execution of the above code.
```
Message: Hello World !!
```
Multiline Strings and Template Literals
---------------------------------------

Template strings can contain multiple lines.

Example
```
var multiLine =  `
   This is
   a string
   with multiple
   lines`; console.log(multiLine)
```
The following output is displayed on successful execution of the above code.
```
This is
a string
with multiple
line
```
### String.raw()

ES6 includes the tag function String.raw for raw strings, where backslashes have no special meaning. String.raw enables us to write the backslash as we would in a regular expression literal. Consider the following example.

```
var text =`Hello \n World`
console.log(text)  

var raw_text = String.raw`Hello \n World `
console.log(raw_text)
```

The following output is displayed on successful execution of the above code.
```
Hello
World
Hello \n World
```
Tagged Templates
----------------

A tag is a function which can interpret and process a template literal. A tag appears in front of the template literal. Syntax is shown below.

### Syntax
```
let output_fromTag = tagFunction `Template literal with ${variable1} , ${variable2}`
```
The tag function implementation syntax is as given below -
```
function tagFunction(literals,...variable_values){
   //process
   return "some result"
}
```
### Example

Following Example defines a tag function `myTagFn()`. It displays the parameters passed to it. After displaying it returns Done to the caller.
```
<script>
   function myTagFn(literals,...values){
      console.log("literal values are");
      for(let c of literals){
         console.log(c)
      }

      console.log("variable values are ");
      for(let c of values){
         console.log(c)
      }

      return "Done"
   }
   let company = `TutorialsPoint`
   let company_location = `Mumbai`
   let result = myTagFn `Hello this is ${company} from ${company_location}`

   console.log(result)

</script>
```
The output of the above code will be as stated below -
```
//literal
literal values are
Hello this is
from
//values
variable values are
TutorialsPoint
Mumbai
Done
```
### Example

The below tag function takes a template literal and converts it to upper case as shown below -
```
<script>
   function convertToUpperTagFn(literals, ...values) {
      let result = "";
      for (let i = 0; i < literals.length; i++) {
         result += literals[i];
         if (i < values.length) {
            result += values[i];
         }
      }
      return result.toUpperCase();
   }
   let company = `TutorialsPoint`
   let company_location = `Mumbai`
   let result = convertToUpperTagFn `Hello this is ${company} from ${company_location}`

   console.log(result)

</script>
```
The output of the above code will be as mentioned below -
```
HELLO THIS IS TUTORIALSPOINT FROM MUMBAI
```

String.fromCodePoint()
----------------------

The static String.fromCodePoint() method returns a string created by using the specified sequence of unicode code points. The function throws a RangeError if an invalid code point is passed.
```
console.log(String.fromCodePoint(42))
console.log(String.fromCodePoint(65, 90))
```
The following output is displayed on successful execution of the above code.
```
*
AZ
```

# References
https://www.tutorialspoint.com/es6/es6_new_string_methods.htm
