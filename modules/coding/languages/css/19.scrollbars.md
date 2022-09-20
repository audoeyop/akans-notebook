# CSS Scrollbars

There may be a case when an element's content might be larger than the amount of space allocated to it. For example, given width and height properties do not allow enough room to accommodate the content of the element.

CSS provides a property called overflow which tells the browser what to do if the box's contents is larger than the box itself. This property can take one of the following values - −

- `visible` - Allows the content to overflow the borders of its containing element.

- `hidden` - The content of the nested element is simply cut off at the border of the containing element and no scrollbars is visible.

- `scroll` - The size of the containing element does not change, but the scrollbars are added to allow the user to scroll to see the content.

- `auto` - The purpose is the same as scroll, but the scrollbar will be shown only if the content does overflow.

Here is an example −
```
<html>
   <head>
      <style type = "text/css">
         .scroll {
            display:block;
            border: 1px solid red;
            padding:5px;
            margin-top:5px;
            width:300px;
            height:50px;
            overflow:scroll;
         }
         .auto {
            display:block;
            border: 1px solid red;
            padding:5px;
            margin-top:5px;
            width:300px;
            height:50px;
            overflow:auto;
         }
      </style>
   </head>

   <body>
      <p>Example of scroll value:</p>
      <div class = "scroll">
         I am going to keep lot of content here just to show you how
         scrollbars works if there is an overflow in an element box.
         This provides your horizontal as well as vertical scrollbars.
      </div>
      <br />

      <p>Example of auto value:</p>

      <div class = "auto">
         I am going to keep lot of content here just to show you how
         scrollbars works if there is an overflow in an element box.
         This provides your horizontal as well as vertical scrollbars.
      </div>
   </body>
</html>
```

# References
https://www.tutorialspoint.com/css/css_scrollbars.htm
