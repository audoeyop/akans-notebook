# CSS Images

Images play an important role in any webpage. Though it is not recommended to include a lot of images, but it is still important to use good images wherever required.

CSS plays a good role to control image display. You can set the following image properties using CSS.

- The `border` property is used to set the width of an image border.

- The `height` property is used to set the height of an image.

- The `width` property is used to set the width of an image.

- The `-moz-opacity` property is used to set the opacity of an image.

## The Image Border Property
The border property of an image is used to set the width of an image border. This property can have a value in length or in %.

A width of zero pixels means no border.

Here is the example −

```
<html>
   <head>
   </head>

   <body>
      <img style = "border:0px;" src = "/css/images/logo.png" />
      <br />
      <img style = "border:3px dashed red;" src = "/css/images/logo.png" />
   </body>
</html>
```

## The Image Height Property
The height property of an image is used to set the height of an image. This property can have a value in length or in %. While giving value in %, it applies it in respect of the box in which an image is available.
```
<html>
   <head>
   </head>

   <body>
      <img style = "border:1px solid red; height:100px;" src = "/css/images/logo.png" />
      <br />
      <img style = "border:1px solid red; height:50%;" src = "/css/images/logo.png" />
   </body>
</html>
```

## The Image Width Property
The width property of an image is used to set the width of an image. This property can have a value in length or in %. While giving value in %, it applies it in respect of the box in which an image is available.
```
<html>
   <head>
   </head>

   <body>
      <img style = "border:1px solid red; width:150px;" src = "/css/images/logo.png" />
      <br />
      <img style = "border:1px solid red; width:100%;" src = "/css/images/logo.png" />
   </body>
</html>
```

## The -moz-opacity Property
The -moz-opacity property of an image is used to set the opacity of an image. This property is used to create a transparent image in Mozilla. IE uses `filter:alpha(opacity=x)` to create transparent images.

In Mozilla (-moz-opacity:x) x can be a value from 0.0 - 1.0. A lower value makes the element more transparent (The same things goes for the CSS3-valid syntax opacity:x).

In IE (filter:alpha(opacity=x)) x can be a value from 0 - 100. A lower value makes the element more transparent.

```
<html>
   <head>
   </head>

   <body>
      <img style = "border:1px solid red; -moz-opacity:0.4; filter:alpha(opacity=40);" src = "/css/images/logo.png" />
   </body>
</html>
```

# References
https://www.tutorialspoint.com/css/css_images.htm
