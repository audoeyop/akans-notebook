# jQuery Syntax

jQuery is used to select any HTML element from an HTML document and then perform any action on that selected element. To select an HTML element, jQuery selectors are used, we will study these selectors in detail in the next chapter. For now let's have a look of basic jQuery Syntax to Find out or to Select or to Query an element and then perform an action on the selected element.

## Document Ready Event
Before we look into jQuery Syntax, let's try to understand what is Document Ready Event. Actually, before we execute any jQuery statement, we would like to wait for the document to be fully loaded. This is because jQuery works on DOM and if complete DOM is not available before executing jQuery statements, then we will not get desired result.

Following is basic syntax of a Document Ready Event:
```
$(document).ready(function(){

  // jQuery code goes here...

});
```
Alternatively you can also use the following syntax for document ready event:
```
$(function(){

  // jQuery code goes here...

});
```
You should always keep Document Ready Event block inside `<script>`...`</script>` tags and you can keep this script tag either inside the `<head>`...`</head>` tags or at the bottom of the page before closing `<body>` tag.
You can use either of these two syntax to keep your jQuery code inside the block which will be executed only when complete DOM is downloaded and ready to be parses.

## jQuery Syntax
Following is the basic syntax for selecting HTML elements and then performing some action on the selected element(s):
```
$(document).ready(function(){
    $(selector).action()
});
```

Any jQuery statement starts with a dollar sign `$` and then we put a `selector` inside the braces `()`. This syntax `$(selector)` is enough to return the selected HTML elements, but if you have to perform any action on the selected element(s) then `action()` part is required.

**Examples**

Below are few examples to illustrate the basic jQuery Syntax. Following example will select all the `<p>` elements from an HTML document and will hide those elements. Try to click the icon run button to run the following jQuery code:
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script src = "https://ajax.googleapis.com/ajax/libs/jquery/3.6.0/jquery.min.js">
      </script>

      <script type = "text/javascript">
         $(document).ready(function() {
             $("p").hide()
         });
      </script>
   </head>

   <body>
      <h1>jQuery Basic Syntax</h1>
      <p>This is P tag</p>
      <p>This is another P tag</p>
      <span>This is span tag</span>
      <div>This is div tag</div>
   </body>
</html>
```
Following is the jQuery Syntax to change the color of all <h1> elements to red. Try to click the icon run button to run the following jQuery code:
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script src = "https://ajax.googleapis.com/ajax/libs/jquery/3.6.0/jquery.min.js">
      </script>

      <script type = "text/javascript">
         $(document).ready(function() {
             $("h1").css("color", "red")
         });
      </script>
   </head>

   <body>
      <h1>jQuery Basic Syntax</h1>
      <p>This is P tag</p>
      <span>This is span tag</span>
      <div>This is div tag</div>
   </body>
</html>
```
Similar way you can change the color of all the elements whose class is "red". Try to click the icon run button to run the following jQuery code:
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script src = "https://ajax.googleapis.com/ajax/libs/jquery/3.6.0/jquery.min.js">
      </script>

      <script type = "text/javascript">
         $(document).ready(function() {
             $(".red").css("color", "red")
         });
      </script>
   </head>

   <body>
      <h1>jQuery Basic Syntax</h1>
      <p>This is P tag</p>
      <span>This is span tag</span>
      <div class="red">This is div tag</div>
   </body>
</html>
```
We have provided you very basic examples of jQuery Syntax to give you clear understanding on how exactly jQuery is going to work on an HTML document. You can modify the code given in the above boxes and then try to run these programs to see them live in action.

# References
https://www.tutorialspoint.com/jquery/jquery-syntax.htm
