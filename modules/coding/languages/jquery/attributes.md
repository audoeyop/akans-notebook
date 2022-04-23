# jQuery Attributes

Some of the most basic components we can manipulate when it comes to DOM elements are the properties and attributes assigned to those elements.

Most of these attributes are available through JavaScript as DOM node properties. Some of the more common properties are −
- className
- tagName
- id
- href
- title
- rel
- src

Consider the following HTML markup for an image element −
```
<img id = "imageid" src = "image.gif" alt = "Image" class = "myclass"
   title = "This is an image"/>
```

In this element's markup, the tag name is img, and the markup for id, src, alt, class, and title represents the element's attributes, each of which consists of a name and a value.

jQuery gives us the means to easily manipulate an element's attributes and gives us access to the element so that we can also change its properties.

## Get Attribute Value
The `attr()` method can be used to either fetch the value of an attribute from the first element in the matched set or set attribute values onto all matched elements.

**Example**

Following is a simple example which fetches title attribute of `<em>` tag and set `<div id = "divid">` value with the same value −
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            var title = $("em").attr("title");
            $("#divid").text(title);
         });
      </script>
   </head>

   <body>
      <div>
         <em title = "Bold and Brave">This is first paragraph.</em>
         <p id = "myid">This is second paragraph.</p>
         <div id = "divid"></div>
      </div>
   </body>
</html>
```

## Set Attribute Value

The `attr(name, value)` method can be used to set the named attribute onto all elements in the wrapped set using the passed value.

Example
Following is a simple example which set src attribute of an image tag to a correct location −
```
<html>
   <head>
      <title>The jQuery Example</title>
      <base href="https://www.tutorialspoint.com" />
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $("#myimg").attr("src", "/jquery/images/jquery.jpg");
         });
      </script>
   </head>

   <body>
      <div>
         <img id = "myimg" src = "/images/jquery.jpg" alt = "Sample image" />
      </div>
   </body>
</html>
```

## Applying Styles
The `addClass( classes )` method can be used to apply defined style sheets onto all the matched elements. You can specify multiple classes separated by space.

**Example**

Following is a simple example which sets class attribute of a para <p> tag −
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $("em").addClass("selected");
            $("#myid").addClass("highlight");
         });
      </script>

      <style>
         .selected { color:red; }
         .highlight { background:yellow; }
      </style>
   </head>

   <body>
      <em title = "Bold and Brave">This is first paragraph.</em>
      <p id = "myid">This is second paragraph.</p>
   </body>
</html>
```

## Attribute Methods
Following table lists down few useful methods which you can use to manipulate attributes and properties −


`attr( properties )`
Set a key/value object as properties to all matched elements.

`attr(key, fn)`
Set a single property to a computed value, on all matched elements.

`removeAttr(name)`
Remove an attribute from each of the matched elements.

`hasClass(class)`
Returns true if the specified class is present on at least one of the set of matched elements.

`removeClass(class)`
Removes all or the specified class(es) from the set of matched elements.

`toggleClass(class)`
Adds the specified class if it is not present, removes the specified class if it is present.

`html()`
Get the html contents (innerHTML) of the first matched element.

`html(value)`
Set the html contents of every matched element.

`text( )`
Get the combined text contents of all matched elements.

`text(value)`
Set the text contents of all matched elements.

`val()`
Get the input value of the first matched element.

`val( value )`
Set the value attribute of every matched element if it is called on <input> but if it is called on <select> with the passed <option> value then passed option would be selected, if it is called on check box or radio box then all the matching check box and radiobox would be checked.

# References
https://www.tutorialspoint.com/jquery/jquery-attributes.htm
