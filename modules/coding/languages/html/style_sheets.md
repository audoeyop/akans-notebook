HTML Style Sheets

Cascading Style Sheets (CSS) describe how documents are presented on screens, in print, or perhaps how they are pronounced. W3C has actively promoted the use of style sheets on the Web since the consortium was founded in 1994.

Cascading Style Sheets (CSS) provide easy and effective alternatives to specify various attributes for the HTML tags. Using CSS, you can specify a number of style properties for a given HTML element. Each property has a name and a value, separated by a colon (:). Each property declaration is separated by a semi-colon (;).

Example
First let's consider an example of HTML document which makes use of <font> tag and associated attributes to specify text color and font size −

Note − The font tag deprecated and it is supposed to be removed in a future version of HTML. So they should not be used rather, it's suggested to use CSS styles to manipulate your fonts. But still for learning purpose, this chapter will work with an example using the font tag.

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>HTML CSS</title>
   </head>

   <body>
      <p><font color = "green" size = "5">Hello, World!</font></p>
   </body>

</html>
We can re-write above example with the help of Style Sheet as follows −

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>HTML CSS</title>
   </head>

   <body>
      <p style = "color:green; font-size:24px;" >Hello, World!</p>
   </body>

</html>
This will produce the following result −


You can use CSS in three ways in your HTML document −

External Style Sheet − Define style sheet rules in a separate .css file and then include that file in your HTML document using HTML <link> tag.

Internal Style Sheet − Define style sheet rules in header section of the HTML document using <style> tag.

Inline Style Sheet − Define style sheet rules directly along-with the HTML elements using style attribute.

Let's see all the three cases one by one with the help of suitable examples.

External Style Sheet
If you need to use your style sheet to various pages, then its always recommended to define a common style sheet in a separate file. A cascading style sheet file will have extension as .css and it will be included in HTML files using <link> tag.

Example
Consider we define a style sheet file style.css which has following rules −

.red {
   color: red;
}
.thick {
   font-size:20px;
}
.green {
   color:green;
}
Here we defined three CSS rules which will be applicable to three different classes defined for the HTML tags. I suggest you should not bother about how these rules are being defined because you will learn them while studying CSS. Now let's make use of the above external CSS file in our following HTML document −

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>HTML External CSS</title>
      <link rel = "stylesheet" type = "text/css" href = "/html/style.css">
   </head>

   <body>
      <p class = "red">This is red</p>
      <p class = "thick">This is thick</p>
      <p class = "green">This is green</p>
      <p class = "thick green">This is thick and green</p>
   </body>

</html>
This will produce the following result −


Internal Style Sheet
If you want to apply Style Sheet rules to a single document only, then you can include those rules in header section of the HTML document using <style> tag.

Rules defined in internal style sheet overrides the rules defined in an external CSS file.

Example
Let's re-write above example once again, but here we will write style sheet rules in the same HTML document using <style> tag −

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Internal CSS</title>

      <style type = "text/css">
         .red {
            color: red;
         }
         .thick{
            font-size:20px;
         }
         .green {
            color:green;
         }
      </style>
   </head>

   <body>
      <p class = "red">This is red</p>  
      <p class = "thick">This is thick</p>  
      <p class = "green">This is green</p>  
      <p class = "thick green">This is thick and green</p>
   </body>

</html>
This will produce the following result −


Inline Style Sheet
You can apply style sheet rules directly to any HTML element using style attribute of the relevant tag. This should be done only when you are interested to make a particular change in any HTML element only.

Rules defined inline with the element overrides the rules defined in an external CSS file as well as the rules defined in <style> element.

Example
Let's re-write above example once again, but here we will write style sheet rules along with the HTML elements using style attribute of those elements.

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Inline CSS</title>
   </head>

   <body>
      <p style = "color:red;">This is red</p>  
      <p style = "font-size:20px;">This is thick</p>  
      <p style = "color:green;">This is green</p>  
      <p style = "color:green;font-size:20px;">This is thick and green</p>
   </body>

</html>
This will produce the following result −

# References
https://www.tutorialspoint.com/html/html_style_sheet.htm
