# CSS Colors

CSS uses color values to specify a color. Typically, these are used to set a color either for the foreground of an element (i.e., its text) or else for the background of the element. They can also be used to affect the color of borders and other decorative effects.

You can specify your color values in various formats. Following table lists all the possible formats −

|Format	|Syntax	|Example
|-----|-----|-----
|Hex Code	|#RRGGBB	|p{color:#FF0000;}
|Short Hex |Code	#RGB	|p{color:#6A7;}
|RGB %	|rgb(rrr%,ggg%,bbb%)	|p{color:rgb(50%,50%,50%);}
RGB Absolute	|rgb(rrr,ggg,bbb)	|p{color:rgb(0,0,255);}
|keyword	|aqua, black, etc.	|p{color:teal;}

These formats are explained in more detail in the following sections −

## CSS Colors - Hex Codes

A hexadecimal is a 6 digit representation of a color. The first two digits(RR) represent a red value, the next two are a green value(GG), and the last are the blue value(BB).

A hexadecimal value can be taken from any graphics software like Adobe Photoshop, Jasc Paintshop Pro, or even using Advanced Paint Brush.

Each hexadecimal code will be preceded by a pound or hash sign '#'. Following are the examples to use Hexadecimal notation.

<table class="table table-bordered">
<tbody><tr>
<th style="text-align:center;width:50%">Color</th>
<th style="text-align:center;width:50%">Color HEX</th>
</tr>
<tr>
<td bgcolor="#000000">&nbsp;</td>
<td style="text-align:center;">#000000</td>
</tr>
<tr>
<td bgcolor="#ff0000">&nbsp;</td>
<td style="text-align:center;">#FF0000</td>
</tr>
<tr>
<td bgcolor="#00ff00">&nbsp;</td>
<td style="text-align:center;">#00FF00</td>
</tr>
<tr>
<td bgcolor="#0000ff">&nbsp;</td>
<td style="text-align:center;">#0000FF</td>
</tr>
<tr>
<td bgcolor="#ffff00">&nbsp;</td>
<td style="text-align:center;">#FFFF00</td>
</tr>
<tr>
<td bgcolor="#00ffff">&nbsp;</td>
<td style="text-align:center;">#00FFFF</td>
</tr>
<tr>
<td bgcolor="#ff00ff">&nbsp;</td>
<td style="text-align:center;">#FF00FF</td>
</tr>
<tr>
<td bgcolor="#c0c0c0">&nbsp;</td>
<td style="text-align:center;">#C0C0C0</td>
</tr>
<tr>
<td bgcolor="#ffffff">&nbsp;</td>
<td style="text-align:center;">#FFFFFF</td>
</tr>
</tbody></table>

## CSS Colors - Short Hex Codes
This is a shorter form of the six-digit notation. In this format, each digit is replicated to arrive at an equivalent six-digit value. For example: #6A7 becomes #66AA77.

A hexadecimal value can be taken from any graphics software like Adobe Photoshop, Jasc Paintshop Pro, or even using Advanced Paint Brush.

Each hexadecimal code will be preceded by a pound or hash sign '#'. Following are the examples to use Hexadecimal notation.

<table class="table table-bordered">
<tbody><tr>
<th style="text-align:center;width:50%">Color</th>
<th style="text-align:center;width:50%">Color HEX</th>
</tr>
<tr>
<td bgcolor="#000">&nbsp;</td>
<td style="text-align:center;">#000</td>
</tr>
<tr>
<td bgcolor="#F00">&nbsp;</td>
<td style="text-align:center;">#F00</td>
</tr>
<tr>
<td bgcolor="#0F0">&nbsp;</td>
<td style="text-align:center;">#0F0</td>
</tr>
<tr>
<td bgcolor="#00F">&nbsp;</td>
<td style="text-align:center;">#0FF</td>
</tr>
<tr>
<td bgcolor="#FF0">&nbsp;</td>
<td style="text-align:center;">#FF0</td>
</tr>
<tr>
<td bgcolor="#0FF">&nbsp;</td>
<td style="text-align:center;">#0FF</td>
</tr>
<tr>
<td bgcolor="#F0F">&nbsp;</td>
<td style="text-align:center;">#F0F</td>
</tr>
<tr>
<td bgcolor="#FFF">&nbsp;</td>
<td style="text-align:center;">#FFF</td>
</tr>
</tbody></table>

## CSS Colors - RGB Values
This color value is specified using the `rgb( )` property. This property takes three values, one each for red, green, and blue. The value can be an integer between 0 and 255 or a percentage.

NOTE − All the browsers does not support `rgb()` property of color so it is recommended not to use it.

Following is the example to show few colors using RGB values.

<table class="table table-bordered">
<tbody><tr>
<th style="text-align:center;width:50%">Color</th>
<th style="text-align:center;width:50%">Color RGB</th>
</tr>
<tr>
<td bgcolor="#000000">&nbsp;</td>
<td style="text-align:center;">rgb(0,0,0)</td>
</tr>
<tr>
<td bgcolor="#ff0000">&nbsp;</td>
<td style="text-align:center;">rgb(255,0,0)</td>
</tr>
<tr>
<td bgcolor="#00ff00">&nbsp;</td>
<td style="text-align:center;">rgb(0,255,0)</td>
</tr>
<tr>
<td bgcolor="#0000ff">&nbsp;</td>
<td style="text-align:center;">rgb(0,0,255)</td>
</tr>
<tr>
<td bgcolor="#ffff00">&nbsp;</td>
<td style="text-align:center;">rgb(255,255,0)</td>
</tr>
<tr>
<td bgcolor="#00ffff">&nbsp;</td>
<td style="text-align:center;">rgb(0,255,255)</td>
</tr>
<tr>
<td bgcolor="#ff00ff">&nbsp;</td>
<td style="text-align:center;">rgb(255,0,255)</td>
</tr>
<tr>
<td bgcolor="#c0c0c0">&nbsp;</td>
<td style="text-align:center;">rgb(192,192,192)</td>
</tr>
<tr>
<td bgcolor="#ffffff">&nbsp;</td>
<td style="text-align:center;">rgb(255,255,255)</td>
</tr>
</tbody></table>

Building Color Codes
The are tons of websites and tools to find the perfect color. Just search online for "css color picker".

## Browser Safe Colors
Here is the list of 216 colors which are supposed to be most safe and computer independent colors. These colors vary from hexa code 000000 to FFFFFF. These colors are safe to use because they ensure that all computers would display the colors correctly when running a 256 color palette −

<table class="table table-bordered">
<tbody><tr>
<td style="color: white;" bgcolor="#000000">000000</td>
<td style="color: white;" bgcolor="#000033">000033</td>
<td style="color: white;" bgcolor="#000066">000066</td>
<td style="color: white;" bgcolor="#000099">000099</td>
<td style="color: white;" bgcolor="#0000cc">0000CC</td>
<td style="color: white;" bgcolor="#0000ff">0000FF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#003300">003300</td>
<td style="color: white;" bgcolor="#003333">003333</td>
<td style="color: white;" bgcolor="#003366">003366</td>
<td style="color: white;" bgcolor="#003399">003399</td>
<td style="color: white;" bgcolor="#0033cc">0033CC</td>
<td style="color: white;" bgcolor="#0033ff">0033FF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#006600">006600</td>
<td style="color: white;" bgcolor="#006633">006633</td>
<td style="color: white;" bgcolor="#006666">006666</td>
<td style="color: white;" bgcolor="#006699">006699</td>
<td style="color: white;" bgcolor="#0066cc">0066CC</td>
<td style="color: white;" bgcolor="#0066ff">0066FF</td>
</tr>
<tr>
<td bgcolor="#009900">009900</td>
<td bgcolor="#009933">009933</td>
<td bgcolor="#009966">009966</td>
<td bgcolor="#009999">009999</td>
<td bgcolor="#0099cc">0099CC</td>
<td bgcolor="#0099ff">0099FF</td>
</tr>
<tr>
<td bgcolor="#00cc00">00CC00</td>
<td bgcolor="#00cc33">00CC33</td>
<td bgcolor="#00cc66">00CC66</td>
<td bgcolor="#00cc99">00CC99</td>
<td bgcolor="#00cccc">00CCCC</td>
<td bgcolor="#00ccff">00CCFF</td>
</tr>
<tr>
<td bgcolor="#00ff00">00FF00</td>
<td bgcolor="#00ff33">00FF33</td>
<td bgcolor="#00ff66">00FF66</td>
<td bgcolor="#00ff99">00FF99</td>
<td bgcolor="#00ffcc">00FFCC</td>
<td bgcolor="#00ffff">00FFFF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#330000">330000</td>
<td style="color: white;" bgcolor="#330033">330033</td>
<td style="color: white;" bgcolor="#330066">330066</td>
<td style="color: white;" bgcolor="#330099">330099</td>
<td style="color: white;" bgcolor="#3300cc">3300CC</td>
<td style="color: white;" bgcolor="#3300ff">3300FF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#333300">333300</td>
<td style="color: white;" bgcolor="#333333">333333</td>
<td style="color: white;" bgcolor="#333366">333366</td>
<td style="color: white;" bgcolor="#333399">333399</td>
<td style="color: white;" bgcolor="#3333cc">3333CC</td>
<td style="color: white;" bgcolor="#3333ff">3333FF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#336600">336600</td>
<td style="color: white;" bgcolor="#336633">336633</td>
<td style="color: white;" bgcolor="#336666">336666</td>
<td style="color: white;" bgcolor="#336699">336699</td>
<td style="color: white;" bgcolor="#3366cc">3366CC</td>
<td style="color: white;" bgcolor="#3366ff">3366FF</td>
</tr>
<tr>
<td bgcolor="#339900">339900</td>
<td bgcolor="#339933">339933</td>
<td bgcolor="#339966">339966</td>
<td bgcolor="#339999">339999</td>
<td bgcolor="#3399cc">3399CC</td>
<td bgcolor="#3399ff">3399FF</td>
</tr>
<tr>
<td bgcolor="#33cc00">33CC00</td>
<td bgcolor="#33cc33">33CC33</td>
<td bgcolor="#33cc66">33CC66</td>
<td bgcolor="#33cc99">33CC99</td>
<td bgcolor="#33cccc">33CCCC</td>
<td bgcolor="#33ccff">33CCFF</td>
</tr>
<tr>
<td bgcolor="#33ff00">33FF00</td>
<td bgcolor="#33ff33">33FF33</td>
<td bgcolor="#33ff66">33FF66</td>
<td bgcolor="#33ff99">33FF99</td>
<td bgcolor="#33ffcc">33FFCC</td>
<td bgcolor="#33ffff">33FFFF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#660000">660000</td>
<td style="color: white;" bgcolor="#660033">660033</td>
<td style="color: white;" bgcolor="#660066">660066</td>
<td style="color: white;" bgcolor="#660099">660099</td>
<td style="color: white;" bgcolor="#6600cc">6600CC</td>
<td style="color: white;" bgcolor="#6600ff">6600FF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#663300">663300</td>
<td style="color: white;" bgcolor="#663333">663333</td>
<td style="color: white;" bgcolor="#663366">663366</td>
<td style="color: white;" bgcolor="#663399">663399</td>
<td style="color: white;" bgcolor="#6633cc">6633CC</td>
<td style="color: white;" bgcolor="#6633ff">6633FF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#666600">666600</td>
<td style="color: white;" bgcolor="#666633">666633</td>
<td style="color: white;" bgcolor="#666666">666666</td>
<td style="color: white;" bgcolor="#666699">666699</td>
<td style="color: white;" bgcolor="#6666cc">6666CC</td>
<td style="color: white;" bgcolor="#6666ff">6666FF</td>
</tr>
<tr>
<td bgcolor="#669900">669900</td>
<td bgcolor="#669933">669933</td>
<td bgcolor="#669966">669966</td>
<td bgcolor="#669999">669999</td>
<td bgcolor="#6699cc">6699CC</td>
<td bgcolor="#6699ff">6699FF</td>
</tr>
<tr>
<td bgcolor="#66cc00">66CC00</td>
<td bgcolor="#66cc33">66CC33</td>
<td bgcolor="#66cc66">66CC66</td>
<td bgcolor="#66cc99">66CC99</td>
<td bgcolor="#66cccc">66CCCC</td>
<td bgcolor="#66ccff">66CCFF</td>
</tr>
<tr>
<td bgcolor="#66ff00">66FF00</td>
<td bgcolor="#66ff33">66FF33</td>
<td bgcolor="#66ff66">66FF66</td>
<td bgcolor="#66ff99">66FF99</td>
<td bgcolor="#66ffcc">66FFCC</td>
<td bgcolor="#66ffff">66FFFF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#990000">990000</td>
<td style="color: white;" bgcolor="#990033">990033</td>
<td style="color: white;" bgcolor="#990066">990066</td>
<td style="color: white;" bgcolor="#990099">990099</td>
<td style="color: white;" bgcolor="#9900cc">9900CC</td>
<td style="color: white;" bgcolor="#9900ff">9900FF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#993300">993300</td>
<td style="color: white;" bgcolor="#993333">993333</td>
<td style="color: white;" bgcolor="#993366">993366</td>
<td style="color: white;" bgcolor="#993399">993399</td>
<td style="color: white;" bgcolor="#9933cc">9933CC</td>
<td style="color: white;" bgcolor="#9933ff">9933FF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#996600">996600</td>
<td style="color: white;" bgcolor="#996633">996633</td>
<td style="color: white;" bgcolor="#996666">996666</td>
<td style="color: white;" bgcolor="#996699">996699</td>
<td style="color: white;" bgcolor="#9966cc">9966CC</td>
<td style="color: white;" bgcolor="#9966ff">9966FF</td>
</tr>
<tr>
<td bgcolor="#999900">999900</td>
<td bgcolor="#999933">999933</td>
<td bgcolor="#999966">999966</td>
<td bgcolor="#999999">999999</td>
<td bgcolor="#9999cc">9999CC</td>
<td bgcolor="#9999ff">9999FF</td>
</tr>
<tr>
<td bgcolor="#99cc00">99CC00</td>
<td bgcolor="#99cc33">99CC33</td>
<td bgcolor="#99cc66">99CC66</td>
<td bgcolor="#99cc99">99CC99</td>
<td bgcolor="#99cccc">99CCCC</td>
<td bgcolor="#99ccff">99CCFF</td>
</tr>
<tr>
<td bgcolor="#99ff00">99FF00</td>
<td bgcolor="#99ff33">99FF33</td>
<td bgcolor="#99ff66">99FF66</td>
<td bgcolor="#99ff99">99FF99</td>
<td bgcolor="#99ffcc">99FFCC</td>
<td bgcolor="#99ffff">99FFFF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#cc0000">CC0000</td>
<td style="color: white;" bgcolor="#cc0033">CC0033</td>
<td style="color: white;" bgcolor="#cc0066">CC0066</td>
<td style="color: white;" bgcolor="#cc0099">CC0099</td>
<td style="color: white;" bgcolor="#cc00cc">CC00CC</td>
<td style="color: white;" bgcolor="#cc00ff">CC00FF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#cc3300">CC3300</td>
<td style="color: white;" bgcolor="#cc3333">CC3333</td>
<td style="color: white;" bgcolor="#cc3366">CC3366</td>
<td style="color: white;" bgcolor="#cc3399">CC3399</td>
<td style="color: white;" bgcolor="#cc33cc">CC33CC</td>
<td style="color: white;" bgcolor="#cc33ff">CC33FF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#cc6600">CC6600</td>
<td style="color: white;" bgcolor="#cc6633">CC6633</td>
<td style="color: white;" bgcolor="#cc6666">CC6666</td>
<td style="color: white;" bgcolor="#cc6699">CC6699</td>
<td style="color: white;" bgcolor="#cc66cc">CC66CC</td>
<td style="color: white;" bgcolor="#cc66ff">CC66FF</td>
</tr>
<tr>
<td bgcolor="#cc9900">CC9900</td>
<td bgcolor="#cc9933">CC9933</td>
<td bgcolor="#cc9966">CC9966</td>
<td bgcolor="#cc9999">CC9999</td>
<td bgcolor="#cc99cc">CC99CC</td>
<td bgcolor="#cc99ff">CC99FF</td>
</tr>
<tr>
<td bgcolor="#cccc00">CCCC00</td>
<td bgcolor="#cccc33">CCCC33</td>
<td bgcolor="#cccc66">CCCC66</td>
<td bgcolor="#cccc99">CCCC99</td>
<td bgcolor="#cccccc">CCCCCC</td>
<td bgcolor="#ccccff">CCCCFF</td>
</tr>
<tr>
<td bgcolor="#ccff00">CCFF00</td>
<td bgcolor="#ccff33">CCFF33</td>
<td bgcolor="#ccff66">CCFF66</td>
<td bgcolor="#ccff99">CCFF99</td>
<td bgcolor="#ccffcc">CCFFCC</td>
<td bgcolor="#ccffff">CCFFFF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#ff0000">FF0000</td>
<td style="color: white;" bgcolor="#ff0033">FF0033</td>
<td style="color: white;" bgcolor="#ff0066">FF0066</td>
<td style="color: white;" bgcolor="#ff0099">FF0099</td>
<td style="color: white;" bgcolor="#ff00cc">FF00CC</td>
<td style="color: white;" bgcolor="#ff00ff">FF00FF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#ff3300">FF3300</td>
<td style="color: white;" bgcolor="#ff3333">FF3333</td>
<td style="color: white;" bgcolor="#ff3366">FF3366</td>
<td style="color: white;" bgcolor="#ff3399">FF3399</td>
<td style="color: white;" bgcolor="#ff33cc">FF33CC</td>
<td style="color: white;" bgcolor="#ff33ff">FF33FF</td>
</tr>
<tr>
<td style="color: white;" bgcolor="#ff6600">FF6600</td>
<td style="color: white;" bgcolor="#ff6633">FF6633</td>
<td style="color: white;" bgcolor="#ff6666">FF6666</td>
<td style="color: white;" bgcolor="#ff6699">FF6699</td>
<td style="color: white;" bgcolor="#ff66cc">FF66CC</td>
<td style="color: white;" bgcolor="#ff66ff">FF66FF</td>
</tr>
<tr>
<td bgcolor="#ff9900">FF9900</td>
<td bgcolor="#ff9933">FF9933</td>
<td bgcolor="#ff9966">FF9966</td>
<td bgcolor="#ff9999">FF9999</td>
<td bgcolor="#ff99cc">FF99CC</td>
<td bgcolor="#ff99ff">FF99FF</td>
</tr>
<tr>
<td bgcolor="#ffcc00">FFCC00</td>
<td bgcolor="#ffcc33">FFCC33</td>
<td bgcolor="#ffcc66">FFCC66</td>
<td bgcolor="#ffcc99">FFCC99</td>
<td bgcolor="#ffcccc">FFCCCC</td>
<td bgcolor="#ffccff">FFCCFF</td>
</tr>
<tr>
<td bgcolor="#ffff00">FFFF00</td>
<td bgcolor="#ffff33">FFFF33</td>
<td bgcolor="#ffff66">FFFF66</td>
<td bgcolor="#ffff99">FFFF99</td>
<td bgcolor="#ffffcc">FFFFCC</td>
<td bgcolor="#ffffff">FFFFFF</td>
</tr>
</tbody></table>

# References
