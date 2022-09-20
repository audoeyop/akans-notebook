# jQuery Event Handling

We have the ability to create dynamic web pages by using events. Events are actions that can be detected by your Web Application.

Following are the examples events −

- A mouse click
- A web page loading
- Taking mouse over an element
- Submitting an HTML form
- A keystroke on your keyboard, etc.

When these events are triggered, you can then use a custom function to do pretty much whatever you want with the event. These custom functions call Event Handlers.

## Binding Event Handlers
Using the jQuery Event Model, we can establish event handlers on DOM elements with the bind() method as follows −
```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $('div').bind('click', function( event ){
               alert('Hi there!');
            });
         });
      </script>

      <style>
         .div{ margin:10px;padding:12px; border:2px solid #666; width:60px;}
      </style>
   </head>

   <body>
      <p>Click on any square below to see the result:</p>

      <div class = "div" style = "background-color:blue;">ONE</div>
      <div class = "div" style = "background-color:green;">TWO</div>
      <div class = "div" style = "background-color:red;">THREE</div>
   </body>
</html>
```
This code will cause the division element to respond to the click event; when a user clicks inside this division thereafter, the alert will be shown.

The full syntax of the bind() command is as follows −
```
selector.bind( eventType[, eventData], handler)
```
Following is the description of the parameters −

- `eventType` − A string containing a JavaScript event type, such as click or submit. Refer to the next section for a complete list of event types.

- `eventData` − This is optional parameter is a map of data that will be passed to the event handler.

- `handler` − A function to execute each time the event is triggered.

## Removing Event Handlers

Typically, once an event handler is established, it remains in effect for the remainder of the life of the page. There may be a need when you would like to remove event handler.

jQuery provides the unbind() command to remove an exiting event handler. The syntax of unbind() is as follows −
```
selector.unbind(eventType, handler)

or

selector.unbind(eventType)
```
Following is the description of the parameters −

eventType − A string containing a JavaScript event type, such as click or submit. Refer to the next section for a complete list of event types.

handler − If provided, identifies the specific listener that's to be removed.

## Event Types
The following are cross platform and recommended event types which you can bind using JQuery −

`blur` - Occurs when the element loses focus.

`change` - Occurs when the element changes.

`click` - Occurs when a mouse click.

`dblclick` - Occurs when a mouse double-click.

`error` - Occurs when there is an error in loading or unloading etc.

`focus` - Occurs when the element gets focus.

`keydown` - Occurs when key is pressed.

`keypress` - Occurs when key is pressed and released.

`keyup` - Occurs when key is released.

`load` - Occurs when document is loaded.

`mousedown` - Occurs when mouse button is pressed.

`mouseenter` - Occurs when mouse enters in an element region.

`mouseleave` - Occurs when mouse leaves an element region.

`mousemove` - Occurs when mouse pointer moves.

`mouseout` - Occurs when mouse pointer moves out of an element.

`mouseover` - Occurs when mouse pointer moves over an element.

`mouseup` - Occurs when mouse button is released.

`resize` - Occurs when window is resized.

`scroll` - Occurs when window is scrolled.

`select` - Occurs when a text is selected.

`submit` - Occurs when form is submitted.

`unload` - Occurs when documents is unloaded.

## The Event Object
The callback function takes a single parameter; when the handler is called the JavaScript event object will be passed through it.

The event object is often unnecessary and the parameter is omitted, as sufficient context is usually available when the handler is bound to know exactly what needs to be done when the handler is triggered, however there are certain attributes which you would need to be accessed.

## The Event Attributes
The following event properties/attributes are available and safe to access in a platform independent manner −

`altKey` - Set to true if the Alt key was pressed when the event was triggered, false if not. The Alt key is labeled Option on most Mac keyboards.

`ctrlKey` - Set to true if the Ctrl key was pressed when the event was triggered, false if not.

`data` - The value, if any, passed as the second parameter to the bind() command when the handler was established.

`keyCode` - For keyup and keydown events, this returns the key that was pressed.

`metaKey` - Set to true if the Meta key was pressed when the event was triggered, false if not. The Meta key is the Ctrl key on PCs and the Command key on Macs.

`pageX` - For mouse events, specifies the horizontal coordinate of the event relative from the page origin.

`pageY` - For mouse events, specifies the vertical coordinate of the event relative from the page origin.

`relatedTarget` - For some mouse events, identifies the element that the cursor left or entered when the event was triggered.

`screenX` - For mouse events, specifies the horizontal coordinate of the event relative from the screen origin.

`screenY` - For mouse events, specifies the vertical coordinate of the event relative from the screen origin.

`shiftKey` - Set to true if the Shift key was pressed when the event was triggered, false if not.

`target` - Identifies the element for which the event was triggered.

`timeStamp` - The timestamp (in milliseconds) when the event was created.

`type` - For all events, specifies the type of event that was triggered (for example, click).

`which` - For keyboard events, specifies the numeric code for the key that caused the event, and for mouse events, specifies which button was pressed (1 for left, 2 for middle, 3 for right).

```
<html>
   <head>
      <title>The jQuery Example</title>
      <script type = "text/javascript"
         src = "https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js">
      </script>

      <script type = "text/javascript" language = "javascript">
         $(document).ready(function() {
            $('div').bind('click', function( event ){
               alert('Event type is ' + event.type);
               alert('pageX : ' + event.pageX);
               alert('pageY : ' + event.pageY);
               alert('Target : ' + event.target.innerHTML);
            });
         });
      </script>

      <style>
         .div{ margin:10px;padding:12px; border:2px solid #666; width:60px;}
      </style>
   </head>

   <body>
      <p>Click on any square below to see the result:</p>

      <div class = "div" style = "background-color:blue;">ONE</div>
      <div class = "div" style = "background-color:green;">TWO</div>
      <div class = "div" style = "background-color:red;">THREE</div>
   </body>
</html>
```

## The Event Methods
There is a list of methods which can be called on an Event Object −

- `preventDefault()` - Prevents the browser from executing the default action.

- `isDefaultPrevented()` - Returns whether event.preventDefault() was ever called on this event object.

- `stopPropagation()` - - Stops the bubbling of an event to parent elements, preventing any parent handlers from being notified of the event.

- `isPropagationStopped()` - Returns whether event.stopPropagation() was ever called on this event object.

- `stopImmediatePropagation()` - Stops the rest of the handlers from being executed.

- `isImmediatePropagationStopped()` - Returns whether event.stopImmediatePropagation() was ever called on this event object.

## Event Manipulation Methods
Following table lists down important event-related methods −

- `bind( type, [data], fn )` - Binds a handler to one or more events (like click) for each matched element. Can also bind custom events.

- `off( events [, selector ] [, handler(eventObject) ] )` - This does the opposite of live, it removes a bound live event.

- `hover( over, out )` - Simulates hovering for example moving the mouse on, and off, an object.

- `on( events [, selector ] [, data ], handler )` - Binds a handler to an event (like click) for all current − and future − matched element. Can also bind custom events.

- `one( type, [data], fn )` - Binds a handler to one or more events to be executed once for each matched element.

- `ready( fn )` - Binds a function to be executed whenever the DOM is ready to be traversed and manipulated.

- `trigger( event, [data] )` - Trigger an event on every matched element.

- `triggerHandler( event, [data] )` - Triggers all bound event handlers on an element.

- `unbind( [type], [fn] )` - This does the opposite of bind, it removes bound events from each of the matched elements.

## Event Helper Methods

jQuery also provides a set of event helper functions which can be used either to trigger an event to bind any event types mentioned above.

## Trigger Methods
Following is an example which would triggers the blur event on all paragraphs −
```
$("p").blur();
```

## Binding Methods
Following is an example which would bind a click event on all the <div> −
```
$("div").click( function () {
   // do something here
});
```

Here is a complete list of all the support methods provided by jQuery −
<table class="table table-bordered">
<tbody><tr>
<th width="10%"></th>
<th style="text-align:center;">Method &amp; Description</th>
</tr>
<tr>
<td class="ts">1</td>
<td><p><b>blur( )</b></p>
<p>Triggers the blur event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">2</td>
<td><p><b>blur( fn )</b></p>
<p>Bind a function to the blur event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">3</td>
<td><p><b>change( )</b></p>
<p>Triggers the change event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">4</td>
<td><p><b>change( fn )</b></p>
<p>Binds a function to the change event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">5</td>
<td><p><b>click( )</b></p>
<p>Triggers the click event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">6</td>
<td><p><b>click( fn )</b></p>
<p>Binds a function to the click event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">7</td>
<td><p><b>dblclick( )</b></p>
<p>Triggers the dblclick event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">8</td>
<td><p><b>dblclick( fn )</b></p>
<p>Binds a function to the dblclick event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">9</td>
<td><p><b>error( )</b></p>
<p>Triggers the error event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">10</td>
<td><p><b>error( fn )</b></p>
<p>Binds a function to the error event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">11</td>
<td><p><b>focus( )</b></p>
<p>Triggers the focus event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">12</td>
<td><p><b>focus( fn )</b></p>
<p>Binds a function to the focus event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">13</td>
<td><p><b>keydown( )</b></p>
<p>Triggers the keydown event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">14</td>
<td><p><b>keydown( fn )</b></p>
<p>Bind a function to the keydown event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">15</td>
<td><p><b>keypress( )</b></p>
<p>Triggers the keypress event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">16</td>
<td><p><b>keypress( fn )</b></p>
<p>Binds a function to the keypress event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">17</td>
<td><p><b>keyup( )</b></p>
<p>Triggers the keyup event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">18</td>
<td><p><b>keyup( fn )</b></p>
<p>Bind a function to the keyup event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">19</td>
<td><p><b>load( fn )</b></p>
<p>Binds a function to the load event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">20</td>
<td><p><b>mousedown( fn )</b></p>
<p>Binds a function to the mousedown event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">21</td>
<td><p><b>mouseenter( fn )</b></p>
<p>Bind a function to the mouseenter event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">22</td>
<td><p><b>mouseleave( fn )</b></p>
<p>Bind a function to the mouseleave event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">23</td>
<td><p><b>mousemove( fn )</b></p>
<p>Bind a function to the mousemove event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">24</td>
<td><p><b>mouseout( fn )</b></p>
<p>Bind a function to the mouseout event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">25</td>
<td><p><b>mouseover( fn )</b></p>
<p>Bind a function to the mouseover event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">26</td>
<td><p><b>mouseup( fn )</b></p>
<p>Bind a function to the mouseup event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">27</td>
<td><p><b>resize( fn )</b></p>
<p>Bind a function to the resize event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">28</td>
<td><p><b>scroll( fn )</b></p>
<p>Bind a function to the scroll event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">29</td>
<td><p><b>select( )</b></p>
<p>Trigger the select event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">30</td>
<td><p><b>select( fn )</b></p>
<p>Bind a function to the select event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">31</td>
<td><p><b>submit( )</b></p>
<p>Trigger the submit event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">32</td>
<td><p><b>submit( fn )</b></p>
<p>Bind a function to the submit event of each matched element.</p></td>
</tr>
<tr>
<td class="ts">33</td>
<td><p><b>unload( fn )</b></p>
<p>Binds a function to the unload event of each matched element.</p></td>
</tr>
</tbody></table>

# References
https://www.tutorialspoint.com/jquery/jquery-events.htm
