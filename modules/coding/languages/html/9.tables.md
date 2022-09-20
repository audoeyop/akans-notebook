# HTML Tables

The HTML tables allow web authors to arrange data like text, images, links, other tables, etc. into rows and columns of cells.

The HTML tables are created using the \<table> tag in which the \<tr> tag is used to create table rows and \<td> tag is used to create data cells. The elements under \<td> are regular and left aligned by default

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Tables</title>
   </head>

   <body>
      <table border = "1">
         <tr>
            <td>Row 1, Column 1</td>
            <td>Row 1, Column 2</td>
         </tr>

         <tr>
            <td>Row 2, Column 1</td>
            <td>Row 2, Column 2</td>
         </tr>
      </table>

   </body>
</html>
```


Here, the border is an attribute of \<table> tag and it is used to put a border across all the cells. If you do not need a border, then you can use border = "0".

Table Heading
Table heading can be defined using \<th> tag. This tag will be put to replace \<td> tag, which is used to represent actual data cell. Normally you will put your top row as table heading as shown below, otherwise you can use \<th> element in any row. Headings, which are defined in \<th> tag are centered and bold by default.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Table Header</title>
   </head>

   <body>
      <table border = "1">
         <tr>
            <th>Name</th>
            <th>Salary</th>
         </tr>
         <tr>
            <td>Ramesh Raman</td>
            <td>5000</td>
         </tr>

         <tr>
            <td>Shabbir Hussein</td>
            <td>7000</td>
         </tr>
      </table>
   </body>

</html>
```

## Cellpadding and Cellspacing Attributes
There are two attributes called cellpadding and cellspacing which you will use to adjust the white space in your table cells. The cellspacing attribute defines space between table cells, while cellpadding represents the distance between cell borders and the content within a cell.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Table Cellpadding</title>
   </head>

   <body>
      <table border = "1" cellpadding = "5" cellspacing = "5">
         <tr>
            <th>Name</th>
            <th>Salary</th>
         </tr>
         <tr>
            <td>Ramesh Raman</td>
            <td>5000</td>
         </tr>
         <tr>
            <td>Shabbir Hussein</td>
            <td>7000</td>
         </tr>
      </table>
   </body>

</html>
```


Colspan and Rowspan Attributes
You will use colspan attribute if you want to merge two or more columns into a single column. Similar way you will use rowspan if you want to merge two or more rows.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Table Colspan/Rowspan</title>
   </head>

   <body>
      <table border = "1">
         <tr>
            <th>Column 1</th>
            <th>Column 2</th>
            <th>Column 3</th>
         </tr>
         <tr>
            <td rowspan = "2">Row 1 Cell 1</td>
            <td>Row 1 Cell 2</td>
            <td>Row 1 Cell 3</td>
         </tr>
         <tr>
            <td>Row 2 Cell 2</td>
            <td>Row 2 Cell 3</td>
         </tr>
         <tr>
            <td colspan = "3">Row 3 Cell 1</td>
         </tr>
      </table>
   </body>

</html>
```


## Tables Backgrounds
You can set table background using one of the following two ways −

- bgcolor attribute − You can set background color for whole table or just for one cell.

- background attribute − You can set background image for whole table or just for one cell.

You can also set border color also using bordercolor attribute.

Note − The bgcolor, background, and bordercolor attributes deprecated in HTML5. Do not use these attributes.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Table Background</title>
   </head>

   <body>
      <table border = "1" bordercolor = "green" bgcolor = "yellow">
         <tr>
            <th>Column 1</th>
            <th>Column 2</th>
            <th>Column 3</th>
         </tr>
         <tr>
            <td rowspan = "2">Row 1 Cell 1</td>
            <td>Row 1 Cell 2</td>
            <td>Row 1 Cell 3</td>
         </tr>
         <tr>
            <td>Row 2 Cell 2</td>
            <td>Row 2 Cell 3</td>
         </tr>
         <tr>
            <td colspan = "3">Row 3 Cell 1</td>
         </tr>
      </table>
   </body>

</html>
```


Here is an example of using background attribute. Here we will use an image available in /images directory.

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Table Background</title>
   </head>

   <body>
      <table border = "1" bordercolor = "green" background = "/images/test.png">
         <tr>
            <th>Column 1</th>
            <th>Column 2</th>
            <th>Column 3</th>
         </tr>
         <tr>
            <td rowspan = "2">Row 1 Cell 1</td>
            <td>Row 1 Cell 2</td><td>Row 1 Cell 3</td>
         </tr>
         <tr>
            <td>Row 2 Cell 2</td>
            <td>Row 2 Cell 3</td>
         </tr>
         <tr>
            <td colspan = "3">Row 3 Cell 1</td>
         </tr>
      </table>
   </body>

</html>
```
This will produce the following result. Here background image did not apply to table's header.


## Table Height and Width
You can set a table width and height using width and height attributes. You can specify table width or height in terms of pixels or in terms of percentage of available screen area.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Table Width/Height</title>
   </head>

   <body>
      <table border = "1" width = "400" height = "150">
         <tr>
            <td>Row 1, Column 1</td>
            <td>Row 1, Column 2</td>
         </tr>

         <tr>
            <td>Row 2, Column 1</td>
            <td>Row 2, Column 2</td>
         </tr>
      </table>
   </body>

</html>
```


## Table Caption
The caption tag will serve as a title or explanation for the table and it shows up at the top of the table. This tag is deprecated in newer version of HTML/XHTML.

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Table Caption</title>
   </head>

   <body>
      <table border = "1" width = "100%">
         <caption>This is the caption</caption>

         <tr>
            <td>row 1, column 1</td><td>row 1, columnn 2</td>
         </tr>

         <tr>
            <td>row 2, column 1</td><td>row 2, columnn 2</td>
         </tr>
      </table>
   </body>

</html>
```


## Table Header, Body, and Footer
Tables can be divided into three portions − a header, a body, and a foot. The head and foot are rather similar to headers and footers in a word-processed document that remain the same for every page, while the body is the main content holder of the table.

The three elements for separating the head, body, and foot of a table are −

- `<thead>` − to create a separate table header.

- `<tbody>` − to indicate the main body of the table.

- `<tfoot>` − to create a separate table footer.

A table may contain several \<tbody> elements to indicate different pages or groups of data. But it is notable that \<thead> and \<tfoot> tags should appear before \<tbody>

**Example**

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Table</title>
   </head>

   <body>
      <table border = "1" width = "100%">
         <thead>
            <tr>
               <td colspan = "4">This is the head of the table</td>
            </tr>
         </thead>

         <tfoot>
            <tr>
               <td colspan = "4">This is the foot of the table</td>
            </tr>
         </tfoot>

         <tbody>
            <tr>
               <td>Cell 1</td>
               <td>Cell 2</td>
               <td>Cell 3</td>
               <td>Cell 4</td>
            </tr>
         </tbody>

      </table>
   </body>

</html>
```


## Nested Tables
You can use one table inside another table. Not only tables you can use almost all the tags inside table data tag \<td>.

**Example**

Following is the example of using another table and other tags inside a table cell.

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Table</title>
   </head>

   <body>
      <table border = "1" width = "100%">

         <tr>
            <td>
               <table border = "1" width = "100%">
                  <tr>
                     <th>Name</th>
                     <th>Salary</th>
                  </tr>
                  <tr>
                     <td>Ramesh Raman</td>
                     <td>5000</td>
                  </tr>
                  <tr>
                     <td>Shabbir Hussein</td>
                     <td>7000</td>
                  </tr>
               </table>
            </td>
         </tr>

      </table>
   </body>

</html>
```

# References
https://www.tutorialspoint.com/html/html_tables.htm
