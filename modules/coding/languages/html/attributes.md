# HTML Attributes

We have seen few HTML tags and their usage like heading tags \<h1>, \<h2>, paragraph tag \<p> and other tags. We used them so far in their simplest form, but most of the HTML tags can also have attributes, which are extra bits of information.

An attribute is used to define the characteristics of an HTML element and is placed inside the element's opening tag. All attributes are made up of two parts − a name and a value

The name is the property you want to set. For example, the paragraph \<p> element in the example carries an attribute whose name is align, which you can use to indicate the alignment of paragraph on the page.

The value is what you want the value of the property to be set and always put within quotations. The below example shows three possible values of align attribute: left, center and right.

Attribute names and attribute values are case-insensitive. However, the World Wide Web Consortium (W3C) recommends lowercase attributes/attribute values in their HTML 4 recommendation.

**Example**
```
<!DOCTYPE html>
<html>

   <head>
      <title>Align Attribute  Example</title>
   </head>

   <body>
      <p align = "left">This is left aligned</p>
      <p align = "center">This is center aligned</p>
      <p align = "right">This is right aligned</p>
   </body>

</html>
```

## Core Attributes
The four core attributes that can be used on the majority of HTML elements (although not all) are −

- Id
- Title
- Class
- Style

## The Id Attribute
The id attribute of an HTML tag can be used to uniquely identify any element within an HTML page. There are two primary reasons that you might want to use an id attribute on an element −

If an element carries an id attribute as a unique identifier, it is possible to identify just that element and its content.

If you have two elements of the same name within a Web page (or style sheet), you can use the id attribute to distinguish between elements that have the same name.

We will discuss style sheet in separate tutorial. For now, let's use the id attribute to distinguish between two paragraph elements as shown below.

**Example**

\<p id = "html">This para explains what is HTML\</p>
\<p id = "css">This para explains what is Cascading Style Sheet\</p>
The title Attribute
The title attribute gives a suggested title for the element. They syntax for the title attribute is similar as explained for id attribute −

The behavior of this attribute will depend upon the element that carries it, although it is often displayed as a tooltip when cursor comes over the element or while the element is loading.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>The title Attribute Example</title>
   </head>

   <body>
      <h3 title = "Hello HTML!">Titled Heading Tag Example</h3>
   </body>

</html>
```

## The class Attribute
The class attribute is used to associate an element with a style sheet, and specifies the class of element. You will learn more about the use of the class attribute when you will learn Cascading Style Sheet (CSS). So for now you can avoid it.

The value of the attribute may also be a space-separated list of class names. For example −
```
class = "className1 className2 className3"
```

## The style Attribute
The style attribute allows you to specify Cascading Style Sheet (CSS) rules within the element.

```
<!DOCTYPE html>
<html>

   <head>
      <title>The style Attribute</title>
   </head>

   <body>
      <p style = "font-family:arial; color:#FF0000;">Some text...</p>
   </body>

</html>
```

## Internationalization Attributes
There are three internationalization attributes, which are available for most (although not all) XHTML elements.

- dir
- lang
- xml:lang

## The dir Attribute
The dir attribute allows you to indicate to the browser about the direction in which the text should flow. The dir attribute can take one of two values, as you can see in the table that follows −

|Value	|Meaning
|---|---
ltr	|Left to right (the default value)
rtl	|Right to left (for languages such as Hebrew or Arabic that are read right to left)

**Example**

```
<!DOCTYPE html>
<html dir = "rtl">

   <head>
      <title>Display Directions</title>
   </head>

   <body>
      This is how IE 5 renders right-to-left directed text.
   </body>

</html>
```

When dir attribute is used within the <html> tag, it determines how text will be presented within the entire document. When used within another tag, it controls the text's direction for just the content of that tag.

## The lang Attribute
The lang attribute allows you to indicate the main language used in a document, but this attribute was kept in HTML only for backwards compatibility with earlier versions of HTML. This attribute has been replaced by the xml:lang attribute in new XHTML documents.

The values of the lang attribute are ISO-639 standard two-character language codes. Check HTML Language Codes: ISO 639 for a complete list of language codes.

**Example**
```
<!DOCTYPE html>
<html lang = "en">

   <head>
      <title>English Language Page</title>
   </head>

   <body>
      This page is using English Language
   </body>

</html>
```


## The xml:lang Attribute
The xml:lang attribute is the XHTML replacement for the lang attribute. The value of the xml:lang attribute should be an ISO-639 country code as mentioned in previous section.

## Generic Attributes
Here's a table of some other attributes that are readily usable with many of the HTML tags.

|Attribute	|Options	|Function
|---|---|---
align	|right, left, center	|Horizontally aligns tags
valign	|top, middle, bottom	|Vertically aligns tags within an HTML element.
bgcolor	|numeric, hexidecimal, RGB values	|Places a background color behind an element
background	|URL	|Places a background image behind an element
id	|User Defined	|Names an element for use with Cascading Style Sheets.
class	|User Defined	|Classifies an element for use with Cascading Style Sheets.
width	|Numeric Value	|Specifies the width of tables, images, or table cells.
height	|Numeric Value	|Specifies the height of tables, images, or table cells.
title	|User Defined	|"Pop-up" title of the elements.


# References
https://www.tutorialspoint.com/html/html_attributes.htm
