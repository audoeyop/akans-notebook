# HTML Embed Multimedia

Sometimes you need to add music or video into your web page. The easiest way to add video or sound to your web site is to include the special HTML tag called <embed>. This tag causes the browser itself to include controls for the multimedia automatically provided browser supports <embed> tag and given media type.

You can also include a <noembed> tag for the browsers which don't recognize the <embed> tag. You could, for example, use <embed> to display a movie of your choice, and <noembed> to display a single JPG image if browser does not support <embed> tag.

Example
Here is a simple example to play an embedded midi file −

<!DOCTYPE html>
<html>

   <head>
      <title>HTML embed Tag</title>
   </head>

   <body>
      <embed src = "/html/yourfile.mid" width = "100%" height = "60" >
         <noembed><img src = "yourimage.gif" alt = "Alternative Media" ></noembed>
      </embed>
   </body>

</html>
The <embed> Tag Attributes
Following is the list of important attributes which can be used with <embed> tag.

Note −The align and autostart attributes deprecated in HTML5. Do not use these attributes.

Sr.No	Attribute & Description
1
align

Determines how to align the object. It can be set to either center, left or right.

2
autostart

This boolean attribute indicates if the media should start automatically. You can set it either true or false.

3
loop

Specifies if the sound should be played continuously (set loop to true), a certain number of times (a positive value) or not at all (false)

4
playcount

Specifies the number of times to play the sound. This is alternate option for loop if you are usiong IE.

5
hidden

Specifies if the multimedia object should be shown on the page. A false value means no and true values means yes.

6
width

Width of the object in pixels

7
height

Height of the object in pixels

8
name

A name used to reference the object.

9
src

URL of the object to be embedded.

10
volume

Controls volume of the sound. Can be from 0 (off) to 100 (full volume).

Supported Video Types
You can use various media types like Flash movies (.swf), AVI's (.avi), and MOV's (.mov) file types inside embed tag.

.swf files − are the file types created by Macromedia's Flash program.

.wmv files − are Microsoft's Window's Media Video file types.

.mov files − are Apple's Quick Time Movie format.

.mpeg files − are movie files created by the Moving Pictures Expert Group.

Live Demo
<!DOCTYPE html>
<html>

   <head>
      <title>HTML embed Tag</title>
   </head>

   <body>
      <embed src = "/html/yourfile.swf" width = "200" height = "200" >
         <noembed><img src = "yourimage.gif" alt = "Alternative Media" ></noembed>
      </embed>
   </body>

</html>
This will produce the following result −


Background Audio
You can use HTML <bgsound> tag to play a soundtrack in the background of your webpage. This tag is supported by Internet Explorer only and most of the other browsers ignore this tag. It downloads and plays an audio file when the host document is first downloaded by the user and displayed. The background sound file also will replay whenever the user refreshes the browser.

Note − The bgsound tag is deprecated and it is supposed to be removed in a future version of HTML. So they should not be used rather, it's suggested to use HTML5 tag audio for adding sound. But still for learning purpose, this chapter will explain bgsound tag in detail.

This tag is having only two attributes loop and src. Both these attributes have same meaning as explained above.

Here is a simple example to play a small midi file −

<!DOCTYPE html>
<html>

   <head>
      <title>HTML embed Tag</title>
   </head>

   <body>
      <bgsound src = "/html/yourfile.mid">
         <noembed><img src = "yourimage.gif" ></noembed>
      </bgsound>
   </body>

</html>
This will produce the blank screen. This tag does not display any component and remains hidden.

Internet Explorer can also handle only three different sound format files − wav, the native format for PCs; au, the native format for most Unix workstations; and MIDI, a universal music-encoding scheme.

HTML Object tag
HTML 4 introduces the <object> element, which offers an all-purpose solution to generic object inclusion. The <object> element allows HTML authors to specify everything required by an object for its presentation by a user agent.

Here are a few examples −

Example - 1
You can embed an HTML document in an HTML document itself as follows −

<object data = "data/test.htm" type = "text/html" width = "300" height = "200">
   alt : <a href = "data/test.htm">test.htm</a>
</object>
Here alt attribute will come into picture if browser does not support object tag.

Example - 2
You can embed a PDF document in an HTML document as follows −

<object data = "data/test.pdf" type = "application/pdf" width = "300" height = "200">
   alt : <a href = "data/test.pdf">test.htm</a>
</object>
Example - 3
You can specify some parameters related to the document with the <param> tag. Here is an example to embed a wav file −

<object data = "data/test.wav" type = "audio/x-wav" width = "200" height = "20">
   <param name = "src" value = "data/test.wav">
   <param name = "autoplay" value = "false">
   <param name = "autoStart" value = "0">
   alt : <a href = "data/test.wav">test.wav</a>
</object>
Example - 4
You can add a flash document as follows −

<object classid = "clsid:D27CDB6E-AE6D-11cf-96B8-444553540000" id = "penguin"
   codebase = "someplace/swflash.cab" width = "200" height = "300">

   <param name = "movie" value = "flash/penguin.swf" />
   <param name = "quality" value = "high" />
   <img src = "penguin.jpg" width = "200" height = "300" alt = "Penguin" />
</object>
Example - 5
You can add a java applet into HTML document as follows −

<object classid = "clsid:8ad9c840-044e-11d1-b3e9-00805f499d93"
   width = "200" height = "200">
   <param name = "code" value = "applet.class">
</object>
The classid attribute identifies which version of Java Plug-in to use. You can use the optional codebase attribute to specify if and how to download the JRE.

# References
https://www.tutorialspoint.com/html/html_embed_multimedia.htm
