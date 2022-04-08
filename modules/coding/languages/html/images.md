# HTML Images

Images are very important to beautify as well as to depict many complex concepts in simple way on your web page. This tutorial will take you through simple steps to use images in your web pages.

Insert Image
You can insert any image in your web page by using <img> tag. Following is the simple syntax to use this tag.

<img src = "Image URL" ... attributes-list/>
The <img> tag is an empty tag, which means that, it can contain only list of attributes and it has no closing tag.

Example
To try following example, let's keep our HTML file test.htm and image file test.png in the same directory −

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Using Image in Webpage</title>
   </head>

   <body>
      <p>Simple Image Insert</p>
      <img src = "/html/images/test.png" alt = "Test Image" />
   </body>

</html>
This will produce the following result −


You can use PNG, JPEG or GIF image file based on your comfort but make sure you specify correct image file name in src attribute. Image name is always case sensitive.

The alt attribute is a mandatory attribute which specifies an alternate text for an image, if the image cannot be displayed.

Set Image Location
Usually we keep all the images in a separate directory. So let's keep HTML file test.htm in our home directory and create a subdirectory images inside the home directory where we will keep our image test.png.

Example
Assuming our image location is "image/test.png", try the following example −

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Using Image in Webpage</title>
   </head>

   <body>
      <p>Simple Image Insert</p>
      <img src = "/html/images/test.png" alt = "Test Image" />
   </body>

</html>
This will produce the following result −


Set Image Width/Height
You can set image width and height based on your requirement using width and height attributes. You can specify width and height of the image in terms of either pixels or percentage of its actual size.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Set Image Width and Height</title>
   </head>

   <body>
      <p>Setting image width and height</p>
      <img src = "/html/images/test.png" alt = "Test Image" width = "150" height = "100"/>
   </body>

</html>
This will produce the following result −


Set Image Border
By default, image will have a border around it, you can specify border thickness in terms of pixels using border attribute. A thickness of 0 means, no border around the picture.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Set Image Border</title>
   </head>

   <body>
      <p>Setting image Border</p>
      <img src = "/html/images/test.png" alt = "Test Image" border = "3"/>
   </body>

</html>
This will produce the following result −


Set Image Alignment
By default, image will align at the left side of the page, but you can use align attribute to set it in the center or right.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Set Image Alignment</title>
   </head>

   <body>
      <p>Setting image Alignment</p>
      <img src = "/html/images/test.png" alt = "Test Image" border = "3" align = "right"/>
   </body>

</html>
This will produce the following result −

# References
https://www.tutorialspoint.com/html/html_images.htm
