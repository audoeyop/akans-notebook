# HTML Formatting

If you use a word processor, you must be familiar with the ability to make text bold, italicized, or underlined; these are just three of the ten options available to indicate how text can appear in HTML and XHTML.

Bold Text
Anything that appears within <b>...</b> element, is displayed in bold as shown below −

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Bold Text Example</title>
   </head>

   <body>
      <p>The following word uses a <b>bold</b> typeface.</p>
   </body>

</html>
This will produce the following result −


Italic Text
Anything that appears within <i>...</i> element is displayed in italicized as shown below −

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Italic Text Example</title>
   </head>

   <body>
      <p>The following word uses an <i>italicized</i> typeface.</p>
   </body>

</html>
This will produce the following result −


Underlined Text
Anything that appears within <u>...</u> element, is displayed with underline as shown below −

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Underlined Text Example</title>
   </head>

   <body>
      <p>The following word uses an <u>underlined</u> typeface.</p>
   </body>

</html>
This will produce the following result −


Strike Text
Anything that appears within <strike>...</strike> element is displayed with strikethrough, which is a thin line through the text as shown below −

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Strike Text Example</title>
   </head>

   <body>
      <p>The following word uses a <strike>strikethrough</strike> typeface.</p>
   </body>

</html>
This will produce the following result −


Monospaced Font
The content of a <tt>...</tt> element is written in monospaced font. Most of the fonts are known as variable-width fonts because different letters are of different widths (for example, the letter 'm' is wider than the letter 'i'). In a monospaced font, however, each letter has the same width.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Monospaced Font Example</title>
   </head>

   <body>
      <p>The following word uses a <tt>monospaced</tt> typeface.</p>
   </body>

</html>
This will produce the following result −


Superscript Text
The content of a <sup>...</sup> element is written in superscript; the font size used is the same size as the characters surrounding it but is displayed half a character's height above the other characters.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Superscript Text Example</title>
   </head>

   <body>
      <p>The following word uses a <sup>superscript</sup> typeface.</p>
   </body>

</html>
This will produce the following result −


Subscript Text
The content of a <sub>...</sub> element is written in subscript; the font size used is the same as the characters surrounding it, but is displayed half a character's height beneath the other characters.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Subscript Text Example</title>
   </head>

   <body>
      <p>The following word uses a <sub>subscript</sub> typeface.</p>
   </body>

</html>
This will produce the following result −


Inserted Text
Anything that appears within <ins>...</ins> element is displayed as inserted text.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Inserted Text Example</title>
   </head>

   <body>
      <p>I want to drink <del>cola</del> <ins>wine</ins></p>
   </body>

</html>
This will produce the following result −


Deleted Text
Anything that appears within <del>...</del> element, is displayed as deleted text.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Deleted Text Example</title>
   </head>

   <body>
      <p>I want to drink <del>cola</del> <ins>wine</ins></p>
   </body>

</html>
This will produce the following result −


Larger Text
The content of the <big>...</big> element is displayed one font size larger than the rest of the text surrounding it as shown below −

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Larger Text Example</title>
   </head>

   <body>
      <p>The following word uses a <big>big</big> typeface.</p>
   </body>

</html>
This will produce the following result −


Smaller Text
The content of the <small>...</small> element is displayed one font size smaller than the rest of the text surrounding it as shown below −

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Smaller Text Example</title>
   </head>

   <body>
      <p>The following word uses a <small>small</small> typeface.</p>
   </body>

</html>
This will produce the following result −


Grouping Content
The <div> and <span> elements allow you to group together several elements to create sections or subsections of a page.

For example, you might want to put all of the footnotes on a page within a <div> element to indicate that all of the elements within that <div> element relate to the footnotes. You might then attach a style to this <div> element so that they appear using a special set of style rules.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Div Tag Example</title>
   </head>

   <body>
      <div id = "menu" align = "middle" >
         <a href = "/index.htm">HOME</a> |
         <a href = "/about/contact_us.htm">CONTACT</a> |
         <a href = "/about/index.htm">ABOUT</a>
      </div>

      <div id = "content" align = "left" >
         <h5>Content Articles</h5>
         <p>Actual content goes here.....</p>
      </div>
   </body>

</html>
This will produce the following result −


The <span> element, on the other hand, can be used to group inline elements only. So, if you have a part of a sentence or paragraph which you want to group together, you could use the <span> element as follows.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Span Tag Example</title>
   </head>

   <body>
      <p>This is the example of <span style = "color:green">span tag</span>
         and the <span style = "color:red">div tag</span> alongwith CSS</p>
   </body>

</html>

# References
https://www.tutorialspoint.com/html/html_formatting.htm
