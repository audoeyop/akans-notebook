# HTML Text Links

A webpage can contain various links that take you directly to other pages and even specific parts of a given page. These links are known as hyperlinks.

Hyperlinks allow visitors to navigate between Web sites by clicking on words, phrases, and images. Thus you can create hyperlinks using text or images available on a webpage.

Note − I recommend you to go through a short tutorial on Understanding URL

Linking Documents
A link is specified using HTML tag <a>. This tag is called anchor tag and anything between the opening <a> tag and the closing </a> tag becomes part of the link and a user can click that part to reach to the linked document. Following is the simple syntax to use <a> tag.

<a href = "Document URL" ... attributes-list>Link Text</a>
Example
Let's try following example which links http://www.tutorialspoint.com at your page −

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Hyperlink Example</title>
   </head>

   <body>
      <p>Click following link</p>
      <a href = "https://www.tutorialspoint.com" target = "_self">Tutorials Point</a>
   </body>

</html>
This will produce the following result, where you can click on the link generated to reach to the home page of Tutorials Point (in this example).


The target Attribute
We have used target attribute in our previous example. This attribute is used to specify the location where linked document is opened. Following are the possible options −

Sr.No	Option & Description
1
_blank

Opens the linked document in a new window or tab.

2
_self

Opens the linked document in the same frame.

3
_parent

Opens the linked document in the parent frame.

4
_top

Opens the linked document in the full body of the window.

5
targetframe

Opens the linked document in a named targetframe.

Example
Try following example to understand basic difference in few options given for target attribute.

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Hyperlink Example</title>
      <base href = "https://www.tutorialspoint.com/">
   </head>

   <body>
      <p>Click any of the following links</p>
      <a href = "/html/index.htm" target = "_blank">Opens in New</a> |
      <a href = "/html/index.htm" target = "_self">Opens in Self</a> |
      <a href = "/html/index.htm" target = "_parent">Opens in Parent</a> |
      <a href = "/html/index.htm" target = "_top">Opens in Body</a>
   </body>

</html>
This will produce the following result, where you can click on different links to understand the difference between various options given for target attribute.


Use of Base Path
When you link HTML documents related to the same website, it is not required to give a complete URL for every link. You can get rid of it if you use <base> tag in your HTML document header. This tag is used to give a base path for all the links. So your browser will concatenate given relative path to this base path and will make a complete URL.

Example
Following example makes use of <base> tag to specify base URL and later we can use relative path to all the links instead of giving complete URL for every link.

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Hyperlink Example</title>
      <base href = "https://www.tutorialspoint.com/">
   </head>

   <body>
      <p>Click following link</p>
      <a href = "/html/index.htm" target = "_blank">HTML Tutorial</a>
   </body>

</html>
This will produce the following result, where you can click on the link generated HTML Tutorial to reach to the HTML tutorial.

Now given URL <a href = "/html/index.htm" is being considered as <ahref = "http://www.tutorialspoint.com/html/index.htm"


Linking to a Page Section
You can create a link to a particular section of a given webpage by using name attribute. This is a two-step process.

Note − The name attribute deprecated in HTML5. Do not use this attribute. Use id and title attribute instead.

First create a link to the place where you want to reach with-in a webpage and name it using <a...> tag as follows −

<h1>HTML Text Links <a name = "top"></a></h1>
Second step is to create a hyperlink to link the document and place where you want to reach −

<a href = "/html/html_text_links.htm#top">Go to the Top</a>
This will produce following link, where you can click on the link generated Go to the Top to reach to the top of the HTML Text Link tutorial.

Go to the Top
Setting Link Colors
You can set colors of your links, active links and visited links using link, alink and vlink attributes of <body> tag.

Example
Save the following in test.htm and open it in any web browser to see how link, alink and vlink attributes work.

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Hyperlink Example</title>
      <base href = "https://www.tutorialspoint.com/">
   </head>

   <body alink = "#54A250" link = "#040404" vlink = "#F40633">
      <p>Click following link</p>
      <a href = "/html/index.htm" target = "_blank" >HTML Tutorial</a>
   </body>

</html>
This will produce the following result. Just check color of the link before clicking on it, next check its color when you activate it and when the link has been visited.


Download Links
You can create text link to make your PDF, or DOC or ZIP files downloadable. This is very simple; you just need to give complete URL of the downloadable file as follows −

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Hyperlink Example</title>
   </head>

   <body>
      <a href = "https://www.tutorialspoint.com/page.pdf">Download PDF File</a>
   </body>

</html>
This will produce following link and will be used to download a file.


# References
https://www.tutorialspoint.com/html/html_text_links.htm
