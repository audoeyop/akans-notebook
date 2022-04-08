# HTML Comments

Comment is a piece of code which is ignored by any web browser. It is a good practice to add comments into your HTML code, especially in complex documents, to indicate sections of a document, and any other notes to anyone looking at the code. Comments help you and others understand your code and increases code readability.

HTML comments are placed in between <!-- ... --> tags. So, any content placed with-in <!-- ... --> tags will be treated as comment and will be completely ignored by the browser.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>  <!-- Document Header Starts -->
      <title>This is document title</title>
   </head> <!-- Document Header Ends -->

   <body>
      <p>Document content goes here.....</p>
   </body>

</html>
This will produce the following result without displaying the content given as a part of comments −


Valid vs Invalid Comments
Comments do not nest which means a comment cannot be put inside another comment. Second the double-dash sequence "--" may not appear inside a comment except as part of the closing --> tag. You must also make sure that there are no spaces in the start-of comment string.

Example
Here, the given comment is a valid comment and will be wiped off by the browser.

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Valid Comment Example</title>
   </head>

   <body>
      <!--   This is valid comment -->
      <p>Document content goes here.....</p>
   </body>

</html>
This will produce the following result −


But, following line is not a valid comment and will be displayed by the browser. This is because there is a space between the left angle bracket and the exclamation mark.

Live Demo
<!DOCTYPE html>
<html>

   <head>  
      <title>Invalid Comment Example</title>
   </head>

   <body>
      < !--   This is not a valid comment -->
      <p>Document content goes here.....</p>
   </body>

</html>
This will produce the following result −


Multiline Comments
So far we have seen single line comments, but HTML supports multi-line comments as well.

You can comment multiple lines by the special beginning tag <!-- and ending tag --> placed before the first line and end of the last line as shown in the given example below.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>  
      <title>Multiline Comments</title>
   </head>

   <body>
      <!--
         This is a multiline comment and it can
         span through as many as lines you like.
      -->

      <p>Document content goes here.....</p>
   </body>

</html>
This will produce the following result −


Conditional Comments
Conditional comments only work in Internet Explorer (IE) on Windows but they are ignored by other browsers. They are supported from Explorer 5 onwards, and you can use them to give conditional instructions to different versions of IE.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>  
      <title>Conditional Comments</title>

      <!--[if IE 6]>
         Special instructions for IE 6 here
      <![endif]-->
   </head>

   <body>
      <p>Document content goes here.....</p>
   </body>

</html>
You will come across a situation where you will need to apply a different style sheet based on different versions of Internet Explorer, in such situation conditional comments will be helpful.

Using Comment Tag
There are few browsers that support <comment> tag to comment a part of HTML code.

Note − The <comment> tag deprecated in HTML5. Do not use this element.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Using Comment Tag</title>
   </head>

   <body>
      <p>This is <comment>not</comment> Internet Explorer.</p>
   </body>

</html>
If you are using IE, then it will produce following result −


But if you are not using IE, then it will produce following result −


Commenting Script Code
Though you will learn JavaScript with HTML, in a separate tutorial, but here you must make a note that if you are using Java Script or VB Script in your HTML code then it is recommended to put that script code inside proper HTML comments so that old browsers can work properly.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Commenting Script Code</title>

      <script>
         <!--
            document.write("Hello World!")
         //-->
      </script>
   </head>

   <body>
      <p>Hello , World!</p>
   </body>

</html>
This will produce the following result −


Commenting Style Sheets
Though you will learn using style sheets with HTML in a separate tutorial, but here you must make a note that if you are using Cascading Style Sheet (CSS) in your HTML code then it is recommended to put that style sheet code inside proper HTML comments so that old browsers can work properly.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Commenting Style Sheets</title>

      <style>
         <!--
            .example {
               border:1px solid #4a7d49;
            }
         //-->
      </style>
   </head>

   <body>
      <div class = "example">Hello , World!</div>
   </body>

</html>
This will produce the following result −

# References
https://www.tutorialspoint.com/html/html_comments.htm
