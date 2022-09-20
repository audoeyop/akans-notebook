# Javascript Void Keyword

void is an important keyword in JavaScript which can be used as a unary operator that appears before its single operand, which may be of any type. This operator specifies an expression to be evaluated without returning a value. The operator evaluates a given expression and then returns undefined.

Following is the syntax for the same.
```
void expression
```
Void and Immediately Invoked Function Expressions
-------------------------------------------------

When using an immediately-invoked function expression, void can be used to force the function keyword to be treated as an expression instead of a declaration.

Consider the following example -

```
void function iife_void() {
   var msg = function () {console.log("hello world")};
   msg();
}();
```
The following output is displayed on successful execution of the above code.
```
hello world
```
Void and JavaScript URIs
------------------------

The JavaScript: URI is a commonly encountered syntax in a HTML page. The browser evaluates the URI and replaces the content of the page with the value returned. This is true unless the value returned is undefined. The most common use of this operator is in a client-side JavaScript: URL, where it allows you to evaluate an expression for its side effects without the browser displaying the value of the evaluated expression.

Consider the following code snippet -

```
<a href = "javascript:void(javascript:alert('hello world!!'))">
  Click here to do nothing
</a>
<br/><br/><br/>
<a href = "javascript:alert('hello');">Click here for an alert</a>
```
Save the above file as an HTML document and open it in the browser. The first hyperlink, when clicked evaluates the `javascript :alert("hello")` and is passed to the `void()` operator. However, since the void operator returns undefined, no result is displayed on the page.

On the other hand, the second hyperlink when clicked displays an alert dialog.

# References
https://www.tutorialspoint.com/es6/es6_void_keyword.htm
