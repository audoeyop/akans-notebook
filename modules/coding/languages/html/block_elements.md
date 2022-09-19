# HTML Block Elements

All the HTML elements can be categorized into two categories (a) Block Level Elements (b)Inline Elements.

## Block Elements
Block elements appear on the screen as if they have a line break before and after them. For example, the \<p>, \<h1>, \<h2>, \<h3>, \<h4>, \<h5>, \<h6>, \<ul>, \<ol>, \<dl>, \<pre>, \<hr />, \<blockquote>, and \<address> elements are all block level elements. They all start on their own new line, and anything that follows them appears on its own new line.

## Inline Elements
Inline elements, on the other hand, can appear within sentences and do not have to appear on a new line of their own. The \<b>, \<i>, \<u>, \<em>, \<strong>, \<sup>, \<sub>, \<big>, \<small>, \<li>, \<ins>, \<del>, \<code>, \<cite>, \<dfn>, \<kbd>, and \<var> elements are all inline elements.

## Grouping HTML Elements
There are two important tags which we use very frequently to group various other HTML tags (i) \<div> tag and (ii) \<span> tag

## The \<div> tag
This is the very important block level tag which plays a big role in grouping various other HTML tags and applying CSS on group of elements. Even now \<div> tag can be used to create webpage layout where we define different parts (Left, Right, Top etc.) of the page using \<div> tag. This tag does not provide any visual change on the block but this has more meaning when it is used with CSS.

**Example**
Following is a simple example of \<div> tag. We will learn Cascading Style Sheet (CSS) in a separate chapter but we used it here to show the usage of \<div> tag −
```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML div Tag</title>
   </head>

   <body>
      <!-- First group of tags -->
      <div style = "color:red">
         <h4>This is first group</h4>
         <p>Following is a list of vegetables</p>

         <ul>
            <li>Beetroot</li>
            <li>Ginger</li>
            <li>Potato</li>
            <li>Radish</li>
         </ul>
      </div>

      <!-- Second group of tags -->
      <div style = "color:green">
         <h4>This is second group</h4>
         <p>Following is a list of fruits</p>

         <ul>
            <li>Apple</li>
            <li>Banana</li>
            <li>Mango</li>
            <li>Strawberry</li>
         </ul>
      </div>
   </body>

</html>
```

## The <span> tag
The HTML \<span> is an inline element and it can be used to group inline-elements in an HTML document. This tag also does not provide any visual change on the block but has more meaning when it is used with CSS.

The difference between the \<span> tag and the \<div> tag is that the \<span> tag is used with inline elements whereas the \<div> tag is used with block-level elements.

**Example**

Following is a simple example of \<span> tag. We will learn Cascading Style Sheet (CSS) in a separate chapter but we used it here to show the usage of \<span> tag −

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML span Tag</title>
   </head>

   <body>
      <p>This is <span style = "color:red">red</span> and this is
         <span style = "color:green">green</span></p>
   </body>

</html>
```

# References
https://www.tutorialspoint.com/html/html_blocks.htm
