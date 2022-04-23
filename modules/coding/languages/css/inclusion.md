# CSS Inclusion

There are four ways to associate styles with your HTML document. Most commonly used methods are inline CSS and External CSS.

## Embedded CSS - The `<style>` Element

You can put your CSS rules into an HTML document using the `<style>` element. This tag is placed inside the `<head>`...`</head>` tags. Rules defined using this syntax will be applied to all the elements available in the document. Here is the generic syntax −

```
<!DOCTYPE html>
<html>
   <head>
      <style type = "text/css" media = "all">
         body {
            background-color: linen;
         }
         h1 {
            color: maroon;
            margin-left: 40px;
         }
      </style>
   </head>   
   <body>
      <h1>This is a heading</h1>
      <p>This is a paragraph.</p>
   </body>
</html>
```

## Attributes

Attributes associated with `<style>` elements are −

|Attribute	|Value	|Description
|-----|-----|-----
|type	|text/css	|Specifies the style sheet language as a content-type (MIME type). This is required attribute.
|media	|screen<br/>tty<br/>tv<br/>projection<br/>handheld<br/>print<br/>braille<br/>aural<br/>all |Specifies the device the document will be displayed on. Default value is all. This is an optional attribute.

## Inline CSS - The style Attribute
You can use style attribute of any HTML element to define style rules. These rules will be applied to that element only. Here is the generic syntax −
```
<element style = "...style rules....">
```

## Attributes

|Attribute	|Value	|Description
|-----|-----|-----
|style	|style rules	|The value of style attribute is a combination of style declarations separated by semicolon (;).

**Example**
Following is the example of inline CSS based on the above syntax −
```
<html>
   <head>
   </head>

   <body>
      <h1 style = "color:#36C;">
         This is inline CSS
      </h1>
   </body>
</html>
```
It will produce the following result −

## External CSS - The `<link>` Element
The `<link>` element can be used to include an external stylesheet file in your HTML document.

An external style sheet is a separate text file with .css extension. You define all the Style rules within this text file and then you can include this file in any HTML document using `<link>` element.

Here is the generic syntax of including external CSS file −
```
<head>
   <link type = "text/css" href = "..." media = "..." />
</head>
```
## Attributes
Attributes associated with `<style>` elements are −

|Attribute	|Value	|Description
|-----|-----|-----
|type	|text/css	|Specifies the style sheet language as a content-type (MIME type). This is required attribute.
|href	|URL	|Specifies the style sheet file having Style rules. This attribute is a required.
|media	|screen<br/>tty<br/>tv<br/>projection<br/>handheld<br/>print<br/>braille<br/>aural<br/>all |Specifies the device the document will be displayed on. Default value is all. This is an optional attribute.

**Example**

Consider a simple style sheet file with a name mystyle.css having the following rules −
```
h1, h2, h3 {
   color: #36C;
   font-weight: normal;
   letter-spacing: .4em;
   margin-bottom: 1em;
   text-transform: lowercase;
}
```
Now you can include this file mystyle.css in any HTML document as follows −
```
<head>
   <link type = "text/css" href = "mystyle.css" media = " all" />
</head>
```
## Imported CSS - `@import` Rule
`@import` is used to import an external stylesheet in a manner similar to the <link> element. Here is the generic syntax of `@import` rule.
```
<head>
   @import "URL";
</head>
```
Here URL is the URL of the style sheet file having style rules. You can use another syntax as well −
```
<head>
   @import url("URL");
</head>
```
**Example**

Following is the example showing you how to import a style sheet file into HTML document −
```
<head>
   @import "mystyle.css";
</head>
```

## CSS Rules Overriding
We have discussed four ways to include style sheet rules in a an HTML document. Here is the rule to override any Style Sheet Rule.

Any inline style sheet takes highest priority. So, it will override any rule defined in `<style>`...`</style>` tags or rules defined in any external style sheet file.

Any rule defined in `<style>`...`</style>` tags will override rules defined in any external style sheet file.

Any rule defined in external style sheet file takes lowest priority, and rules defined in this file will be applied only when above two rules are not applicable.

Handling old Browsers
There are still many old browsers who do not support CSS. So, we should take care while writing our Embedded CSS in an HTML document. The following snippet shows how you can use comment tags to hide CSS from older browsers −
```
<style type = "text/css">
   <!--
      body, td {
         color: blue;
      }
   -->
</style>
```
CSS Comments
Many times, you may need to put additional comments in your style sheet blocks. So, it is very easy to comment any part in style sheet. You can simple put your comments inside `/*.....this is a comment in style sheet.....*/`.

You can use `/* ....*/` to comment multi-line blocks in similar way you do in C and C++ programming languages.
```
<!DOCTYPE html>
<html>
   <head>
      <style>
         p {
            color: red;
            /* This is a single-line comment */
            text-align: center;
         }
         /* This is a multi-line comment */
      </style>
   </head>

   <body>
      <p>Hello World!</p>
   </body>
</html>
```

# References
https://www.tutorialspoint.com/css/css_inclusion.htm
