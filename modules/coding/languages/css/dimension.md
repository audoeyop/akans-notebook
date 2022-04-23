CSS Dimension

You have seen the border that surrounds every box ie. element, the padding that can appear inside each box and the margin that can go around them. In this tutorial we will learn how we can change the dimensions of boxes.

We have the following properties that allow you to control the dimensions of a box.

The `height` property is used to set the height of a box.

The `width` property is used to set the width of a box.

The `line-height` property is used to set the height of a line of text.

The `max-height` property is used to set a maximum height that a box can be.

The `min-height` property is used to set the minimum height that a box can be.

The `max-width` property is used to set the maximum width that a box can be.

The `min-width` property is used to set the minimum width that a box can be.

## The Height and Width Properties

The height and width properties allow you to set the height and width for boxes. They can take values of a length, a percentage, or the keyword auto.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "width:400px; height:100px; border:1px solid red; padding:5px; margin:10px;">
         This paragraph is 400pixels wide and 100 pixels high
      </p>
   </body>
</html>
```

## The line-height Property
The line-height property allows you to increase the space between lines of text. The value of the line-height property can be a number, a length, or a percentage.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "width:400px; height:100px; border:1px solid red; padding:5px; margin:10px; line-height:30px;">
         This paragraph is 400pixels wide and 100 pixels high and here line height is 30pixels.
         This paragraph is 400 pixels wide and 100 pixels high and here line height is 30pixels.
      </p>
   </body>
</html>
```

## The max-height Property
The max-height property allows you to specify maximum height of a box. The value of the max-height property can be a number, a length, or a percentage.

*NOTE* − This property does not work in either Netscape 7 or IE 6.

Here is an example −
```
<html>
   <head>
   </head>  
   <body>
      <p style = "width:400px; max-height:10px; border:1px solid red; padding:5px; margin:10px;">
         This paragraph is 400px wide and max height is 10px
         This paragraph is 400px wide and max height is 10px
         This paragraph is 400px wide and max height is 10px
         This paragraph is 400px wide and max height is 10px
      </p>
      <br>
      <br>
      <br>
      <img alt = "logo" src = "/css/images/logo.png" width = "195" height = "84" />
   </body>
</html>
```
It will produce the following result −


## The min-height Property
The min-height property allows you to specify minimum height of a box. The value of the min-height property can be a number, a length, or a percentage.

NOTE − This property does not work in either Netscape 7 or IE 6.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "width:400px; min-height:200px; border:1px solid red; padding:5px; margin:10px;">
         This paragraph is 400px wide and min height is 200px
         This paragraph is 400px wide and min height is 200px
         This paragraph is 400px wide and min height is 200px
         This paragraph is 400px wide and min height is 200px
      </p>
      <img alt = "logo" src = "/css/images/logo.png" width = "95" height = "84" />
   </body>
</html>
```

## The max-width Property
The max-width property allows you to specify maximum width of a box. The value of the max-width property can be a number, a length, or a percentage.

*NOTE* − This property does not work in either Netscape 7 or IE 6.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "max-width:100px; height:200px; border:1px solid red; padding:5px; margin:10px;">
         This paragraph is 200px high and max width is 100px
         This paragraph is 200px high and max width is 100px
         This paragraph is 200px high and max width is 100px
         This paragraph is 200px high and max width is 100px
         This paragraph is 200px high and max width is 100px
      </p>
      <img alt = "logo" src = "/images/css.gif" width = "95" height = "84" />
   </body>
</html>
```

## The min-width Property
The min-width property allows you to specify minimum width of a box. The value of the min-width property can be a number, a length, or a percentage.

*NOTE* − This property does not work in either Netscape 7 or IE 6.

Here is an example −
```
<html>
   <head>
   </head>

   <body>
      <p style = "min-width:400px; height:100px; border:1px solid red; padding:5px; margin:10px;">
         This paragraph is 100px high and min width is 400px
         This paragraph is 100px high and min width is 400px
      </p>
      <img alt = "logo" src = "/css/images/css.gif" width = "95" height = "84" />
   </body>
</html>
```

# References
https://www.tutorialspoint.com/css/css_dimension.htm
