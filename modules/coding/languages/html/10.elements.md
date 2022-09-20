# HTML Elements

An HTML element is defined by a starting tag. If the element contains other content, it ends with a closing tag, where the element name is preceded by a forward slash as shown below with few tags −

## Start Tag Content	End Tag
```
<p>	This is paragraph content.	</p>
<h1>	This is heading content.	</h1>
<div>	This is division content.	</div>
<br />
```
So here \<p>....\</p> is an HTML element, \<h1>...\</h1> is another HTML element. There are some HTML elements which don't need to be closed, such as \<img.../>, \<hr /> and \<br /> elements. These are known as void elements.

HTML documents consists of a tree of these elements and they specify how HTML documents should be built, and what kind of content should be placed in what part of an HTML document.

## HTML Tag vs. Element
An HTML element is defined by a starting tag. If the element contains other content, it ends with a closing tag.

For example, \<p> is starting tag of a paragraph and \</p> is closing tag of the same paragraph but \<p>This is paragraph\</p> is a paragraph element.

## Nested HTML Elements
It is very much allowed to keep one HTML element inside another HTML element −

**Example**
```
<!DOCTYPE html>
<html>

   <head>
      <title>Nested Elements Example</title>
   </head>

   <body>
      <h1>This is <i>italic</i> heading</h1>
      <p>This is <u>underlined</u> paragraph</p>
   </body>

</html>
```

# References
https://www.tutorialspoint.com/html/html_elements.htm
