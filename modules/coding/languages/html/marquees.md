# HTML Marquees

An HTML marquee is a scrolling piece of text displayed either horizontally across or vertically down your webpage depending on the settings. This is created by using HTML \<marquees> tag.

Note − The \<marquee> tag deprecated in HTML5. Do not use this element, instead you can use JavaScript and CSS to create such effects.

**Syntax**
A simple syntax to use HTML \<marquee> tag is as follows −
```
<marquee attribute_name = "attribute_value"....more attributes>
   One or more lines or text message or image
</marquee>
```

## The \<marquee> Tag Attributes
Following is the list of important attributes which can be used with \<marquee> tag.

**width**

This specifies the width of the marquee. This can be a value like 10 or 20% etc.

**height**

This specifies the height of the marquee. This can be a value like 10 or 20% etc.

**direction**

This specifies the direction in which marquee should scroll. This can be a value like up, down, left or right.

**behavior**

This specifies the type of scrolling of the marquee. This can have a value like scroll, slide and alternate.

**scrolldelay**

This specifies how long to delay between each jump. This will have a value like 10 etc.

**scrollamount**

This specifies the speed of marquee text. This can have a value like 10 etc.

**loop**

This specifies how many times to loop. The default value is INFINITE, which means that the marquee loops endlessly.

**bgcolor**

This specifies background color in terms of color name or color hex value.

**hspace**

This specifies horizontal space around the marquee. This can be a value like 10 or 20% etc.

**vspace**

This specifies vertical space around the marquee. This can be a value like 10 or 20% etc.

Below are few examples to demonstrate the usage of marquee tag.

**Examples - 1**
```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML marquee Tag</title>
   </head>

   <body>
      <marquee>This is basic example of marquee</marquee>
   </body>

</html>
```

**Examples - 2**

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML marquee Tag</title>
   </head>

   <body>
      <marquee width = "50%">This example will take only 50% width</marquee>
   </body>

</html>
```

**Examples - 3**

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML marquee Tag</title>
   </head>

   <body>
      <marquee direction = "right">This text will scroll from left to right</marquee>
   </body>

</html>
```

**Examples - 4**

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML marquee Tag</title>
   </head>

   <body>
      <marquee direction = "up">This text will scroll from bottom to up</marquee>
   </body>

</html>
```

# References
https://www.tutorialspoint.com/html/html_marquees.htm
