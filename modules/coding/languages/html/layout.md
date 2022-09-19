# HTML Layouts

A webpage layout is very important to give better look to your website. It takes considerable time to design a website's layout with great look and feel.

Now-a-days, all modern websites are using CSS and JavaScript based framework to come up with responsive and dynamic websites but you can create a good layout using simple HTML tables or division tags in combination with other formatting tags. This chapter will give you few examples on how to create a simple but working layout for your webpage using pure HTML and its attributes.

## HTML Layout - Using Tables
The simplest and most popular way of creating layouts is using HTML \<table> tag. These tables are arranged in columns and rows, so you can utilize these rows and columns in whatever way you like.

**Example**

For example, the following HTML layout example is achieved using a table with 3 rows and 2 columns but the header and footer column spans both columns using the colspan attribute −

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Layout using Tables</title>
   </head>

   <body>
      <table width = "100%" border = "0">

         <tr>
            <td colspan = "2" bgcolor = "#b5dcb3">
               <h1>This is Web Page Main title</h1>
            </td>
         </tr>
         <tr valign = "top">
            <td bgcolor = "#aaa" width = "50">
               <b>Main Menu</b><br />
               HTML<br />
               PHP<br />
               PERL...
            </td>

            <td bgcolor = "#eee" width = "100" height = "200">
               Technical and Managerial Tutorials
            </td>
         </tr>
         <tr>
            <td colspan = "2" bgcolor = "#b5dcb3">
               <center>
                  Copyright © 2007 Tutorialspoint.com
               </center>
            </td>
         </tr>

      </table>
   </body>

</html>
```


## Multiple Columns Layout - Using Tables
You can design your webpage to put your web content in multiple pages. You can keep your content in middle column and you can use left column to use menu and right column can be used to put advertisement or some other stuff. This layout will be very similar to what we have at our website tutorialspoint.com.

**Example**

Here is an example to create three column layout −

```
<!DOCTYPE html>
<html>

   <head>
      <title>Three Column HTML Layout</title>
   </head>

   <body>
      <table width = "100%" border = "0">

         <tr valign = "top">
            <td bgcolor = "#aaa" width = "20%">
               <b>Main Menu</b><br />
               HTML<br />
               PHP<br />
               PERL...
            </td>

            <td bgcolor = "#b5dcb3" height = "200" width = "60%">
               Technical and Managerial Tutorials
            </td>

            <td bgcolor = "#aaa" width = "20%">
               <b>Right Menu</b><br />
               HTML<br />
               PHP<br />
               PERL...
            </td>
         </tr>

      <table>
   </body>

</html>
```

## HTML Layouts - Using DIV, SPAN
The \<div> element is a block level element used for grouping HTML elements. While the \<div> tag is a block-level element, the HTML \<span> element is used for grouping elements at an inline level.

Although we can achieve pretty nice layouts with HTML tables, but tables weren't really designed as a layout tool. Tables are more suited to presenting tabular data.

Note − This example makes use of Cascading Style Sheet (CSS), so before understanding this example you need to have a better understanding on how CSS works.

**Example**

Here we will try to achieve same result using \<div> tag along with CSS, whatever you have achieved using \<table> tag in previous example.

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Layouts using DIV, SPAN</title>
   </head>

   <body>
      <div style = "width:100%">

         <div style = "background-color:#b5dcb3; width:100%">
            <h1>This is Web Page Main title</h1>
         </div>

         <div style = "background-color:#aaa; height:200px; width:100px; float:left;">
            <div><b>Main Menu</b></div>
            HTML<br />
            PHP<br />
            PERL...
         </div>

         <div style = "background-color:#eee; height:200px; width:350px; float:left;" >
            <p>Technical and Managerial Tutorials</p>
         </div>

         <div style = "background-color:#aaa; height:200px; width:100px; float:right;">
            <div><b>Right Menu</b></div>
            HTML<br />
            PHP<br />
            PERL...
         </div>

         <div style = "background-color:#b5dcb3; clear:both">
            <center>
               Copyright © 2007 Tutorialspoint.com
            </center>
         </div>

      </div>
   </body>

</html>
```


You can create better layout using DIV, SPAN along with CSS. For more information on CSS, please refer to CSS Tutorial.

# References
https://www.tutorialspoint.com/html/html_layouts.htm
