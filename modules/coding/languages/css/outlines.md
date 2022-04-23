# CSS Outlines

Outlines are very similar to borders, but there are few major differences as well −

- An outline does not take up space.

- Outlines do not have to be rectangular.

- Outline is always the same on all sides; you cannot specify different values for different sides of an element.

*NOTE* − The outline properties are not supported by IE 6 or Netscape 7.

You can set the following outline properties using CSS.

The `outline-width` property is used to set the width of the outline.

The `outline-style` property is used to set the line style for the outline.

The `outline-color` property is used to set the color of the outline.

The `outline property` is used to set all the above three properties in a single statement.

## The outline-width Property
The outline-width property specifies the width of the outline to be added to the box. Its value should be a length or one of the values thin, medium, or thick, just like the border-width attribute.

A width of zero pixels means no outline.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "outline-width:thin; outline-style:solid;">
         This text is having thin outline.
      </p>
      <br />

      <p style = "outline-width:thick; outline-style:solid;">
         This text is having thick outline.
      </p>
      <br />

      <p style = "outline-width:5px; outline-style:solid;">
         This text is having 5x outline.
      </p>
   </body>
</html>
```

## The outline-style Property
The outline-style property specifies the style for the line (solid, dotted, or dashed) that goes around an element. It can take one of the following values −

- `none` − No border. (Equivalent of outline-width:0;)

- `solid` − Outline is a single solid line.

- `dotted` − Outline is a series of dots.

- `dashed` − Outline is a series of short lines.

- `double` − Outline is two solid lines.

- `groove` − Outline looks as though it is carved into the page.

- `ridge` − Outline looks the opposite of groove.

- `inset` − Outline makes the box look like it is embedded in the page.

- `outset` − Outline makes the box look like it is coming out of the canvas.

- `hidden` − Same as none.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "outline-width:thin; outline-style:solid;">
         This text is having thin solid  outline.
      </p>
      <br />

      <p style = "outline-width:thick; outline-style:dashed;">
         This text is having thick dashed outline.
      </p>
      <br />

      <p style = "outline-width:5px;outline-style:dotted;">
         This text is having 5x dotted outline.
      </p>
   </body>
</html>
```

## The outline-color Property
The outline-color property allows you to specify the color of the outline. Its value should either be a color name, a hex color, or an RGB value, as with the color and border-color properties.

Here is an example −

```
<html>
   <head>
   </head>

   <body>
      <p style = "outline-width:thin; outline-style:solid;outline-color:red">
         This text is having thin solid red  outline.
      </p>
      <br />

      <p style = "outline-width:thick; outline-style:dashed;outline-color:#009900">
         This text is having thick dashed green outline.
      </p>
      <br />

      <p style = "outline-width:5px;outline-style:dotted;outline-color:rgb(13,33,232)">
         This text is having 5x dotted blue outline.
      </p>
   </body>
</html>
```

## The outline Property

The outline property is a shorthand property that allows you to specify values for any of the three properties discussed previously in any order but in a single statement.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "outline:thin solid red;">
         This text is having thin solid red outline.
      </p>
      <br />

      <p style = "outline:thick dashed #009900;">
         This text is having thick dashed green outline.
      </p>
      <br />

      <p style = "outline:5px dotted rgb(13,33,232);">
         This text is having 5x dotted blue outline.
      </p>
   </body>
</html>
```

# References
https://www.tutorialspoint.com/css/css_outlines.htm
