# HTML Phrase Elements

The phrase tags have been desicolgned for specific purposes, though they are displayed in a similar way as other basic tags like \<b>, \<i>, \<pre>, and \<tt>, you have seen in previous chapter. This chapter will take you through all the important phrase tags, so let's start seeing them one by one.

## Emphasized Text
Anything that appears within \<em>...\</em> element is displayed as emphasized text.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>Emphasized Text Example</title>
   </head>

   <body>
      <p>The following word uses an <em>emphasized</em> typeface.</p>
   </body>

</html>
```


## Marked Text
Anything that appears with-in \<mark>...\</mark> element, is displayed as marked with yellow ink.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>Marked Text Example</title>
   </head>

   <body>
      <p>The following word has been <mark>marked</mark> with yellow</p>
   </body>

</html>
```


## Strong Text
Anything that appears within \<strong>...\</strong> element is displayed as important text.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>Strong Text Example</title>
   </head>

   <body>
      <p>The following word uses a <strong>strong</strong> typeface.</p>
   </body>

</html>
```


## Text Abbreviation
You can abbreviate a text by putting it inside opening \<abbr> and closing \</abbr> tags. If present, the title attribute must contain this full description and nothing else.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>Text Abbreviation</title>
   </head>

   <body>
      <p>My best friend's name is  <abbr title = "Abhishek">Abhy</abbr>.</p>
   </body>

</html>
```


## Acronym Element
The \<acronym> element allows you to indicate that the text between \<acronym> and \</acronym> tags is an acronym.

At present, the major browsers do not change the appearance of the content of the \<acronym> element.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>Acronym Example</title>
   </head>

   <body>
      <p>This chapter covers marking up text in <acronym>XHTML</acronym>.</p>
   </body>

</html>
```


## Text Direction
The \<bdo>...\</bdo> element stands for Bi-Directional Override and it is used to override the current text direction.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>Text Direction Example</title>
   </head>

   <body>
      <p>This text will go left to right.</p>
      <p><bdo dir = "rtl">This text will go right to left.</bdo></p>
   </body>

</html>
```


## Special Terms
The \<dfn>...\</dfn> element (or HTML Definition Element) allows you to specify that you are introducing a special term. It's usage is similar to italic words in the midst of a paragraph.

Typically, you would use the \<dfn> element the first time you introduce a key term. Most recent browsers render the content of a \<dfn> element in an italic font.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>Special Terms Example</title>
   </head>

   <body>
      <p>The following word is a <dfn>special</dfn> term.</p>
   </body>

</html>
```


## Quoting Text
When you want to quote a passage from another source, you should put it in between \<blockquote>...\</blockquote> tags.

Text inside a \<blockquote> element is usually indented from the left and right edges of the surrounding text, and sometimes uses an italicized font.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>Blockquote Example</title>
   </head>

   <body>
      <p>The following description of XHTML is taken from the W3C Web site:</p>

      <blockquote>XHTML 1.0 is the W3C's first Recommendation for XHTML,following on
         from earlier work on HTML 4.01, HTML 4.0, HTML 3.2 and HTML 2.0.</blockquote>
   </body>

</html>
```


## Short Quotations
The \<q>...\</q> element is used when you want to add a double quote within a sentence.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>Double Quote Example</title>
   </head>

   <body>
      <p>Amit is in Spain, <q>I think I am wrong</q>.</p>
   </body>

</html>
```


## Text Citations
If you are quoting a text, you can indicate the source placing it between an opening \<cite> tag and closing \</cite> tag

As you would expect in a print publication, the content of the \<cite> element is rendered in italicized text by default.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>Citations Example</title>
   </head>

   <body>
      <p>This HTML tutorial is derived from <cite>W3 Standard for HTML</cite>.</p>
   </body>

</html>
```


## Computer Code
Any programming code to appear on a Web page should be placed inside \<code>...\</code> tags. Usually the content of the \<code> element is presented in a monospaced font, just like the code in most programming books.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>Computer Code Example</title>
   </head>

   <body>
      <p>Regular text. <code>This is code.</code> Regular text.</p>
   </body>

</html>
```


## Keyboard Text
When you are talking about computers, if you want to tell a reader to enter some text, you can use the <kbd>...</kbd> element to indicate what should be typed in, as in this example.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>Keyboard Text Example</title>
   </head>

   <body>
      <p>Regular text. <kbd>This is inside kbd element</kbd> Regular text.</p>
   </body>

</html>
```


## Programming Variables
This element is usually used in conjunction with the <pre> and <code> elements to indicate that the content of that element is a variable.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>Variable Text Example</title>
   </head>

   <body>
      <p><code>document.write("<var>user-name</var>")</code></p>
   </body>

</html>
```


## Program Output
The <samp>...</samp> element indicates sample output from a program, and script etc. Again, it is mainly used when documenting programming or coding concepts.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>Program Output Example</title>
   </head>

   <body>
      <p>Result produced by the program is <samp>Hello World!</samp></p>
   </body>

</html>
```


## Address Text
The <address>...</address> element is used to contain any address.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>Address Example</title>
   </head>

   <body>
      <address>388A, Road No 22, Jubilee Hills -  Hyderabad</address>
   </body>

</html>
```

# References
https://www.tutorialspoint.com/html/html_phrase_elements.htm
