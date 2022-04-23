# AngularJS Select Boxes
AngularJS lets you create dropdown lists based on items in an array, or an object.

## Creating a Select Box Using ng-options
If you want to create a dropdown list, based on an object or an array in AngularJS, you should use the ng-options directive:
```
<div ng-app="myApp" ng-controller="myCtrl">

<select ng-model="selectedName" ng-options="x for x in names">
</select>

</div>

<script>
var app = angular.module('myApp', []);
app.controller('myCtrl', function($scope) {
  $scope.names = ["Emil", "Tobias", "Linus"];
});
</script>
```

# ng-options vs ng-repeat

You can also use the `ng-repeat` directive to make the same dropdown list:
```
<select>
  <option ng-repeat="x in names">{{x}}</option>
</select>
```
Because the `ng-repeat` directive repeats a block of HTML code for each item in an array, it can be used to create options in a dropdown list, but the `ng-options` directive was made especially for filling a dropdown list with options.

**What Do I Use?**
You can use both the `ng-repeat` directive and the `ng-options` directive:

Assume you have an array of objects:
```
$scope.cars = [
  {model : "Ford Mustang", color : "red"},
  {model : "Fiat 500", color : "white"},
  {model : "Volvo XC90", color : "black"}
];
```

Using `ng-repeat`:
```
<select ng-model="selectedCar">
  <option ng-repeat="x in cars" value="{{x.model}}">{{x.model}}</option>
</select>

<h1>You selected: {{selectedCar}}</h1>
```
When using the value as an object, use `ng-value` insead of `value`:

Using ng-repeat as an object:
```
<select ng-model="selectedCar">
  <option ng-repeat="x in cars" ng-value="{{x}}">{{x.model}}</option>
</select>

<h1>You selected a {{selectedCar.color}} {{selectedCar.model}}</h1>
```

Using `ng-options`:
```
<select ng-model="selectedCar" ng-options="x.model for x in cars">
</select>


<h1>You selected: {{selectedCar.model}}</h1>
<p>Its color is: {{selectedCar.color}}</p>
```
When the selected value is an object, it can hold more information, and your application can be more flexible.

We will use the `ng-options` directive in this tutorial.

## The Data Source as an Object
In the previous examples the data source was an array, but we can also use an object.

Assume you have an object with key-value pairs:
```
$scope.cars = {
  car01 : "Ford",
  car02 : "Fiat",
  car03 : "Volvo"
};
```
The expression in the `ng-options` attribute is a bit different for objects:

Example
Using an object as the data source, `x` represents the key, and `y` represents the value:
```
<select ng-model="selectedCar" ng-options="x for (x, y) in cars">
</select>

<h1>You selected: {{selectedCar}}</h1>
```
The selected value will always be the value in a key-value pair.

The value in a key-value pair can also be an object:

The selected value will still be the value in a key-value pair, only this time it is an object:
```
$scope.cars = {
  car01 : {brand : "Ford", model : "Mustang", color : "red"},
  car02 : {brand : "Fiat", model : "500", color : "white"},
  car03 : {brand : "Volvo", model : "XC90", color : "black"}
};
```
The options in the dropdown list does not have to be the key in a key-value pair, it can also be the value, or a property of the value object:
```
<select ng-model="selectedCar" ng-options="y.brand for (x, y) in cars">
</select>
```

# References
https://www.w3schools.com/angular/angular_select.asp
