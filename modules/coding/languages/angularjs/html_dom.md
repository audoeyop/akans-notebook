# AngularJS HTML DOM

AngularJS has directives for binding application data to the attributes of HTML DOM elements.

## The ng-disabled Directive
The `ng-disabled` directive binds AngularJS application data to the disabled attribute of HTML elements.
```
<div ng-app="" ng-init="mySwitch=true">

<p>
<button ng-disabled="mySwitch">Click Me!</button>
</p>

<p>
<input type="checkbox" ng-model="mySwitch">Button
</p>

<p>
{{ mySwitch }}
</p>

</div>
```
Application explained:

- The ng-disabled directive binds the application data mySwitch to the HTML button's disabled attribute.

- The ng-model directive binds the value of the HTML checkbox element to the value of mySwitch.

If the value of `mySwitch` evaluates to `true`, the button will be disabled:
```
<p>
<button disabled>Click Me!</button>
</p>
```
If the value of `mySwitch` evaluates to `false`, the button will not be disabled:
```
<p>
<button>Click Me!</button>
</p>
```

## The ng-show Directive

The `ng-show` directive shows or hides an HTML element.
```
<div ng-app="">

<p ng-show="true">I am visible.</p>

<p ng-show="false">I am not visible.</p>

</div>
```

The `ng-show` directive shows (or hides) an HTML element based on the value of `ng-show`.

You can use any expression that evaluates to `true` or `false`:
```
<div ng-app="" ng-init="hour=13">

<p ng-show="hour > 12">I am visible.</p>

</div>
```
In the next chapter, there are more examples, using the click of a button to hide HTML elements.

## The ng-hide Directive
The ng-hide directive hides or shows an HTML element.
```
<div ng-app="">

<p ng-hide="true">I am not visible.</p>

<p ng-hide="false">I am visible.</p>

</div>
```

# References
https://www.w3schools.com/angular/angular_htmldom.asp
