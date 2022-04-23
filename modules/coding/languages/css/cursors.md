# CSS Cursors

The cursor property of CSS allows you to specify the type of cursor that should be displayed to the user.

One good usage of this property is in using images for submit buttons on forms. By default, when a cursor hovers over a link, the cursor changes from a pointer to a hand. However, it does not change form for a submit button on a form. Therefore, whenever someone hovers over an image that is a submit button, it provides a visual clue that the image is clickable.

The following table shows the possible values for the cursor property −

- `auto` - Shape of the cursor depends on the context area it is over. For example an I over text, a hand over a link, and so on...

- `crosshair` - A crosshair or plus sign

- `default` - An arrow

- `pointer` - A pointing hand (in IE 4 this value is hand)

- `move` - The I bar

- `e-resize` - The cursor indicates that an edge of a box is to be moved right (east)

- `ne-resize` - The cursor indicates that an edge of a box is to be moved up and right (north/east)

- `nw-resize` - The cursor indicates that an edge of a box is to be moved up and left (north/west)

- `n-resize` - The cursor indicates that an edge of a box is to be moved up (north)

- `se-resize` - The cursor indicates that an edge of a box is to be moved down and right (south/east)

- `sw-resize` - The cursor indicates that an edge of a box is to be moved down and left (south/west)

- `s-resize` - The cursor indicates that an edge of a box is to be moved down (south)

- `w-resize` - The cursor indicates that an edge of a box is to be moved left (west)

- `text` - The I bar

- `wait` - An hour glass

- `help` - A question mark or balloon, ideal for use over help buttons

- `<url>` - The source of a cursor image file

NOTE − You should try to use only these values to add helpful information for users, and in places, they would expect to see that cursor. For example, using the crosshair when someone hovers over a link can confuse visitors.

Here is an example −

```
<html>
   <head>
   </head>

   <body>
      <p>Move the mouse over the words to see the cursor change:</p>

      <div style = "cursor:auto">Auto</div>
      <div style = "cursor:crosshair">Crosshair</div>
      <div style = "cursor:default">Default</div>

      <div style = "cursor:pointer">Pointer</div>
      <div style = "cursor:move">Move</div>
      <div style = "cursor:e-resize">e-resize</div>
      <div style = "cursor:ne-resize">ne-resize</div>
      <div style = "cursor:nw-resize">nw-resize</div>

      <div style = "cursor:n-resize">n-resize</div>
      <div style = "cursor:se-resize">se-resize</div>
      <div style = "cursor:sw-resize">sw-resize</div>
      <div style = "cursor:s-resize">s-resize</div>
      <div style = "cursor:w-resize">w-resize</div>

      <div style = "cursor:text">text</div>
      <div style = "cursor:wait">wait</div>
      <div style = "cursor:help">help</div>
   </body>
</html>
```


# References
https://www.tutorialspoint.com/css/css_cursors.htm
