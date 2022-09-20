# jQuery Effects

jQuery provides a trivially simple interface for doing various kind of amazing effects. jQuery methods allow us to quickly apply commonly used effects with a minimum configuration. This tutorial covers all the important jQuery methods to create visual effects.

## Showing and Hiding Elements
The commands for showing and hiding elements are pretty much what we would expect − show() to show the elements in a wrapped set and hide() to hide them.

### Syntax
Here is the simple syntax for show() method −
```
[selector].show( speed, [callback] );
```
Here is the description of all the parameters −

- `speed` − A string representing one of the three predefined speeds ("slow", "normal", or "fast") or the number of milliseconds to run the animation (e.g. 1000).

- `callback` − This optional parameter represents a function to be executed whenever the animation completes; executes once for each element animated against.

Following is the simple syntax for hide() method −
```
[selector].hide( speed, [callback] );
```
Here is the description of all the parameters −

- `speed` − A string representing one of the three predefined speeds ("slow", "normal", or "fast") or the number of milliseconds to run the animation (e.g. 1000).

- `callback` − This optional parameter represents a function to be executed whenever the animation completes; executes once for each element animated against.

**Example**

Consider the following HTML file with a small JQuery coding −
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {

            $("#show").click(function () {
               $(".mydiv").show( 1000 );
            });

            $("#hide").click(function () {
               $(".mydiv").hide( 1000 );
            });

         });
      </script>

      <style>
         .mydiv{
            margin:10px;
            padding:12px;
            border:2px solid #666;
            width:100px;
            height:100px;
         }
      </style>
   </head>

   <body>
      <div class = "mydiv">
         This is a SQUARE
      </div>

      <input id = "hide" type = "button" value = "Hide" />   
      <input id = "show" type = "button" value = "Show" />
   </body>
</html>
```

## Toggling the Elements
jQuery provides methods to toggle the display state of elements between revealed or hidden. If the element is initially displayed, it will be hidden; if hidden, it will be shown.

### Syntax
Here is the simple syntax for one of the toggle() methods −
```
[selector]..toggle([speed][, callback]);
```
Here is the description of all the parameters −

- `speed` − A string representing one of the three predefined speeds ("slow", "normal", or "fast") or the number of milliseconds to run the animation (e.g. 1000).

- `callback` − This optional parameter represents a function to be executed whenever the animation completes; executes once for each element animated against.

**Example**
We can animate any element, such as a simple <div> containing an image −
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $(".clickme").click(function(event){
               $(".target").toggle('slow', function(){
                  $(".log").text('Transition Complete');
               });
            });
         });
      </script>

      <style>
         .clickme{
            margin:10px;
            padding:12px;
            border:2px solid #666;
            width:100px;
            height:50px;
         }
      </style>
   </head>

   <body>
      <div class = "content">
         <div class = "clickme">Click Me</div>
         <div class = "target">
            <img src = "./images/jquery.jpg" alt = "jQuery" />
         </div>
         <div class = "log"></div>
      </div>
   </body>
</html>
```
This will produce following result −

## JQuery Effect Methods
You have seen basic concept of jQuery Effects. Following table lists down all the important methods to create different kind of effects −

- `animate( params, [duration, easing, callback] )` - A function for making custom animations.
```
$("#out").click(function(){
   $("#block").animate({
      width: "70%",
      opacity: 0.4,
      marginLeft: "0.6in",
      fontSize: "3em",
      borderWidth: "10px"
   }, 1500 );
});
```

- `fadeIn( speed, [callback] )` - Fade in all matched elements by adjusting their opacity and firing an optional callback after completion.
```
$("#in").click(function(){
   $(".target").fadeIn( 'slow', function(){
      $(".log").text('Fade In Transition Complete');
   });
});
```

- `fadeOut( speed, [callback] )` - Fade out all matched elements by adjusting their opacity to 0, then setting display to "none" and firing an optional callback after completion.
```
$("#out").click(function(){
   $(".target").fadeOut( 'slow', function(){
      $(".log").text('Fade Out Transition Complete');
   });
});
```

- `fadeTo( speed, opacity, callback )` - Fade the opacity of all matched elements to a specified opacity and firing an optional callback after completion.
```
$("#more").click(function(){
   $(".target").fadeTo( 'slow', 0.7, function(){
      $(".log").text('More Opacity Transition Complete');
   });
});
$("#less").click(function(){
   $(".target").fadeTo( 'slow', 0.2, function(){
      $(".log").text('less Opacity Transition Complete');
   });
});
```
- `hide( )` - Hides each of the set of matched elements if they are shown.
```
$("#hide").click(function () {
   $(".mydiv").hide();
});
```

- `hide( speed, [callback] )` - Hide all matched elements using a graceful animation and firing an optional callback after completion.
```
$("#hide").click(function () {
   $(".mydiv").hide( 100 );
});
```

- `show( )` - Displays each of the set of matched elements if they are hidden.
```
$("#show").click(function () {
   $(".mydiv").show();
});
```
- `show( speed, [callback] )` - Show all matched elements using a graceful animation and firing an optional callback after completion.
```
$("#show").click(function () {
   $(".mydiv").show( 200 );
});
```

- `slideDown( speed, [callback] )` - Reveal all matched elements by adjusting their height and firing an optional callback after completion.
```
$("#down").click(function(){
   $(".target").slideDown( 'slow', function(){
      $(".log").text('Slide Down Transition Complete');
   });
});
```
- `slideToggle( speed, [callback] )` - Toggle the visibility of all matched elements by adjusting their height and firing an optional callback after completion.
```
$("#toggle").click(function(){
   $(".target").slideToggle( 'slow', function(){
      $(".log").text('Toggle Transition Complete');
   });
});
```
- `slideUp( speed, [callback] )` - Hide all matched elements by adjusting their height and firing an optional callback after completion.
```
$("#up").click(function(){
   $(".target").slideUp( 'slow', function(){
      $(".log").text('Slide Up Transition Complete');
   });
});
```
- `stop( [clearQueue, gotoEnd ])` - Stops all the currently running animations on all the specified elements.
```
$("#go").click(function(){
   $(".target").animate({left: '+=100px'}, 2000);
});
$("#stop").click(function(){
   $(".target").stop();
});
```

- `toggle( )` - Toggle displaying each of the set of matched elements.
```
$(document).ready(function() {

    $("#toggle").click(function(){
       $(".target").toggle( );
    });
 });
```

- `toggle( speed, [callback] )` - Toggle displaying each of the set of matched elements using a graceful animation and firing an optional callback after completion.
```
$("#toggle").click(function(){
   $(".target").toggle( 'slow', function(){
      $(".log").text('Toggle Transition Complete');
   });
});
```

- `toggle( switch )` - Toggle displaying each of the set of matched elements based upon the switch (true shows all elements, false hides all elements).
```
$("#false").click(function(){
   $(".target").toggle(false);
});
$("#true").click(function(){
   $(".target").toggle(true);
});
```

- `jQuery.fx.off` - Globally disable all animations.
```
$("#enable").click(function(){
   jQuery.fx.off = false;
});
```

# References
https://www.tutorialspoint.com/jquery/effect-jquery-fx.htm
