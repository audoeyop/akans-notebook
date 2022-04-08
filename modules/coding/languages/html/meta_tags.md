# HTML Meta Tags

HTML lets you specify metadata - additional important information about a document in a variety of ways. The META elements can be used to include name/value pairs describing properties of the HTML document, such as author, expiry date, a list of keywords, document author etc.

The <meta> tag is used to provide such additional information. This tag is an empty element and so does not have a closing tag but it carries information within its attributes.

You can include one or more meta tags in your document based on what information you want to keep in your document but in general, meta tags do not impact physical appearance of the document so from appearance point of view, it does not matter if you include them or not.

Adding Meta Tags to Your Documents
You can add metadata to your web pages by placing <meta> tags inside the header of the document which is represented by <head> and </head> tags. A meta tag can have following attributes in addition to core attributes −

Sr.No	Attribute & Description
1
Name

Name for the property. Can be anything. Examples include, keywords, description, author, revised, generator etc.

2
content

Specifies the property's value.

3
scheme

Specifies a scheme to interpret the property's value (as declared in the content attribute).

4
http-equiv

Used for http response message headers. For example, http-equiv can be used to refresh the page or to set a cookie. Values include content-type, expires, refresh and set-cookie.

Specifying Keywords
You can use <meta> tag to specify important keywords related to the document and later these keywords are used by the search engines while indexing your webpage for searching purpose.

Example
Following is an example, where we are adding HTML, Meta Tags, Metadata as important keywords about the document.

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Meta Tags Example</title>
      <meta name = "keywords" content = "HTML, Meta Tags, Metadata" />
   </head>

   <body>
      <p>Hello HTML5!</p>
   </body>

</html>
This will produce the following result −


Document Description
You can use <meta> tag to give a short description about the document. This again can be used by various search engines while indexing your webpage for searching purpose.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Meta Tags Example</title>
      <meta name = "keywords" content = "HTML, Meta Tags, Metadata" />
      <meta name = "description" content = "Learning about Meta Tags." />
   </head>

   <body>
      <p>Hello HTML5!</p>
   </body>

</html>
Document Revision Date
You can use <meta> tag to give information about when last time the document was updated. This information can be used by various web browsers while refreshing your webpage.

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Meta Tags Example</title>
      <meta name = "keywords" content = "HTML, Meta Tags, Metadata" />
      <meta name = "description" content = "Learning about Meta Tags." />
      <meta name = "revised" content = "Tutorialspoint, 3/7/2014" />
   </head>

   <body>
      <p>Hello HTML5!</p>
   </body>

</html>
Document Refreshing
A <meta> tag can be used to specify a duration after which your web page will keep refreshing automatically.

Example
If you want your page keep refreshing after every 5 seconds then use the following syntax.

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Meta Tags Example</title>
      <meta name = "keywords" content = "HTML, Meta Tags, Metadata" />
      <meta name = "description" content = "Learning about Meta Tags." />
      <meta name = "revised" content = "Tutorialspoint, 3/7/2014" />
      <meta http-equiv = "refresh" content = "5" />
   </head>

   <body>
      <p>Hello HTML5!</p>
   </body>

</html>
Page Redirection
You can use <meta> tag to redirect your page to any other webpage. You can also specify a duration if you want to redirect the page after a certain number of seconds.

Example
Following is an example of redirecting current page to another page after 5 seconds. If you want to redirect page immediately then do not specify content attribute.

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Meta Tags Example</title>
      <meta name = "keywords" content = "HTML, Meta Tags, Metadata" />
      <meta name = "description" content = "Learning about Meta Tags." />
      <meta name = "revised" content = "Tutorialspoint, 3/7/2014" />
      <meta http-equiv = "refresh" content = "5; url = http://www.tutorialspoint.com" />
   </head>

   <body>
      <p>Hello HTML5!</p>
   </body>

</html>
Setting Cookies
Cookies are data, stored in small text files on your computer and it is exchanged between web browser and web server to keep track of various information based on your web application need.

You can use <meta> tag to store cookies on client side and later this information can be used by the Web Server to track a site visitor.

Example
Following is an example of redirecting current page to another page after 5 seconds. If you want to redirect page immediately then do not specify content attribute.

Live Demo
<!DOCTYPE html>
<html>
   <head>
      <title>Meta Tags Example</title>
      <meta http-equiv = "cookie" content = "userid = xyz; expires = Wednesday, 08-Aug-15 23:59:59 GMT;" />

   </head>
   <body>
      <p>Hello HTML5!</p>
   </body>
</html>
If you do not include the expiration date and time, the cookie is considered a session cookie and will be deleted when the user exits the browser.

Note − You can check PHP and Cookies tutorial for a complete detail on Cookies.

Setting Author Name
You can set an author name in a web page using meta tag. See an example below −

Example
Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Meta Tags Example</title>
      <meta name = "keywords" content = "HTML, Meta Tags, Metadata" />
      <meta name = "description" content = "Learning about Meta Tags." />
      <meta name = "author" content = "Mahnaz Mohtashim" />
   </head>

   <body>
      <p>Hello HTML5!</p>
   </body>

</html>
Specify Character Set
You can use <meta> tag to specify character set used within the webpage.

Example
By default, Web servers and Web browsers use ISO-8859-1 (Latin1) encoding to process Web pages. Following is an example to set UTF-8 encoding −

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Meta Tags Example</title>
      <meta name = "keywords" content = "HTML, Meta Tags, Metadata" />
      <meta name = "description" content = "Learning about Meta Tags." />
      <meta name = "author" content = "Mahnaz Mohtashim" />
      <meta http-equiv = "Content-Type" content = "text/html; charset = UTF-8" />
   </head>

   <body>
      <p>Hello HTML5!</p>
   </body>

</html>
To serve the static page with traditional Chinese characters, the webpage must contain a <meta> tag to set Big5 encoding −

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>Meta Tags Example</title>
      <meta name = "keywords" content = "HTML, Meta Tags, Metadata" />
      <meta name = "description" content = "Learning about Meta Tags." />
      <meta name = "author" content = "Mahnaz Mohtashim" />
      <meta http-equiv = "Content-Type" content = "text/html; charset = Big5" />
   </head>

   <body>
      <p>Hello HTML5!</p>
   </body>

</html>

# References
https://www.tutorialspoint.com/html/html_meta_tags.htm
