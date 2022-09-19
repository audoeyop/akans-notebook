# HTML Backgrounds

By default, your webpage background is white in color. You may not like it, but no worries. HTML provides you following two good ways to decorate your webpage background.

## HTML Background with Colors
HTML Background with Images
Now let's see both the approaches one by one using appropriate examples.

### Html Background with Colors
The bgcolor attribute is used to control the background of an HTML element, specifically page body and table backgrounds.

Note − The bgcolor attribute deprecated in HTML5. Do not use this attribute.

Following is the syntax to use bgcolor attribute with any HTML tag.
```
<tagname bgcolor = "color_value"...>
```
This color_value can be given in any of the following formats −
```
<!-- Format 1 - Use color name -->
<table bgcolor = "lime" >

<!-- Format 2 - Use hex value -->
<table bgcolor = "#f1f1f1" >

<!-- Format 3 - Use color value in RGB terms -->
<table bgcolor = "rgb(0,0,120)" >
```

Here are the examples to set background of an HTML tag −

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Background Colors</title>
   </head>

   <body>
      <!-- Format 1 - Use color name -->
      <table bgcolor = "yellow" width = "100%">
         <tr>
            <td>
               This background is yellow
            </td>
         </tr>
      </table>

      <!-- Format 2 - Use hex value -->
      <table bgcolor = "#6666FF" width = "100%">
         <tr>
            <td>
               This background is sky blue
            </td>
         </tr>
      </table>

      <!-- Format 3 - Use color value in RGB terms -->
      <table bgcolor = "rgb(255,0,255)" width = "100%">
         <tr>
            <td>
               This background is green
            </td>
         </tr>
      </table>
   </body>

</html>
```

## Html Background with Images
The background attribute can also be used to control the background of an HTML element, specifically page body and table backgrounds. You can specify an image to set background of your HTML page or table.

Note − The background attribute deprecated in HTML5. Do not use this attribute.

Following is the syntax to use background attribute with any HTML tag.

Note − The background attribute is deprecated and it is recommended to use Style Sheet for background setting.
```
<tagname background = "Image URL"...>
```
The most frequently used image formats are JPEG, GIF and PNG images.

**Example**
Here are the examples to set background images of a table.
```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Background Images</title>
   </head>

   <body>
      <!-- Set table background -->
      <table background = "/images/html.gif" width = "100%" height = "100">
         <tr><td>
            This background is filled up with HTML image.
         </td></tr>
      </table>
   </body>

</html>
```

## Patterned & Transparent Backgrounds
You might have seen many pattern or transparent backgrounds on various websites. This simply can be achieved by using patterned image or transparent image in the background.

It is suggested that while creating patterns or transparent GIF or PNG images, use the smallest dimensions possible even as small as 1x1 to avoid slow loading.

Here are the examples to set background pattern of a table −

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Background Images</title>
   </head>

   <body>
      <!-- Set a table background using pattern -->
      <table background = "/images/pattern1.gif" width = "100%" height = "100">
         <tr>
            <td>
               This background is filled up with a pattern image.
            </td>
         </tr>
      </table>

      <!-- Another example on table background using pattern -->
      <table background = "/images/pattern2.gif" width = "100%" height = "100">
         <tr>
            <td>
               This background is filled up with a pattern image.
            </td>
         </tr>
      </table>
   </body>

</html>
```

# References
https://www.tutorialspoint.com/html/html_backgrounds.htm
