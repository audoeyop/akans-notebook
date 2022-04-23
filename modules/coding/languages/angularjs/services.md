# AngularJS Services
In AngularJS you can make your own service, or use one of the many built-in services.

## What is a Service?
In AngularJS, a service is a function, or object, that is available for, and limited to, your AngularJS application.

AngularJS has about 30 built-in services. One of them is the $location service.

The $location service has methods which return information about the location of the current web page:

**Example**
Use the $location service in a controller:
```
var app = angular.module('myApp', []);
app.controller('customersCtrl', function($scope, $location) {
    $scope.myUrl = $location.absUrl();
});
```
Note that the $location service is passed in to the controller as an argument. In order to use the service in the controller, it must be defined as a dependency.

## Why use Services?
For many services, like the $location service, it seems like you could use objects that are already in the DOM, like the window.location object, and you could, but it would have some limitations, at least for your AngularJS application.

AngularJS constantly supervises your application, and for it to handle changes and events properly, AngularJS prefers that you use the $location service instead of the window.location object.

## The $http Service
The $http service is one of the most common used services in AngularJS applications. The service makes a request to the server, and lets your application handle the response.

**Example**
Use the $http service to request data from the server:
```
var app = angular.module('myApp', []);
app.controller('myCtrl', function($scope, $http) {
  $http.get("welcome.htm").then(function (response) {
    $scope.myWelcome = response.data;
  });
});
```
This example demonstrates a very simple use of the `$http` service. Learn more about the $http service in the AngularJS Http Tutorial.

## The $timeout Service
The $timeout service is AngularJS' version of the window.setTimeout function.

**Example**
Display a new message after two seconds:
```
var app = angular.module('myApp', []);
app.controller('myCtrl', function($scope, $timeout) {
  $scope.myHeader = "Hello World!";
  $timeout(function () {
    $scope.myHeader = "How are you today?";
  }, 2000);
});
```
The $interval Service
The `$interval` service is AngularJS' version of the window.setInterval function.

**Example**
Display the time every second:
```
var app = angular.module('myApp', []);
app.controller('myCtrl', function($scope, $interval) {
  $scope.theTime = new Date().toLocaleTimeString();
  $interval(function () {
    $scope.theTime = new Date().toLocaleTimeString();
  }, 1000);
});
```

## Create Your Own Service
To create your own service, connect your service to the module:

Create a service named `hexafy`:
```
app.service('hexafy', function() {
  this.myFunc = function (x) {
    return x.toString(16);
  }
});
```
To use your custom made service, add it as a dependency when defining the controller:

Use the custom made service named `hexafy` to convert a number into a hexadecimal number:
```
app.controller('myCtrl', function($scope, hexafy) {
  $scope.hex = hexafy.myFunc(255);
});
```

## Use a Custom Service Inside a Filter
Once you have created a service, and connected it to your application, you can use the service in any controller, directive, filter, or even inside other services.

To use the service inside a filter, add it as a dependency when defining the filter:

The service hexafy used in the filter myFormat:
```
app.filter('myFormat',['hexafy', function(hexafy) {
  return function(x) {
    return hexafy.myFunc(x);
  };
}]);
```
You can use the filter when displaying values from an object, or an array:
```
<ul>
  <li ng-repeat="x in counts">{{x | myFormat}}</li>
</ul>
```

# References
https://www.w3schools.com/angular/angular_services.asp
