# CSS Fonts

This chapter teaches you how to set fonts of a content, available in an HTML element. You can set following font properties of an element −

The `font-family` property is used to change the face of a font.

The `font-style` property is used to make a font italic or oblique.

The `font-variant` property is used to create a small-caps effect.

The `font-weight` property is used to increase or decrease how bold or light a font appears.

The `font-size` property is used to increase or decrease the size of a font.

The `font` property is used as shorthand to specify a number of other font properties.

## Set the Font Family
Following is the example, which demonstrates how to set the font family of an element. Possible value could be any font family name.
```
<html>
   <head>
   </head>

   <body>
      <p style = "font-family:georgia,garamond,serif;">
         This text is rendered in either georgia, garamond, or the
         default serif font depending on which font  you have at your system.
      </p>
   </body>
</html>
```

## Set the Font Style
Following is the example, which demonstrates how to set the font style of an element. Possible values are normal, italic and oblique.
```
<html>
   <head>
   </head>

   <body>
      <p style = "font-style:italic;">
         This text will be rendered in italic style
      </p>
   </body>
</html>
```

## Set the Font Variant
The following example demonstrates how to set the font variant of an element. Possible values are normal and small-caps.
```
<html>
   <head>
   </head>

   <body>
      <p style = "font-variant:small-caps;">
         This text will be rendered as small caps
      </p>
   </body>
</html>
```

## Set the Font Weight
The following example demonstrates how to set the font weight of an element. The font-weight property provides the functionality to specify how bold a font is. Possible values could be normal, bold, bolder, lighter, 100, 200, 300, 400, 500, 600, 700, 800, 900.
```
<html>
   <head>
   </head>

   <body>
      <p style = "font-weight:bold;">
         This font is bold.
      </p>

      <p style = "font-weight:bolder;">
         This font is bolder.
      </p>

      <p style = "font-weight:500;">
         This font is 500 weight.
      </p>
   </body>
</html>
```

## Set the Font Size
The following example demonstrates how to set the font size of an element. The font-size property is used to control the size of fonts. Possible values could be xx-small, x-small, small, medium, large, x-large, xx-large, smaller, larger, size in pixels or in %.
```
<html>
   <head>
   </head>

   <body>
      <p style = "font-size:20px;">
         This font size is 20 pixels
      </p>

      <p style = "font-size:small;">
         This font size is small
      </p>

      <p style = "font-size:large;">
         This font size is large
      </p>
   </body>
</html>
```

## Set the Font Size Adjust
The following example demonstrates how to set the font size adjust of an element. This property enables you to adjust the x-height to make fonts more legible. Possible value could be any number.
```
<html>
   <head>
   </head>

   <body>
      <p style = "font-size-adjust:0.61;">
         This text is using a font-size-adjust value.
      </p>
   </body>
</html>
```

## Set the Font Stretch
The following example demonstrates how to set the font stretch of an element. This property relies on the user's computer to have an expanded or condensed version of the font being used.

Possible values could be normal, wider, narrower, ultra-condensed, extra-condensed, condensed, semi-condensed, semi-expanded, expanded, extra-expanded, ultra-expanded.
```
<html>
   <head>
   </head>

   <body>
      <p style = "font-stretch:ultra-expanded;">
         If this doesn't appear to work, it is likely that your computer
         doesn't have a <br>condensed or expanded version of the font being used.
      </p>
   </body>
</html>
```

## Shorthand Property
You can use the font property to set all the font properties at once. For example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "font:italic small-caps bold 15px georgia;">
         Applying all the properties on the text at once.
      </p>
   </body>
</html>
```
# References
https://www.tutorialspoint.com/css/css_fonts.htm
