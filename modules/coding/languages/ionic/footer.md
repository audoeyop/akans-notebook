# Ionic Footer

Ionic footer is placed at the bottom of the app screen. Working with footers is almost the same as working with headers.

## Adding Footer
The main class for Ionic footers is bar (the same as header). When you want to add footer to your screens, you need to add bar-footer class to your element after the main bar class. Since we want to use our footer on every screen in the app, we will add it to the body of the index.html file. We will also add title for our footer.
```
<div class = "bar bar-footer">
   <h1 class = "title">Footer</h1>
</div>
```

If you want to style your footer, you just need to add the appropriate color class to it. When you style your elements, you need to add your main element class as a prefix to your color class. Since we are styling a footer bar, the prefix class will be a bar and the color class that we want to use in this example is assertive (red).
```
<div class = "bar bar-footer bar-assertive">
   <h1 class = "title">Footer</h1>
</div>
```

You can use any of the following nine classes to give a color of your choice to your app footer −

|Class	|Description	Result
|---|---
bar-light	|To be used for white color	 
bar-stable	|To be used for light grey color	 
bar-positive	|To be used for blue color	 
bar-calm	|To be used for light blue color	 
bar-balanced	|To be used for green color	 
bar-energized	|To be used for yellow color	 
bar-assertive	|To be used for red color	 
bar-royal	|To be used for violet color	 
bar-dark	|To be used for black color	 

## Footer Elements
Footers can contain elements inside it. Most of the time you will need to add buttons with icons inside a footer.

The first button added will always be in the left corner. The last one will be placed on the right. The buttons in between will be grouped next to the first one on the left side of your footer. In following example, you can also notice that we use the icon class to add icons on top of the buttons.
```
<div class = "bar bar-footer bar-assertive">
   <button class = "button icon ion-navicon"></button>
   <button class = "button icon ion-home"></button>
   <button class = "button icon ion-star"></button>
   <button class = "button icon ion-checkmark-round"></button>
</div>
```
The above code will produce the following screen −

## Ionic Footer Icons
If you want to move your button to the right you can add pull-right class.
```
<div class = "bar bar-footer bar-assertive">
   <button class = "button icon ion-navicon pull-right"></button>
</div>
```

# References
https://www.tutorialspoint.com/ionic/ionic_footer.htm
