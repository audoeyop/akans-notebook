# jQuery CSS

The jQuery library supports nearly all of the selectors included in Cascading Style Sheet (CSS) specifications 1 through 3, as outlined on the World Wide Web Consortium's site.

Using JQuery library developers can enhance their websites without worrying about browsers and their versions as long as the browsers have JavaScript enabled.

Most of the JQuery CSS Methods do not modify the content of the jQuery object and they are used to apply CSS properties on DOM elements.

## Apply CSS Properties
This is very simple to apply any CSS property using JQuery method **css( PropertyName, PropertyValue )**.

Here is the syntax for the method −
```
selector.css( PropertyName, PropertyValue );
```
Here you can pass PropertyName as a javascript string and based on its value, PropertyValue could be string or integer.

**Example**
Following is an example which adds font color to the second list item.
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $("li").eq(2).css("color", "red");
         });
      </script>
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


## Apply Multiple CSS Properties
You can apply multiple CSS properties using a single JQuery method `CSS( {key1:val1, key2:val2....)`. You can apply as many properties as you like in a single call.

Here is the syntax for the method −
```
selector.css( {key1:val1, key2:val2....keyN:valN})
```
Here you can pass key as property and val as its value as described above.

**Example**

Following is an example which adds font color as well as background color to the second list item.
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $("li").eq(2).css({"color":"red", "background-color":"green"});
         });
      </script>
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

## Setting Element Width & Height
The `width( val )` and `height( val )` method can be used to set the width and height respectively of any element.

**Example**

Following is a simple example which sets the width of first division element where as rest of the elements have width set by style sheet
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $("div:first").width(100);
            $("div:first").css("background-color", "blue");
         });
      </script>

      <style>
         div {
            width:70px; height:50px; float:left;
            margin:5px; background:red; cursor:pointer;
         }
      </style>
   </head>

   <body>
      <div></div>
      <div>d</div>
      <div>d</div>
      <div>d</div>
      <div>d</div>
   </body>
</html>
```

JQuery CSS Methods
Following table lists down all the methods which you can use to play with CSS properties −

Sr.No.	Method & Description
`css( name )` - Return a style property on the first matched element.

`css( name, value )` - Set a single style property to a value on all matched elements.

`css( properties )` - Set a key/value object as style properties to all matched elements.

`height( val )` - Set the CSS height of every matched element.

`height( )` - Get the current computed, pixel, height of the first matched element.

`innerHeight( )` - Gets the inner height (excludes the border and includes the padding) for the first matched element.

`innerWidth( )` - Gets the inner width (excludes the border and includes the padding) for the first matched element.

`offset( )` - Get the current offset of the first matched element, in pixels, relative to the document.

`offsetParent( )` - Returns a jQuery collection with the positioned parent of the first matched element.

`outerHeight( [margin] )` - Gets the outer height (includes the border and padding by default) for the first matched element.

`outerWidth( [margin] )` - Get the outer width (includes the border and padding by default) for the first matched element.

`position( )` - Gets the top and left position of an element relative to its offset parent.

`scrollLeft( val )` - When a value is passed in, the scroll left offset is set to that value on all matched elements.

`scrollLeft( )` - Gets the scroll left offset of the first matched element.

`scrollTop( val )` - When a value is passed in, the scroll top offset is set to that value on all matched elements.

`scrollTop( )` - Gets the scroll top offset of the first matched element.

`width( val )` - Set the CSS width of every matched element.

`width( )` - Get the current computed, pixel, width of the first matched element.

# References
https://www.tutorialspoint.com/jquery/jquery-css.htm
