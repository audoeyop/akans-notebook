# AngularJS Animations

AngularJS provides animated transitions, with help from CSS.

## What is an Animation?
An animation is when the transformation of an HTML element gives you an illusion of motion.

**Example:** Check the checkbox to hide the DIV:
```
<body ng-app="ngAnimate">

Hide the DIV: <input type="checkbox" ng-model="myCheck">

<div ng-hide="myCheck"></div>

</body>
```

Applications should not be filled with animations as it can affect browser performance and can be distracting, but some animations can make for a better user experience.

## What do I Need?
To make your applications ready for animations, you must include the AngularJS Animate library:
```
<script src="https://ajax.googleapis.com/ajax/libs/angularjs/1.6.9/angular-animate.js"></script>
```
Then you must refer to the ngAnimate module in your application:
```
<body ng-app="ngAnimate">
```
Or if your application has a name, add ngAnimate as a dependency in your application module:

Example
```
<body ng-app="myApp">

<h1>Hide the DIV: <input type="checkbox" ng-model="myCheck"></h1>

<div ng-hide="myCheck"></div>

<script>
var app = angular.module('myApp', ['ngAnimate']);
</script>
```

## What Does ngAnimate Do?

The `ngAnimate` module adds and removes classes.

The `ngAnimate` module does not animate your HTML elements, but when `ngAnimate` notice certain events, like hide or show of an HTML element, the element gets some pre-defined classes which can be used to make animations.

The directives in AngularJS who add/remove classes are:

`ng-show`
`ng-hide`
`ng-class`
`ng-view`
`ng-include`
`ng-repeat`
`ng-if`
`ng-switch`

The `ng-show` and ng-hide directives adds or removes a `ng-hide` class value.

The other directives adds a `ng-enter` class value when they enter the DOM, and a `ng-leave` attribute when they are removed from the DOM.

The `ng-repeat` directive also adds a ng-move class value when the HTML element changes position.

In addition, during the animation, the HTML element will have a set of class values, which will be removed when the animation has finished. Example: the `ng-hide` directive will add these class values:

`ng-animate`
`ng-hide-animate`
`ng-hide-add` (if the element will be hidden)
`ng-hide-remove` (if the element will be showed)
`ng-hide-add-active` (if the element will be hidden)
`ng-hide-remove-active` (if the element will be showed)
