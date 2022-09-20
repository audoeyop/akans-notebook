# CSS Borders

The border properties allow you to specify how the border of the box representing an element should look. There are three properties of a border you can change −

- The `border-color` specifies the color of a border.

- The `border-style` specifies whether a border should be solid, dashed line, double line, or one of the other possible values.

- The `border-width` specifies the width of a border.

Now, we will see how to use these properties with examples.

## The border-color Property

The border-color property allows you to change the color of the border surrounding an element. You can individually change the color of the bottom, left, top and right sides of an element's border using the properties −

- `border-bottom-color` changes the color of bottom border.

- `border-top-color` changes the color of top border.

- `border-left-color` changes the color of left border.

- `border-right-color` changes the color of right border.

The following example shows the effect of all these properties −

```
<html>
   <head>
      <style type = "text/css">
         p.example1 {
            border:1px solid;
            border-bottom-color:#009900; /* Green */
            border-top-color:#FF0000;    /* Red */
            border-left-color:#330000;   /* Black */
            border-right-color:#0000CC;  /* Blue */
         }
         p.example2 {
            border:1px solid;
            border-color:#009900;        /* Green */
         }
      </style>
   </head>

   <body>
      <p class = "example1">
         This example is showing all borders in different colors.
      </p>

      <p class = "example2">
         This example is showing all borders in green color only.
      </p>
   </body>
</html>
```

## The border-style Property
The border-style property allows you to select one of the following styles of border −

- `none` − No border. (Equivalent of border-width:0;)

- `solid` − Border is a single solid line.

- `dotted` − Border is a series of dots.

- `dashed` − Border is a series of short lines.

- `double` − Border is two solid lines.

- `groove` − Border looks as though it is carved into the page.

- `ridge` − Border looks the opposite of groove.

- `inset` − Border makes the box look like it is embedded in the page.

- `outset` − Border makes the box look like it is coming out of the canvas.

- `hidden` − Same as none, except in terms of border-conflict resolution for table elements.

You can individually change the style of the bottom, left, top, and right borders of an element using the following properties −

- `border-bottom-style` changes the style of bottom border.

- `border-top-style` changes the style of top border.

- `border-left-style` changes the style of left border.

- `border-right-style` changes the style of right border.

The following example shows all these border styles −
```
<html>
   <head>
   </head>

   <body>
      <p style = "border-width:4px; border-style:none;">
         This is a border with none width.
      </p>

      <p style = "border-width:4px; border-style:solid;">
         This is a solid border.
      </p>

      <p style = "border-width:4px; border-style:dashed;">
         This is a dashed border.
      </p>

      <p style = "border-width:4px; border-style:double;">
         This is a double border.
      </p>

      <p style = "border-width:4px; border-style:groove;">
         This is a groove border.
      </p>

      <p style = "border-width:4px; border-style:ridge">
         This is a ridge  border.
      </p>

      <p style = "border-width:4px; border-style:inset;">
         This is a inset border.
      </p>

      <p style = "border-width:4px; border-style:outset;">
         This is a outset border.
      </p>

      <p style = "border-width:4px; border-style:hidden;">
         This is a hidden border.
      </p>

      <p style = "border-width:4px;
         border-top-style:solid;
         border-bottom-style:dashed;
         border-left-style:groove;
         border-right-style:double;">
         This is a a border with four different styles.
      </p>
   </body>
</html>
```

## The border-width Property
The border-width property allows you to set the width of an element borders. The value of this property could be either a length in px, pt or cm or it should be set to thin, medium or thick.

You can individually change the width of the bottom, top, left, and right borders of an element using the following properties −

- `border-bottom-width` changes the width of bottom border.

- `border-top-width` changes the width of top border.

- `border-left-width` changes the width of left border.

- `border-right-width` changes the width of right border.

The following example shows all these border width −
```
<html>
   <head>
   </head>

   <body>
      <p style = "border-width:4px; border-style:solid;">
         This is a solid border whose width is 4px.
      </p>

      <p style = "border-width:4pt; border-style:solid;">
         This is a solid border whose width is 4pt.
      </p>

      <p style = "border-width:thin; border-style:solid;">
         This is a solid border whose width is thin.
      </p>

      <p style = "border-width:medium; border-style:solid;">
         This is a solid border whose width is medium;
      </p>

      <p style = "border-width:thick; border-style:solid;">
         This is a solid border whose width is thick.
      </p>

      <p style = "border-bottom-width:4px;border-top-width:10px;
         border-left-width: 2px;border-right-width:15px;border-style:solid;">
         This is a a border with four different width.
      </p>
   </body>
</html>
```

## Border Properties Using Shorthand
The border property allows you to specify color, style, and width of lines in one property −

The following example shows how to use all the three properties into a single property. This is the most frequently used property to set border around any element.
```
<html>
   <head>
   </head>

   <body>
      <p style = "border:4px solid red;">
         This example is showing shorthand property for border.
      </p>
   </body>
</html>
```

# References
https://www.tutorialspoint.com/css/css_borders.htm
