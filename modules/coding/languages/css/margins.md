# CSS Margins

The margin property defines the space around an HTML element. It is possible to use negative values to overlap content.

The values of the margin property are not inherited by the child elements. Remember that the adjacent vertical margins (top and bottom margins) will collapse into each other so that the distance between the blocks is not the sum of the margins, but only the greater of the two margins or the same size as one margin if both are equal.

We have the following properties to set an element margin.

- The margin specifies a shorthand property for setting the margin properties in one declaration.

- The `margin-bottom` specifies the bottom margin of an element.

- The `margin-top` specifies the top margin of an element.

- The `margin-left` specifies the left margin of an element.

- The `margin-right` specifies the right margin of an element.

Now, we will see how to use these properties with examples.

The Margin Property
The margin property allows you set all of the properties for the four margins in one declaration. Here is the syntax to set margin around a paragraph −

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "margin: 15px; border:1px solid black;">
         all four margins will be 15px
      </p>

      <p style = "margin:10px 2%; border:1px solid black;">
         top and bottom margin will be 10px, left and right margin will be 2%
         of the total width of the document.
      </p>

      <p style = "margin: 10px 2% -10px; border:1px solid black;">
         top margin will be 10px, left and right margin will be 2% of the
         total width of the document, bottom margin will be -10px
      </p>

      <p style = "margin: 10px 2% -10px auto; border:1px solid black;">
         top margin will be 10px, right margin will be 2% of the total
         width of the document, bottom margin will be -10px, left margin
         will be set by the browser
      </p>
   </body>
</html>
```

## The margin-bottom Property
The margin-bottom property allows you set bottom margin of an element. It can have a value in length, % or auto.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "margin-bottom: 15px; border:1px solid black;">
         This is a paragraph with a specified bottom margin
      </p>

      <p style = "margin-bottom: 5%; border:1px solid black;">
         This is another paragraph with a specified bottom margin in percent
      </p>
   </body>
</html>
```

## The margin-top Property
The margin-top property allows you set top margin of an element. It can have a value in length, % or auto.

Here is an example −

```
<html>
   <head>
   </head>

   <body>
      <p style = "margin-top: 15px; border:1px solid black;">
         This is a paragraph with a specified top margin
      </p>

      <p style = "margin-top: 5%; border:1px solid black;">
         This is another paragraph with a specified top margin in percent
      </p>
   </body>
</html>
```
It will produce the following result −

## The margin-left Property
The margin-left property allows you set left margin of an element. It can have a value in length, % or auto.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "margin-left: 15px; border:1px solid black;">
         This is a paragraph with a specified left margin
      </p>

      <p style = "margin-left: 5%; border:1px solid black;">
         This is another paragraph with a specified top margin in percent
      </p>
   </body>
</html>
```

## The margin-right Property
The margin-right property allows you set right margin of an element. It can have a value in length, % or auto.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "margin-right: 15px; border:1px solid black;">
         This is a paragraph with a specified right margin
      </p>
      <p style = "margin-right: 5%; border:1px solid black;">
         This is another paragraph with a specified right margin in percent
      </p>
   </body>
</html>
```

# References
https://www.tutorialspoint.com/css/css_margins.htm
