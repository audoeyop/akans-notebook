# CSS Tables

This tutorial will teach you how to set different properties of an HTML table using CSS. You can set following properties of a table −

- The `border-collapse` specifies whether the browser should control the appearance of the adjacent borders that touch each other or whether each cell should maintain its style.

- The `border-spacing` specifies the width that should appear between table cells.

- The `caption-side` captions are presented in the <caption> element. By default, these are rendered above the table in the document. You use the caption-side property to control the placement of the table caption.

- The `empty-cells` specifies whether the border should be shown if a cell is empty.

- The `table-layout` allows browsers to speed up layout of a table by using the first width properties it comes across for the rest of a column rather than having to load the whole table before rendering it.

Now, we will see how to use these properties with examples.

## The border-collapse Property
This property can have two values collapse and separate. The following example uses both the values −
```
<html>
   <head>
      <style type = "text/css">
         table.one {border-collapse:collapse;}
         table.two {border-collapse:separate;}

         td.a {
            border-style:dotted;
            border-width:3px;
            border-color:#000000;
            padding: 10px;
         }
         td.b {
            border-style:solid;
            border-width:3px;
            border-color:#333333;
            padding:10px;
         }
      </style>
   </head>

   <body>
      <table class = "one">
         <caption>Collapse Border Example</caption>
         <tr><td class = "a"> Cell A Collapse Example</td></tr>
         <tr><td class = "b"> Cell B Collapse Example</td></tr>
      </table>
      <br />

      <table class = "two">
         <caption>Separate Border Example</caption>
         <tr><td class = "a"> Cell A Separate Example</td></tr>
         <tr><td class = "b"> Cell B Separate Example</td></tr>
      </table>
   </body>
</html>
```

## The border-spacing Property
The border-spacing property specifies the distance that separates adjacent cells'. borders. It can take either one or two values; these should be units of length.

If you provide one value, it will applies to both vertical and horizontal borders. Or you can specify two values, in which case, the first refers to the horizontal spacing and the second to the vertical spacing −

*NOTE* − Unfortunately, this property does not work in Netscape 7 or IE 6.
```
<style type="text/css">
   /* If you provide one value */
   table.example {border-spacing:10px;}
   /* This is how you can provide two values */
   table.example {border-spacing:10px; 15px;}
</style>
Now let's modify the previous example and see the effect −

Live Demo
<html>
   <head>
      <style type = "text/css">
         table.one {
            border-collapse:separate;
            width:400px;
            border-spacing:10px;
         }
         table.two {
            border-collapse:separate;
            width:400px;
            border-spacing:10px 50px;
         }
      </style>
   </head>

   <body>

      <table class = "one" border = "1">
         <caption>Separate Border Example with border-spacing</caption>
         <tr><td> Cell A Collapse Example</td></tr>
         <tr><td> Cell B Collapse Example</td></tr>
      </table>
      <br />

      <table class = "two" border = "1">
         <caption>Separate Border Example with border-spacing</caption>
         <tr><td> Cell A Separate Example</td></tr>
         <tr><td> Cell B Separate Example</td></tr>
      </table>

   </body>
</html>
```

## The caption-side Property
The caption-side property allows you to specify where the content of a <caption> element should be placed in relationship to the table. The table that follows lists the possible values.

This property can have one of the four values top, bottom, left or right. The following example uses each value.

*NOTE* − These properties may not work with your IE Browser.
```
<html>
   <head>
      <style type = "text/css">
         caption.top {caption-side:top}
         caption.bottom {caption-side:bottom}
         caption.left {caption-side:left}
         caption.right {caption-side:right}
      </style>
   </head>

   <body>

      <table style = "width:400px; border:1px solid black;">
         <caption class = "top">
            This caption will appear at the top
         </caption>
         <tr><td > Cell A</td></tr>
         <tr><td > Cell B</td></tr>
      </table>
      <br />

      <table style = "width:400px; border:1px solid black;">
         <caption class = "bottom">
            This caption will appear at the bottom
         </caption>
         <tr><td > Cell A</td></tr>
         <tr><td > Cell B</td></tr>
      </table>
      <br />

      <table style = "width:400px; border:1px solid black;">
         <caption class = "left">
            This caption will appear at the left
         </caption>
         <tr><td > Cell A</td></tr>
         <tr><td > Cell B</td></tr>
      </table>
      <br />

      <table style = "width:400px; border:1px solid black;">
         <caption class = "right">
            This caption will appear at the right
         </caption>
         <tr><td > Cell A</td></tr>
         <tr><td > Cell B</td></tr>
      </table>

   </body>
</html>
```

## The empty-cells Property
The empty-cells property indicates whether a cell without any content should have a border displayed.

This property can have one of the three values - show, hide or inherit.

Here is the empty-cells property used to hide borders of empty cells in the <table> element.

```
<html>
   <head>
      <style type = "text/css">
         table.empty {
            width:350px;
            border-collapse:separate;
            empty-cells:hide;
         }
         td.empty {
            padding:5px;
            border-style:solid;
            border-width:1px;
            border-color:#999999;
         }
      </style>
   </head>

   <body>

      <table class = "empty">
         <tr>
            <th></th>
            <th>Title one</th>
            <th>Title two</th>
         </tr>

         <tr>
            <th>Row Title</th>
            <td class = "empty">value</td>
            <td class = "empty">value</td>
         </tr>

         <tr>
            <th>Row Title</th>
            <td class = "empty">value</td>
            <td class = "empty"></td>
         </tr>
      </table>

   </body>
</html>
```

## The table-layout Property
The table-layout property is supposed to help you control how a browser should render or lay out a table.

This property can have one of the three values: fixed, auto or inherit.

The following example shows the difference between these properties.

*NOTE* − This property is not supported by many browsers so do not rely on this property.
```
<html>
   <head>
      <style type = "text/css">
         table.auto {
            table-layout: auto
         }
         table.fixed {
            table-layout: fixed
         }
      </style>
   </head>

   <body>

      <table class = "auto" border = "1" width = "100%">
         <tr>
            <td width = "20%">1000000000000000000000000000</td>
            <td width = "40%">10000000</td>
            <td width = "40%">100</td>
         </tr>
      </table>
      <br />

      <table class = "fixed" border = "1" width = "100%">
         <tr>
            <td width = "20%">1000000000000000000000000000</td>
            <td width = "40%">10000000</td>
            <td width = "40%">100</td>
         </tr>
      </table>

   </body>
</html>
```

# References
https://www.tutorialspoint.com/css/css_tables.htm
