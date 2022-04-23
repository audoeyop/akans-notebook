# jQuery Introduction

jQuery is a fast and concise JavaScript Library created by John Resig in 2006 with a nice motto: Write less, do more. jQuery simplifies HTML document traversing, event handling, animating, and Ajax interactions for rapid web development.

## jQuery Features
jQuery simplifies various tasks of a progammer by writing less code. Here is the list of important core features supported by jQuery −

- `DOM manipulation` − The jQuery made it easy to select DOM elements, negotiate them and modifying their content by using cross-browser open source selector engine called Sizzle.

- `Event handling` − The jQuery offers an elegant way to capture a wide variety of events, such as a user clicking on a link, without the need to clutter the HTML code itself with event handlers.

- `AJAX Support` − The jQuery helps you a lot to develop a responsive and featurerich site using AJAX technology.

- `Animations` − The jQuery comes with plenty of built-in animation effects which you can use in your websites.

- `Lightweight` − The jQuery is very lightweight library - about 19KB in size (Minified and gzipped).

- `Cross Browser Support` − The jQuery has cross-browser support, and works well in IE 6.0+, FF 2.0+, Safari 3.0+, Chrome and Opera 9.0+

- Latest Technology − The jQuery supports CSS3 selectors and basic XPath syntax.

## Setting up jQuery
There are two ways to use jQuery.

`Local Installation` − You can download jQuery library on your local machine and include it in your HTML code.

`CDN Based Installation` − You can include jQuery library into your HTML code directly from a remote web server or Content Delivery Network (CDN).

## jQuery - Local Installation
You can download latest version of jQuery on your web server and include the downloaded library in your code. We suggest you to download compressed version of the library for a better performance.

- Go to the https://jquery.com/download/ to download the latest version available.

- Now put downloaded `jquery-X.Y.Z.min.js` file in a directory of your website, e.g. `/jquery`.

- Finally include this file in your HTML markup file as shown below.

**Example**
Now you can include jquery library in your HTML file as shown below.
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://www.tutorialspoint.com/jquery/jquery-3.6.0.min.js">
      </script>

      <script type = "text/javascript">
         $(document).ready(function() {
            document.write("Hello, World!");
         });
      </script>
   </head>

   <body>
   </body>
</html>
```

## jQuery - CDN Based Installation
You can include jQuery library into your HTML code directly from a Content Delivery Network (CDN). There are various CDNs which provide a direct link to the latest jQuery library which you can include in your program.

We are using Google CDN version of the library throughout this jQuery Tutorial. You can find many other CDNs on the internet to include jQuery in your web pages.
Example
Now let us rewrite above example using jQuery library from Google CDN.
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/3.6.0/jquery.min.js">
      </script>

      <script type = "text/javascript">
         $(document).ready(function() {
            document.write("Hello, World!");
         });
      </script>
   </head>

   <body>
   </body>
</html>
```

## How to Call a jQuery Library Functions?
As almost everything, we do when using jQuery reads or manipulates the document object model (DOM), we need to make sure that we start adding events etc. as soon as the DOM is ready.

If you want an event to work on your page, you should call it inside the `$(document).ready()` function. Everything inside it will load as soon as the DOM is loaded and before the page contents are loaded.

To do this, we register a ready event for the document as follows −
```
$(document).ready(function() {
   // do stuff when DOM is ready
});
```
To call upon any jQuery library function, use HTML script tags as shown below.
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/3.6.0/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $("div").click(function() {alert("Hello, world!");});
         });
      </script>
   </head>

   <body>
      <div>
         Click on this to see a dialogue box.
      </div>
   </body>
</html>
```

## How to Use Custom Scripts?
It is better to write your custom code in the custom JavaScript file : `custom.js`, as follows −
```
/* Filename: custom.js */
$(document).ready(function() {
   $("div").click(function() {
      alert("Hello, world!");
   });
});
```
Let's keep this file in `/jquery` directory and then we can include `custom.js` file in our HTML file as follows. Try to click the icon run button to run the following jQuery code −
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/3.6.0/jquery.min.js">
      </script>

      <script type = "text/javascript"
         src = "https://www.tutorialspoint.com/jquery/custom.js">
      </script>
   </head>

   <body>
      <div id = "mydiv">
         Click on this to see a dialogue box.
      </div>
   </body>
</html>
```


# References
https://www.tutorialspoint.com/jquery/jquery-overview.htm
