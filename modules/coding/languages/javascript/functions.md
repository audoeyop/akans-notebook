# Javascript Functions

A function is a group of reusable code which can be called anywhere in your program. This eliminates the need of writing the same code again and again. It helps programmers in writing modular codes. Functions allow a programmer to divide a big program into a number of small and manageable functions.

Like any other advanced programming language, JavaScript also supports all the features necessary to write modular code using functions. You must have seen functions like alert() and write() in the earlier chapters. We were using these functions again and again, but they had been written in core JavaScript only once.

JavaScript allows us to write our own functions as well. This section explains how to write your own functions in JavaScript.

## Function Definition
Before we use a function, we need to define it. The most common way to define a function in JavaScript is by using the function keyword, followed by a unique function name, a list of parameters (that might be empty), and a statement block surrounded by curly braces.

**Syntax**

The basic syntax is shown here.
```
<script type = "text/javascript">
   <!--
      function functionname(parameter-list) {
         statements
      }
   //-->
</script>
```

Tthe following example defines a function called sayHello that takes no parameters −
```
<script type = "text/javascript">
   <!--
      function sayHello() {
         alert("Hello there");
      }
   //-->
</script>
```

## Calling a Function
To invoke a function somewhere later in the script, you would simply need to write the name of that function as shown in the following code.

```
<html>
   <head>   
      <script type = "text/javascript">
         function sayHello() {
            document.write ("Hello there!");
         }
      </script>

   </head>

   <body>
      <p>Click the following button to call the function</p>      
      <form>
         <input type = "button" onclick = "sayHello()" value = "Say Hello">
      </form>      
      <p>Use different text in write method and then try...</p>
   </body>
</html>
```

## Function Parameters
Till now, we have seen functions without parameters. But there is a facility to pass different parameters while calling a function. These passed parameters can be captured inside the function and any manipulation can be done over those parameters. A function can take multiple parameters separated by comma.


The following example shoes our sayHello function, but now it takes two parameters.

```
<html>
   <head>   
      <script type = "text/javascript">
         function sayHello(name, age) {
            document.write (name + " is " + age + " years old.");
         }
      </script>      
   </head>

   <body>
      <p>Click the following button to call the function</p>      
      <form>
         <input type = "button" onclick = "sayHello('Zara', 7)" value = "Say Hello">
      </form>      
      <p>Use different parameters inside the function and then try...</p>
   </body>
</html>
```

## The return Statement
A JavaScript function can have an optional return statement. This is required if you want to return a value from a function. This statement should be the last statement in a function.

For example, you can pass two numbers in a function and then you can expect the function to return their multiplication in your calling program.

**Example**

Try the following example. It defines a function that takes two parameters and concatenates them before returning the resultant in the calling program.

```
<html>
   <head>  
      <script type = "text/javascript">
         function concatenate(first, last) {
            var full;
            full = first + last;
            return full;
         }
         function secondFunction() {
            var result;
            result = concatenate('Zara', 'Ali');
            document.write (result );
         }
      </script>      
   </head>

   <body>
      <p>Click the following button to call the function</p>      
      <form>
         <input type = "button" onclick = "secondFunction()" value = "Call Function">
      </form>      
      <p>Use different parameters inside the function and then try...</p>  
  </body>
</html>
```

There is a lot to learn about JavaScript functions, however we have covered the most important concepts in this tutorial.

## JavaScript Nested Functions

Prior to JavaScript 1.2, function definition was allowed only in top level global code, but JavaScript 1.2 allows function definitions to be nested within other functions as well. Still there is a restriction that function definitions may not appear within loops or conditionals. These restrictions on function definitions apply only to function declarations with the function statement.

As we'll discuss later in the next chapter, function literals (another feature introduced in JavaScript 1.2) may appear within any JavaScript expression, which means that they can appear within if and other statements.

**Example**

Try the following example to learn how to implement nested functions.

```
<html>
   <head>
      <script type = "text/javascript">
         <!--
            function hypotenuse(a, b) {
               function square(x) { return x*x; }
               return Math.sqrt(square(a) + square(b));
            }
            function secondFunction() {
               var result;
               result = hypotenuse(1,2);
               document.write ( result );
            }
         //-->
      </script>
   </head>

   <body>
      <p>Click the following button to call the function</p>

      <form>
         <input type = "button" onclick = "secondFunction()" value = "Call Function">
      </form>

      <p>Use different parameters inside the function and then try...</p>
   </body>
</html>
```

## JavaScript Function( ) Constructor
The function statement is not the only way to define a new function; you can define your function dynamically using Function() constructor along with the new operator.

Note − Constructor is a terminology from Object Oriented Programming. You may not feel comfortable for the first time, which is OK.

**Syntax**

Following is the syntax to create a function using Function( ) constructor along with the new operator.
```
<script type = "text/javascript">
   <!--
      var variablename = new Function(Arg1, Arg2..., "Function Body");
   //-->
</script>
```
The Function() constructor expects any number of string arguments. The last argument is the body of the function – it can contain arbitrary JavaScript statements, separated from each other by semicolons.

Notice that the Function() constructor is not passed any argument that specifies a name for the function it creates. The unnamed functions created with the Function() constructor are called anonymous functions.

**Example**

```
<html>
   <head>
      <script type = "text/javascript">
         <!--
            var func = new Function("x", "y", "return x*y;");
            function secondFunction() {
               var result;
               result = func(10,20);
               document.write ( result );
            }
         //-->
      </script>
   </head>

   <body>
      <p>Click the following button to call the function</p>

      <form>
         <input type = "button" onclick = "secondFunction()" value = "Call Function">
      </form>

      <p>Use different parameters inside the function and then try...</p>
   </body>
</html>
```

## JavaScript Function Literals

JavaScript 1.2 introduces the concept of function literals which is another new way of defining functions. A function literal is an expression that defines an unnamed function.

**Syntax**

The syntax for a function literal is much like a function statement, except that it is used as an expression rather than a statement and no function name is required.
```
<script type = "text/javascript">
   <!--
      var variablename = function(Argument List) {
         Function Body
      };
   //-->
</script>
```
Syntactically, you can specify a function name while creating a literal function as follows.
```
<script type = "text/javascript">
   <!--
      var variablename = function FunctionName(Argument List) {
         Function Body
      };
   //-->
</script>
```
But this name does not have any significance, so it is not worthwhile.

**Example**

Try the following example. It shows the usage of function literals.
```
<html>
   <head>
      <script type = "text/javascript">
         <!--
            var func = function(x,y) {
               return x*y
            };
            function secondFunction() {
               var result;
               result = func(10,20);
               document.write ( result );
            }
         //-->
      </script>
   </head>

   <body>
      <p>Click the following button to call the function</p>

      <form>
         <input type = "button" onclick = "secondFunction()" value = "Call Function">
      </form>

      <p>Use different parameters inside the function and then try...</p>
   </body>
</html>
```

# References
https://www.tutorialspoint.com/javascript/javascript_functions.htm
