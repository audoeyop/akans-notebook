# jQuery DOM Manipulation

JQuery provides methods to manipulate DOM in efficient way. You do not need to write big code to modify the value of any element's attribute or to extract HTML code from a paragraph or division.

JQuery provides methods such as `.attr()`, `.html()`, and `.val()` which act as getters, retrieving information from DOM elements for later use.

## Content Manipulation
The `html( )` method gets the html contents (innerHTML) of the first matched element.

Here is the syntax for the method −
```
selector.html( )
```
Example
Following is an example which makes use of `.html()` and `.text(val)` methods. Here `.html()` retrieves HTML content from the object and then `.text( val )` method sets value of the object using passed parameter −
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $("div").click(function () {
               var content = $(this).html();
               $("#result").text( content );
            });
         });
      </script>

      <style>
         #division{ margin:10px;padding:12px; border:2px solid #666; width:60px;}
      </style>
   </head>

   <body>
      <p>Click on the square below:</p>
      <span id = "result"> </span>

      <div id = "division" style = "background-color:blue;">
         This is Blue Square!!
      </div>
   </body>
</html>
```

## DOM Element Replacement
You can replace a complete DOM element with the specified HTML or DOM elements. The `replaceWith( content )` method serves this purpose very well.

Here is the syntax for the method −
```
selector.replaceWith( content )
```
Here content is what you want to have instead of original element. This could be HTML or simple text.

**Example**

Following is an example which would replace division element with "`<h1>JQuery is Great </h1>`" −
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $("div").click(function () {
               $(this).replaceWith("<h1>JQuery is Great</h1>");
            });
         });
      </script>

      <style>
         #division{ margin:10px;padding:12px; border:2px solid #666; width:60px;}
      </style>
   </head>

   <body>
      <p>Click on the square below:</p>
      <span id = "result"> </span>

      <div id = "division" style = "background-color:blue;">
         This is Blue Square!!
      </div>
   </body>
</html>
```

## Removing DOM Elements
There may be a situation when you would like to remove one or more DOM elements from the document. JQuery provides two methods to handle the situation.

The `empty( )` method remove all child nodes from the set of matched elements where as the method `remove( expr )` method removes all matched elements from the DOM.

Here is the syntax for the method −
```
selector.remove( [ expr ])

or

selector.empty( )
```
You can pass optional parameter expr to filter the set of elements to be removed.

**Example**
Following is an example where elements are being removed as soon as they are clicked −
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $("div").click(function () {
               $(this).remove( );
            });
         });
      </script>

      <style>
         .div{ margin:10px;padding:12px; border:2px solid #666; width:60px;}
      </style>
   </head>

   <body>
      <p>Click on any square below:</p>
      <span id = "result"> </span>

      <div class = "div" style = "background-color:blue;"></div>
      <div class = "div" style = "background-color:green;"></div>
      <div class = "div" style = "background-color:red;"></div>
   </body>
</html>
```

## Inserting DOM Elements
There may be a situation when you would like to insert new one or more DOM elements in your existing document. JQuery provides various methods to insert elements at various locations.

The `after( content )` method insert content after each of the matched elements where as the method `before( content )` method inserts content before each of the matched elements.

Here is the syntax for the method −
```
selector.after( content )

or

selector.before( content )
```
Here content is what you want to insert. This could be HTML or simple text.

**Example**

Following is an example where `<div>` elements are being inserted just before the clicked element −
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $("div").click(function () {
               $(this).before('<div class="div"></div>' );
            });
         });
      </script>

      <style>
         .div{ margin:10px;padding:12px; border:2px solid #666; width:60px;}
      </style>
   </head>

   <body>
      <p>Click on any square below:</p>
      <span id = "result"> </span>

      <div class = "div" style = "background-color:blue;"></div>
      <div class = "div" style = "background-color:green;"></div>
      <div class = "div" style = "background-color:red;"></div>
   </body>
</html>
```

## DOM Manipulation Methods
Following table lists down all the methods which you can use to manipulate DOM elements −

`after( content )` - Insert content after each of the matched elements.

`append( content )` - Append content to the inside of every matched element.

`appendTo( selector )` - Append all of the matched elements to another, specified, set of elements.

`before( content )` - Insert content before each of the matched elements.

`clone( bool )` - Clone matched DOM Elements, and all their event handlers, and select the clones.

`clone( )` - Clone matched DOM Elements and select the clones.

`empty( )` - Remove all child nodes from the set of matched elements.

`html( val )` - Set the html contents of every matched element.

`html( )` - Get the html contents (innerHTML) of the first matched element.

`insertAfter( selector )` - Insert all of the matched elements after another, specified, set of elements.

`insertBefore( selector )` - Insert all of the matched elements before another, specified, set of elements.

`prepend( content )` - Prepend content to the inside of every matched element.

`prependTo( selector )` - Prepend all of the matched elements to another, specified, set of elements.

`remove( expr )` - Removes all matched elements from the DOM.

`replaceAll( selector )` - Replaces the elements matched by the specified selector with the matched elements.

`replaceWith( content )` - Replaces all matched elements with the specified HTML or DOM elements.

`text( val )` - Set the text contents of all matched elements.

`text( )` - Get the combined text contents of all matched elements.

`wrap( elem )` - Wrap each matched element with the specified element.

`wrap( html )` - Wrap each matched element with the specified HTML content.

`wrapAll( elem )` - Wrap all the elements in the matched set into a single wrapper element.

`wrapAll( html )` - Wrap all the elements in the matched set into a single wrapper element.

`wrapInner( elem )` - Wrap the inner child contents of each matched element (including text nodes) with a DOM element.

`wrapInner( html )` - Wrap the inner child contents of each matched element (including text nodes) with an HTML structure.

# References
https://www.tutorialspoint.com/jquery/jquery-dom.htm
