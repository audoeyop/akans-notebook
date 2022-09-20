# jQuery - DOM Traversing

jQuery is a very powerful tool which provides a variety of DOM traversal methods to help us select elements in a document randomly as well as in sequential method. Most of the DOM Traversal Methods do not modify the jQuery object and they are used to filter out elements from a document based on given conditions.

## Find Elements by Index
Consider a simple document with the following HTML content −
```
<html>
   <head>
      <title>The JQuery Example</title>
   </head>

   <body>
      <div>
         <ul>
            <li>list item 1</li>
            <li>list item 2</li>
            <li>list item 3</li>
            <li>list item 4</li>
            <li>list item 5</li>
            <li>list item 6</li>
         </ul>
      </div>
   </body>
</html>
```

- Above every list has its own index, and can be located directly by using `eq(index)` method as below example.

- Every child element starts its index from zero, thus, list item 2 would be accessed by using `$("li").eq(1)` and so on.

**Example**

Following is a simple example which adds the color to second list item.
```
<html>
   <head>
      <title>The JQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $("li").eq(2).addClass("selected");
         });
      </script>

      <style>
         .selected { color:red; }
      </style>
   </head>

   <body>
      <div>
         <ul>
            <li>list item 1</li>
            <li>list item 2</li>
            <li>list item 3</li>
            <li>list item 4</li>
            <li>list item 5</li>
            <li>list item 6</li>
         </ul>
      </div>
   </body>
</html>
```
This will produce following result −

## Filtering out Elements
The `filter( selector )` method can be used to filter out all elements from the set of matched elements that do not match the specified selector(s). The selector can be written using any selector syntax.

**Example**
Following is a simple example which applies color to the lists associated with middle class −
```
<html>
   <head>
      <title>The JQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $("li").filter(".middle").addClass("selected");
         });
      </script>

      <style>
         .selected { color:red; }
      </style>
   </head>

   <body>
      <div>
         <ul>
            <li class = "top">list item 1</li>
            <li class = "top">list item 2</li>
            <li class = "middle">list item 3</li>
            <li class = "middle">list item 4</li>
            <li class = "bottom">list item 5</li>
            <li class = "bottom">list item 6</li>
         </ul>
      </div>
   </body>
</html>
```

## Locating Descendant Elements
The `find( selector )` method can be used to locate all the descendant elements of a particular type of elements. The selector can be written using any selector syntax.

**Example**
Following is an example which selects all the <span> elements available inside different <p> elements −
```
<html>
   <head>
      <title>The JQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $("p").find("span").addClass("selected");
         });
      </script>

      <style>
         .selected { color:red; }
      </style>
   </head>

   <body>
      <p>This is 1st paragraph and <span>THIS IS RED</span></p>
      <p>This is 2nd paragraph and <span>THIS IS ALSO RED</span></p>
   </body>
</html>
```

## JQuery DOM Filter Methods
Following table lists down useful methods which you can use to filter out various elements from a list of DOM elements −

`eq( index )` - Reduce the set of matched elements to a single element.

`filter( selector )` - Removes all elements from the set of matched elements that do not match the specified selector(s).

`filter( fn )` - Removes all elements from the set of matched elements that do not match the specified function.

`is( selector )` - Checks the current selection against an expression and returns true, if at least one element of the selection fits the given selector.

`map( callback )` - Translate a set of elements in the jQuery object into another set of values in a jQuery array (which may, or may not contain elements).

`not( selector )` - Removes elements matching the specified selector from the set of matched elements.

`slice( start, [end] )` - Selects a subset of the matched elements.

## JQuery DOM Traversing Methods
Following table lists down other useful methods which you can use to locate various elements in a DOM −

`add( selector )` - Adds more elements, matched by the given selector, to the set of matched elements.

`andSelf( )` - Add the previous selection to the current selection.

`children( [selector])` - Get a set of elements containing all of the unique immediate children of each of the matched set of elements.

`closest( selector )` - Get a set of elements containing the closest parent element that matches the specified selector, the starting element included.

`contents( )` - Find all the child nodes inside the matched elements (including text nodes), or the content document, if the element is an iframe.

`end( )` - Revert the most recent 'destructive' operation, changing the set of matched elements to its previous state.

`find( selector )` - Searches for descendant elements that match the specified selectors.

`next( [selector] )` - Get a set of elements containing the unique next siblings of each of the given set of elements.

`nextAll( [selector] )` - Find all sibling elements after the current element.

`offsetParent( )` - Returns a jQuery collection with the positioned parent of the first matched element.

`parent( [selector] )` - Get the direct parent of an element. If called on a set of elements, parent returns a set of their unique direct parent elements.

`parents( [selector] )` - Get a set of elements containing the unique ancestors of the matched set of elements (except for the root element).

`prev( [selector] )` - Get a set of elements containing the unique previous siblings of each of the matched set of elements.

`prevAll( [selector] )` - Find all sibling elements in front of the current element.

`siblings( [selector] )` - Get a set of elements containing all of the unique siblings of each of the matched set of elements.

# References
https://www.tutorialspoint.com/jquery/jquery-traversing.htm
