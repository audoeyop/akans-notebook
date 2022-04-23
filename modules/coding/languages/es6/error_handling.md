# ES6 Error Handling

There are three types of errors in programming: Syntax Errors, Runtime Errors, and Logical Errors.

Syntax Errors
-------------

Syntax errors, also called parsing errors, occur at compile time in traditional programming languages and at interpret time in JavaScript. When a syntax error occurs in JavaScript, only the code contained within the same thread as the syntax error is affected and the rest of the code in other threads get executed assuming nothing in them depends on the code containing the error.

Runtime Errors
--------------

Runtime errors, also called exceptions, occur during execution (after compilation/interpretation). Exceptions also affect the thread in which they occur, allowing other JavaScript threads to continue normal execution.

Logical Errors
--------------

Logic errors can be the most difficult type of errors to track down. These errors are not the result of a syntax or runtime error. Instead, they occur when you make a mistake in the logic that drives your script and you do not get the result as expected.

You cannot catch those errors, because it depends on your business requirement, what type of logic you want to put in your program.

JavaScript throws instances of the Error object when runtime errors occur. The following table lists predefined types of the Error object.

**EvalError**

Creates an instance representing an error that occurs regarding the global function eval().

**RangeError**

Creates an instance representing an error that occurs when a numeric variable or parameter is outside of its valid range.

**ReferenceError**

Creates an instance representing an error that occurs when dereferencing an invalid reference.

**SyntaxError**

Creates an instance representing a syntax error that occurs while parsing the code.

**TypeError**

Creates an instance representing an error that occurs when a variable or parameter is not of a valid type.

**URIError**

Creates an instance representing an error that occurs when encodeURI() or decodeURI() are passed invalid parameters.

Throwing Exceptions
-------------------

An error (predefined or user defined) can be raised using the throw statement. Later these exceptions can be captured and you can take an appropriate action. Following is the syntax for the same.

### Syntax: Throwing a generic exception
```
throw new Error([message])
OR
throw([message])
```
### Syntax: Throwing a specific exception
```
throw new Error_name([message])
```
Exception Handling
------------------

Exception handling is accomplished with a try...catch statement. When the program encounters an exception, the program will terminate in an unfriendly fashion. To safeguard against this unanticipated error, we can wrap our code in a try...catch statement.

The try block must be followed by either exactly one catch block or one finally block (or one of both). When an exception occurs in the try block, the exception is placed in e and the catch block is executed. The optional finally block executes unconditionally after try/catch

Following is the syntax for the same.
```
try {
   // Code to run
   [break;]
} catch ( e ) {
   // Code to run if an exception occurs
   [break;]
}[ finally {
   // Code that is always executed regardless of
   // an exception occurring
}]
```
### Example

```
var a = 100;
var b = 0;
try {
   if (b == 0 ) {
      throw(“Divide by zero error.”);
   } else {
      var c = a / b;
   }
}
catch( e ) {
   console.log("Error: " + e );
}
```

### Output

The following output is displayed on successful execution of the above code.
```
Error: Divide by zero error
```
Note - Note: You can raise an exception in one function and then you can capture that exception either in the same function or in the caller function using a try...catch block.

The onerror( ) Method
---------------------

The onerror event handler was the first feature to facilitate error handling in JavaScript. The error event is fired on the window object whenever an exception occurs on the page.

### Example

```
<html>
   <head>
      <script type = "text/javascript">
         window.onerror  =  function () {  
            document.write ("An error occurred.");  
         }
      </script>
   </head>

   <body>
      <p>Click the following to see the result:</p>
      <form>
         <input type = "button" value = "Click Me" onclick = "myFunc();" />
      </form>
   </body>
</html>
```

### Output

The following output is displayed on successful execution of the above code.

![one error method](assets/one_error_method.jpeg)

The onerror event handler provides three pieces of information to identify the exact nature of the error -

-   Error message - The same message that the browser would display for the given error.

-   URL - The file in which the error occurred.

-   Line number - The line number in the given URL that caused the error.

The following example shows how to extract this information.

### Example

```
<html>
   <head>
      <script type = "text/javascript">
         window.onerror  =  function (msg, url, line) {  
            document.write ("Message : " + msg );  
            document.write ("url : " + url );  
            document.write ("Line number : " + line );  
         }
      </script>
   </head>

   <body>
      <p>Click the following to see the result:</p>
      <form>
         <input type = "button" value = "Click Me" onclick = "myFunc();" />
      </form>
   </body>
</html>
```

Custom Errors
-------------

JavaScript supports the concept of custom errors. The following example explains the same.

### Example 1: Custom Error with default message

```
function MyError(message) {
   this.name = 'CustomError';
   this.message = message || 'Error raised with default message';
}
try {
   throw new MyError();
} catch (e) {  
   console.log(e.name);      
   console.log(e.message);  // 'Default Message'
}
```

The following output is displayed on successful execution of the above code.
```
CustomError
Error raised with default message
```

### Example 2: Custom Error with user-defined error message

```
function MyError(message) {
   this.name = 'CustomError';
   this.message = message || 'Default Error Message';  
} try {
   throw new MyError('Printing Custom Error message');
}
catch (e) {
   console.log(e.name);      
   console.log(e.message);  
}
```

The following output is displayed on successful execution of the above code.
```
CustomError
Printing Custom Error message
```
# References
https://www.tutorialspoint.com/es6/es6_error_handling.htm
