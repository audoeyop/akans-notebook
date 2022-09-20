# CSS Padding

The padding property allows you to specify how much space should appear between the content of an element and its border −

The value of this attribute should be either a length, a percentage, or the word inherit. If the value is inherit, it will have the same padding as its parent element. If a percentage is used, the percentage is of the containing box.

The following CSS properties can be used to control lists. You can also set different values for the padding on each side of the box using the following properties −

- The `padding-bottom` specifies the bottom padding of an element.

- The `padding-top` specifies the top padding of an element.

- The `padding-left` specifies the left padding of an element.

- The `padding-right` specifies the right padding of an element.

- The `padding` serves as shorthand for the preceding properties.

Now, we will see how to use these properties with examples.

## The padding-bottom Property
The padding-bottom property sets the bottom padding (space) of an element. This can take a value in terms of length of %.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "padding-bottom: 15px; border:1px solid black;">
         This is a paragraph with a specified bottom padding
      </p>

      <p style = "padding-bottom: 5%; border:1px solid black;">
         This is another paragraph with a specified bottom padding in percent
      </p>
   </body>
</html>
```

## The padding-top Property
The padding-top property sets the top padding (space) of an element. This can take a value in terms of length of %.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "padding-top: 15px; border:1px solid black;">
         This is a paragraph with a specified top padding
      </p>

      <p style = "padding-top: 5%; border:1px solid black;">
         This is another paragraph with a specified top padding in percent
      </p>
   </body>
</html>
```

## The padding-left Property
The padding-left property sets the left padding (space) of an element. This can take a value in terms of length of %.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "padding-left: 15px; border:1px solid black;">
         This is a paragraph with a specified left padding
      </p>

      <p style = "padding-left: 15%; border:1px solid black;">
         This is another paragraph with a specified left padding in percent
      </p>
   </body>
</html>
```

## The padding-right Property
The padding-right property sets the right padding (space) of an element. This can take a value in terms of length of %.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "padding-right: 15px; border:1px solid black;">
         This is a paragraph with a specified right padding
      </p>

      <p style = "padding-right: 5%; border:1px solid black;">
         This is another paragraph with a specified right padding in percent
      </p>
   </body>
</html>
```

## The Padding Property
The padding property sets the left, right, top and bottom padding (space) of an element. This can take a value in terms of length of %.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "padding: 15px; border:1px solid black;">
         all four padding will be 15px
      </p>

      <p style = "padding:10px 2%; border:1px solid black;">
         top and bottom padding will be 10px, left and right
         padding will be 2% of the total width of the document.
      </p>

      <p style = "padding: 10px 2% 10px; border:1px solid black;">
         top padding will be 10px, left and right padding will
         be 2% of the total width of the document, bottom padding will be 10px
      </p>

      <p style = "padding: 10px 2% 10px 10px; border:1px solid black;">
         top padding will be 10px, right padding will be 2% of
         the total width of the document, bottom padding and top padding will be 10px
      </p>
   </body>
</html>
```

# References
https://www.tutorialspoint.com/css/css_padding.htm
