# HTML Fonts

Fonts play a very important role in making a website more user friendly and increasing content readability. Font face and color depends entirely on the computer and browser that is being used to view your page but you can use HTML <font> tag to add style, size, and color to the text on your website. You can use a <basefont> tag to set all of your text to the same size, face, and color.

The font tag is having three attributes called size, color, and face to customize your fonts. To change any of the font attributes at any time within your webpage, simply use the <font> tag. The text that follows will remain changed until you close with the </font> tag. You can change one or all of the font attributes within one <font> tag.

Note −The font and basefont tags are deprecated and it is supposed to be removed in a future version of HTML. So they should not be used rather, it's suggested to use CSS styles to manipulate your fonts. But still for learning purpose, this chapter will explain font and basefont tags in detail.

Set Font Size
You can set content font size using size attribute. The range of accepted values is from 1(smallest) to 7(largest). The default size of a font is 3.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Setting Font Size</title>
   </head>

   <body>
      <font size = "1">Font size = "1"</font><br />
      <font size = "2">Font size = "2"</font><br />
      <font size = "3">Font size = "3"</font><br />
      <font size = "4">Font size = "4"</font><br />
      <font size = "5">Font size = "5"</font><br />
      <font size = "6">Font size = "6"</font><br />
      <font size = "7">Font size = "7"</font>
   </body>

</html>
This will produce the following result −


Relative Font Size
You can specify how many sizes larger or how many sizes smaller than the preset font size should be. You can specify it like <font size = "+n"> or <font size = "−n">

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Relative Font Size</title>
   </head>

   <body>
      <font size = "-1">Font size = "-1"</font><br />
      <font size = "+1">Font size = "+1"</font><br />
      <font size = "+2">Font size = "+2"</font><br />
      <font size = "+3">Font size = "+3"</font><br />
      <font size = "+4">Font size = "+4"</font>
   </body>

</html>
This will produce the following result −


Setting Font Face
You can set font face using face attribute but be aware that if the user viewing the page doesn't have the font installed, they will not be able to see it. Instead user will see the default font face applicable to the user's computer.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Font Face</title>
   </head>

   <body>
      <font face = "Times New Roman" size = "5">Times New Roman</font><br />
      <font face = "Verdana" size = "5">Verdana</font><br />
      <font face = "Comic sans MS" size =" 5">Comic Sans MS</font><br />
      <font face = "WildWest" size = "5">WildWest</font><br />
      <font face = "Bedrock" size = "5">Bedrock</font><br />
   </body>

</html>
This will produce the following result −


Specify alternate font faces
A visitor will only be able to see your font if they have that font installed on their computer. So, it is possible to specify two or more font face alternatives by listing the font face names, separated by a comma.

<font face = "arial,helvetica">
<font face = "Lucida Calligraphy,Comic Sans MS,Lucida Console">
When your page is loaded, their browser will display the first font face available. If none of the given fonts are installed, then it will display the default font face Times New Roman.

Note − Check a complete list of HTML Standard Fonts.

Setting Font Color
You can set any font color you like using color attribute. You can specify the color that you want by either the color name or hexadecimal code for that color.

Note − You can check a complete list of HTML Color Name with Codes.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Setting Font Color</title>
   </head>

   <body>
      <font color = "#FF00FF">This text is in pink</font><br />
      <font color = "red">This text is red</font>
   </body>

</html>
This will produce the following result −


The <basefont> Element
The <basefont> element is supposed to set a default font size, color, and typeface for any parts of the document that are not otherwise contained within a <font> tag. You can use the <font> elements to override the <basefont> settings.

The <basefont> tag also takes color, size and face attributes and it will support relative font setting by giving size a value of +1 for a size larger or −2 for two sizes smaller.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Setting Basefont Color</title>
   </head>

   <body>
      <basefont face = "arial, verdana, sans-serif" size = "2" color = "#ff0000">
      <p>This is the page's default font.</p>
      <h2>Example of the &lt;basefont&gt; Element</h2>

      <p><font size = "+2" color = "darkgray">
            This is darkgray text with two sizes larger
         </font>
      </p>

      <p><font face = "courier" size = "-1" color = "#000000">
            It is a courier font, a size smaller and black in color.
         </font>
      </p>
   </body>

</html>
This will produce the following result −

# References
https://www.tutorialspoint.com/html/html_fonts.htm
