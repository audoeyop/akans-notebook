# HTML Header

We have learnt that a typical HTML document will have following structure −

**Document declaration tag**
```
<html>

   <head>
      Document header related tags
   </head>

   <body>
      Document body related tags
   </body>

</html>
```
This chapter will give a little more detail about header part which is represented by HTML \<head> tag. The \<head> tag is a container of various important tags like \<title>, \<meta>, \<link>, \<base>, \<style>, \<script>, and \<noscript> tags.

## The HTML \<title> Tag
The HTML \<title> tag is used for specifying the title of the HTML document. Following is an example to give a title to an HTML document −

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Title Tag Example</title>
   </head>

   <body>
      <p>Hello, World!</p>
   </body>

</html>
```


## The HTML \<meta> Tag
The HTML \<meta> tag is used to provide metadata about the HTML document which includes information about page expiry, page author, list of keywords, page description etc.

Following are few of the important usages of \<meta> tag inside an HTML document −

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Meta Tag Example</title>

      <!-- Provide list of keywords -->
      <meta name = "keywords" content = "C, C++, Java, PHP, Perl, Python">

      <!-- Provide description of the page -->
      <meta name = "description" content = "Simply Easy Learning by Tutorials Point">

      <!-- Author information -->
      <meta name = "author" content = "Tutorials Point">

      <!-- Page content type -->
      <meta http-equiv = "content-type" content = "text/html; charset = UTF-8">

      <!-- Page refreshing delay -->
      <meta http-equiv = "refresh" content = "30">

      <!-- Page expiry -->
      <meta http-equiv = "expires" content = "Wed, 21 June 2006 14:25:27 GMT">

      <!-- Tag to tell robots not to index the content of a page -->
      <meta name = "robots" content = "noindex, nofollow">

   </head>

   <body>
      <p>Hello, World!</p>
   </body>

</html>
```


## The HTML \<base> Tag
The HTML \<base> tag is used for specifying the base URL for all relative URLs in a page, which means all the other URLs will be concatenated into base URL while locating for the given item.

For example, all the given pages and images will be searched after prefixing the given URLs with base URL http://www.tutorialspoint.com/ directory −

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Base Tag Example</title>
      <base href = "https://www.tutorialspoint.com/" />
   </head>

   <body>
      <img src = "/images/logo.png" alt = "Logo Image"/>
      <a href = "/html/index.htm" title = "HTML Tutorial"/>HTML Tutorial</a>
   </body>

</html>
```


But if you change base URL to something else, for example, if base URL is http://www.tutorialspoint.com/home then image and other given links will become like http://www.tutorialspoint.com/home/images/logo.png and http://www.tutorialspoint.com/html/index.htm

## The HTML \<link> Tag
The HTML \<link> tag is used to specify relationships between the current document and external resource. Following is an example to link an external style sheet file available in css sub-directory within web root −

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML link Tag Example</title>
      <base href = "https://www.tutorialspoint.com/" />
      <link rel = "stylesheet" type = "text/css" href = "/css/style.css">
   </head>

   <body>
      <p>Hello, World!</p>
   </body>

</html>
```


The HTML \<style> Tag
The HTML \<style> tag is used to specify style sheet for the current HTML document. Following is an example to define few style sheet rules inside \<style> tag −

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML style Tag Example</title>
      <base href = "https://www.tutorialspoint.com/" />

      <style type = "text/css">
         .myclass {
            background-color: #aaa;
            padding: 10px;
         }
      </style>
   </head>

   <body>
      <p class = "myclass">Hello, World!</p>
   </body>

</html>
```


Note − To learn about how Cascading Style Sheet works, kindly check a separate tutorial available at css

## The HTML \<script> Tag
The HTML \<script> tag is used to include either external script file or to define internal script for the HTML document. Following is an example where we are using JavaScript to define a simple JavaScript function −

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML script Tag Example</title>
      <base href = "http://www.tutorialspoint.com/" />

      <script type = "text/JavaScript">
         function Hello() {
            alert("Hello, World");
         }
      </script>
   </head>

   <body>
      <input type = "button" onclick = "Hello();" name = "ok" value = "OK"  />
   </body>

</html>
```

Note − To learn about how JavaScript works, kindly check a separate tutorial available at javascript

# References
https://www.tutorialspoint.com/html/html_header.htm
