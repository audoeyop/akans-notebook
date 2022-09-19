# Ionic Colors

Before we start with actual elements available in the Ionic framework, let us have a little understanding on how Ionic makes use of colors for different elements.

## Ionic Color Classes
Ionic framework gives us a set of nine predefined color classes. You can use these colors or you can override it with your own styling.

The following table shows the default set of nine colors provided by Ionic. We will use these colors for styling different Ionic elements in this tutorial. For now, you can check all the colors as shown below −

|Class	|Description	Result
|---|---
light	|To be used for white color	 
stable	|To be used for light grey color	 
positive	|To be used for blue color	 
calm	|To be used for light blue color	 
balanced	|To be used for green color	 
energized	|To be used for yellow color	 
assertive	|To be used for red color	 
royal	|To be used for violet color	 
dark	|To be used for black color

## Ionic Color Usage
Ionic makes use of different classes for each element. For example, a header element will have bar class and a button will have a button class. To simplify the usage, we use different colors by prefixing element class in a color name.

For example, to create a blue color header, we will use a bar-calm as follows −
```
<div class = "bar bar-header bar-calm">
   ...
</div>
```
Similarly, to create a grey color button, we will use button-stable class as follows.
```
<div class = "button button-stable">
   ...
</div>
```
You can also use Ionic color class like any other CSS class. We will now style two paragraphs with a balanced (green) and an energized (yellow) color.
```
<p class = "balanced">Paragraph 1...</p>
<p class = "energized">Paragraph 2...</p>
```
The above code will produce the following screen −

## Ionic Colors
We will discuss in detail in the subsequent chapters, when we create different elements using different classes.

### Customizing Colors with CSS
When you want to change some of the Ionic default colors using CSS, you can do it by editing the lib/css/ionic.css file. In some cases, this approach is not very productive because every element (header, button, footer...) uses its own classes for styling.

Therefore, if you want to change the color of the "light" class to orange, you would need to search through all the elements that use this class and change it. This is useful when you want to change the color of a single element, but not very practical for changing color of all elements because it would use too much time.

### Customizing colors using SASS
SASS (which is the short form of – Syntactically Awesome Style Sheet) provides an easier way to change the color for all the elements at once. If you want to use SASS, open your project in the command window and type −
```
C:\Users\Username\Desktop\tutorialApp> ionic setup sass
```
This will set up SASS for your project. Now you can the change default colors by opening the scss/ionic.app.scss file and then typing in the following code before this line – @import "www/lib/ionic/scss/ionic";

We will change the balanced color to dark blue and the energized color to orange. The two paragraphs that we used above are now dark blue and orange.
```
$balanced: #000066 !default;
$energized: #FFA500 !default;
```
Now, if you use the following example −
```
<p class = "balanced">Paragraph 1...</p>
<p class = "energized">Paragraph 2...</p>
```
The above code will produce the following screen −

### Ionic Colors SCCS
All the Ionic elements that are using these classes will change to dark blue and orange. Take into consideration that you do not need to use Ionic default color classes. You can always style elements the way you want.

**Important Note**

The www/css/style.css file will be removed from the header of the index.html after you install SASS. You will need to link it manually if you still want to use it. Open index.html and then add the following code inside the header.
```
<link href = "css/style.css" rel = "stylesheet">
```

# References
https://www.tutorialspoint.com/ionic/ionic_colors.htm
