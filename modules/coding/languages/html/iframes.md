# HTML Frames

You can define an inline frame with HTML tag \<iframe>. The \<iframe> tag is not somehow related to \<frameset> tag, instead, it can appear anywhere in your document. The \<iframe> tag defines a rectangular region within the document in which the browser can display a separate document, including scrollbars and borders. An inline frame is used to embed another document within the current HTML document.

The src attribute is used to specify the URL of the document that occupies the inline frame.

**Example**

Following is the example to show how to use the \<iframe> −

```
<!DOCTYPE html>
<html>

   <head>
      <title>HTML Iframes</title>
   </head>

   <body>
      <p>Document content goes here...</p>

      <iframe src = "/html/menu.htm" width = "555" height = "200">
         Sorry your browser does not support inline frames.
      </iframe>

      <p>Document content also go here...</p>
   </body>

</html>
```


## The \<Iframe> Tag Attributes
Most of the attributes of the \<iframe> tag, including name, class, frameborder, id, longdesc, marginheight, marginwidth, name, scrolling, style, and title behave exactly like the corresponding attributes for the \<frame> tag.

Note − The frameborder, marginwidth, longdesc, scrolling, marginheight attributes deprecated in HTML5. Do not use these attributes.

**src**

This attribute is used to give the file name that should be loaded in the frame. Its value can be any URL. For example, src = "/html/top_frame.htm" will load an HTML file available in html directory.

**name**

This attribute allows you to give a name to a frame. It is used to indicate which frame a document should be loaded into. This is especially important when you want to create links in one frame that load pages into an another frame, in which case the second frame needs a name to identify itself as the target of the link.

**frameborder**

This attribute specifies whether or not the borders of that frame are shown; it overrides the value given in the frameborder attribute on the \<frameset> tag if one is given, and this can take values either 1 (yes) or 0 (no).

**marginwidth**

This attribute allows you to specify the width of the space between the left and right of the frame's borders and the frame's content. The value is given in pixels. For example marginwidth = "10".

**marginheight**

This attribute allows you to specify the height of the space between the top and bottom of the frame's borders and its contents. The value is given in pixels. For example marginheight = "10".

**height**

This attribute specifies the height of \<iframe>.

**scrolling**

This attribute controls the appearance of the scrollbars that appear on the frame. This takes values either "yes", "no" or "auto". For example scrolling = "no" means it should not have scroll bars.

**longdesc**

This attribute allows you to provide a link to another page containing a long description of the contents of the frame. For example longdesc = "framedescription.htm"

**width**

This attribute specifies the width of \<iframe>.

# References
https://www.tutorialspoint.com/html/html_iframes.htm
