# CSS Links

This chapter teaches you how to set different properties of a hyper link using CSS. You can set following properties of a hyper link −

We will revisit the same properties when we will discuss Pseudo-Classes of CSS.

- The `:link` signifies unvisited hyperlinks.

- The `:visited` signifies visited hyperlinks.

- The `:hover` signifies an element that currently has the user's mouse pointer hovering over it.

- The `:active` signifies an element on which the user is currently clicking.

Usually, all these properties are kept in the header part of the HTML document.

Remember a:hover MUST come after a:link and a:visited in the CSS definition in order to be effective. Also, a:active MUST come after a:hover in the CSS definition as follows −
```
<style type = "text/css">
   a:link {color: #000000}
   a:visited {color: #006600}
   a:hover {color: #FFCC00}
   a:active {color: #FF00CC}
</style>
```
Now, we will see how to use these properties to give different effects to hyperlinks.

## Set the Color of Links

The following example demonstrates how to set the link color. Possible values could be any color name in any valid format.
```
<html>
   <head>
      <style type = "text/css">
         a:link {color:#000000}
     </style>
   </head>

   <body>
      <a href = "">Link</a>
   </body>
</html>
```

## Set the Color of Visited Links
The following example demonstrates how to set the color of visited links. Possible values could be any color name in any valid format.
```
<html>
   <head>
      <style type = "text/css">
         a:visited {color: #006600}
      </style>
   </head>

   <body>
      <a href = ""> link</a>
   </body>
</html>
```

It will produce the following link. Once you will click this link, it will change its color to green.

## Change the Color of Links when Mouse is Over
The following example demonstrates how to change the color of links when we bring a mouse pointer over that link. Possible values could be any color name in any valid format.
```
<html>
   <head>
      <style type = "text/css">
         a:hover {color: #FFCC00}
      </style>
   </head>

   <body>
      <a href = "">Link</a>
   </body>
</html>
```
It will produce the following link. Now, you bring your mouse over this link and you will see that it changes its color to yellow.

## Change the Color of Active Links
The following example demonstrates how to change the color of active links. Possible values could be any color name in any valid format.
```
<html>
   <head>
      <style type = "text/css">
         a:active {color: #FF00CC}
      </style>
   </head>

   <body>
      <a href = "">Link</a>
   </body>
</html>
```
It will produce the following link. It will change its color to pink when the user clicks it.

# References
https://www.tutorialspoint.com/css/css_links.htm
