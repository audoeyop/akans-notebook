# CSS Lists

Lists are very helpful in conveying a set of either numbered or bullet points. This chapter teaches you how to control list type, position, style, etc., using CSS.

We have the following five CSS properties, which can be used to control lists −

- The `list-style-type` allows you to control the shape or appearance of the marker.

- The `list-style-position` specifies whether a long point that wraps to a second line should align with the first line or start underneath the start of the marker.

- The `list-style-image` specifies an image for the marker rather than a bullet point or number.

- The `list-style` serves as shorthand for the preceding properties.

- The `marker-offset` specifies the distance between a marker and the text in the list.

Now, we will see how to use these properties with examples.

## The list-style-type Property

The list-style-type property allows you to control the shape or style of bullet point (also known as a marker) in the case of unordered lists and the style of numbering characters in ordered lists.

Here are the values which can be used for an unordered list −

- `none` - No symbols displayed with list items
- `disc` - (default) A filled-in circle
- `circle` - An empty circle
- `square` - A filled-in square

Here are the values, which can be used for an ordered list −

<table class="table table-bordered">
<tbody><tr>
<th style="text-align:center;">Value</th>
<th style="text-align:center;">Description</th>
<th style="text-align:center;">Example</th>
</tr>
<tr>
<td>decimal</td>
<td>Number</td>
<td>1,2,3,4,5</td>
</tr>
<tr>
<td style="vertical-align:middle;">decimal-leading-zero</td>
<td style="vertical-align:middle;">0 before the number</td>
<td>01, 02, 03, 04, 05</td>
</tr>
<tr>
<td>lower-alpha</td>
<td>Lowercase alphanumeric characters</td>
<td>a, b, c, d, e</td>
</tr>
<tr>
<td style="vertical-align:middle;">upper-alpha</td>
<td style="vertical-align:middle;">Uppercase alphanumeric characters</td>
<td>A, B, C, D, E</td>
</tr>
<tr>
<td>lower-roman</td>
<td>Lowercase Roman numerals</td>
<td>i, ii, iii, iv, v</td>
</tr>
<tr>
<td style="vertical-align:middle;">upper-roman</td>
<td style="vertical-align:middle;">Uppercase Roman numerals</td>
<td>I, II, III, IV, V</td>
</tr>
<tr>
<td style="vertical-align:middle;">lower-greek</td>
<td style="vertical-align:middle;">The marker is lower-greek</td>
<td>alpha, beta, gamma</td>
</tr>
<tr>
<td>lower-latin</td>
<td>The marker is lower-latin</td>
<td>a, b, c, d, e</td>
</tr>
<tr>
<td>upper-latin</td>
<td>The marker is upper-latin</td>
<td>A, B, C, D, E</td>
</tr>
<tr>
<td>hebrew</td>
<td style="width:55%;">The marker is traditional Hebrew numbering</td>
<td>&nbsp;</td>
</tr>
<tr>
<td style="vertical-align:middle;">armenian</td>
<td>The marker is traditional Armenian numbering</td>
<td>&nbsp;</td>
</tr>
<tr>
<td style="vertical-align:middle;">georgian</td>
<td>The marker is traditional Georgian numbering</td>
<td>&nbsp;</td>
</tr>
<tr>
<td>cjk-ideographic</td>
<td style="vertical-align:middle;">The marker is plain ideographic numbers</td>
<td>&nbsp;</td>
</tr>
<tr>
<td>hiragana</td>
<td>The marker is hiragana</td>
<td>a, i, u, e, o, ka, ki</td>
</tr>
<tr>
<td style="vertical-align:middle;">katakana</td>
<td style="vertical-align:middle;">The marker is katakana</td>
<td>A, I, U, E, O, KA, KI</td>
</tr>
<tr>
<td style="vertical-align:middle;">hiragana-iroha</td>
<td style="vertical-align:middle;">The marker is hiragana-iroha</td>
<td>i, ro, ha, ni, ho, he, to</td>
</tr>
<tr>
<td>katakana-iroha</td>
<td style="vertical-align:middle;">The marker is katakana-iroha</td>
<td>I, RO, HA, NI, HO, HE, TO</td>
</tr>
</tbody></table>


Here is an example −

```
<html>
   <head>
   </head>

   <body>
      <ul style = "list-style-type:circle;">
         <li>Maths</li>
         <li>Social Science</li>
         <li>Physics</li>
      </ul>

      <ul style = "list-style-type:square;">
         <li>Maths</li>
         <li>Social Science</li>
         <li>Physics</li>
      </ul>

      <ol style = "list-style-type:decimal;">
         <li>Maths</li>
         <li>Social Science</li>
         <li>Physics</li>
      </ol>

      <ol style = "list-style-type:lower-alpha;">
         <li>Maths</li>
         <li>Social Science</li>
         <li>Physics</li>
      </ol>

      <ol style = "list-style-type:lower-roman;">
         <li>Maths</li>
         <li>Social Science</li>
         <li>Physics</li>
      </ol>
   </body>
</html>
```

## The list-style-position Property
The list-style-position property indicates whether the marker should appear inside or outside of the box containing the bullet points. It can have one the two values −

- `inside` - If the text goes onto a second line, the text will wrap underneath the marker. It will also appear indented to where the text would have started if the list had a value of outside.


- `outside` - If the text goes onto a second line, the text will be aligned with the start of the first line (to the right of the bullet).

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <ul style = "list-style-type:circle; list-stlye-position:outside;">
         <li>Maths</li>
         <li>Social Science</li>
         <li>Physics</li>
      </ul>

      <ul style = "list-style-type:square;list-style-position:inside;">
         <li>Maths</li>
         <li>Social Science</li>
         <li>Physics</li>
      </ul>

      <ol style = "list-style-type:decimal;list-stlye-position:outside;">
         <li>Maths</li>
         <li>Social Science</li>
         <li>Physics</li>
      </ol>

      <ol style = "list-style-type:lower-alpha;list-style-position:inside;">
         <li>Maths</li>
         <li>Social Science</li>
         <li>Physics</li>
      </ol>
   </body>
</html>
```


## The list-style-image Property

The list-style-image allows you to specify an image so that you can use your own bullet style. The syntax is similar to the background-image property with the letters url starting the value of the property followed by the URL in brackets. If it does not find the given image then default bullets are used.
```
<html>
   <head>
   </head>

   <body>
      <ul>
         <li style = "list-style-image: url(/images/bullet.gif);">Maths</li>
         <li>Social Science</li>
         <li>Physics</li>
      </ul>

      <ol>
         <li style = "list-style-image: url(/images/bullet.gif);">Maths</li>
         <li>Social Science</li>
         <li>Physics</li>
      </ol>
   </body>
</html>
```

## The list-style Property
The list-style allows you to specify all the list properties into a single expression. These properties can appear in any order.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <ul style = "list-style: inside square;">
         <li>Maths</li>
         <li>Social Science</li>
         <li>Physics</li>
      </ul>

      <ol style = "list-style: outside upper-alpha;">
         <li>Maths</li>
         <li>Social Science</li>
         <li>Physics</li>
      </ol>
   </body>
</html>
```

## The marker-offset Property
The marker-offset property allows you to specify the distance between the marker and the text relating to that marker. Its value should be a length as shown in the following example −

Unfortunately, this property is not supported in IE 6 or Netscape 7.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <ul style = "list-style: inside square; marker-offset:2em;">
         <li>Maths</li>
         <li>Social Science</li>
         <li>Physics</li>
      </ul>

      <ol style = "list-style: outside upper-alpha; marker-offset:2cm;">
         <li>Maths</li>
         <li>Social Science</li>
         <li>Physics</li>
      </ol>
   </body>
</html>
```

# References
https://www.tutorialspoint.com/css/css_lists.htm
