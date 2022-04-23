# AngularJS Routing
The ngRoute module helps your application to become a Single Page Application.

## What is Routing in AngularJS?
If you want to navigate to different pages in your application, but you also want the application to be a SPA (Single Page Application), with no page reloading, you can use the ngRoute module.

The `ngRoute` module routes your application to different pages without reloading the entire application.

Example:
Navigate to "red.htm", "green.htm", and "blue.htm":
```
<body ng-app="myApp">

<p><a href="#/!">Main</a></p>

<a href="#!red">Red</a>
<a href="#!green">Green</a>
<a href="#!blue">Blue</a>

<div ng-view></div>

<script>
var app = angular.module("myApp", ["ngRoute"]);
app.config(function($routeProvider) {
  $routeProvider
  .when("/", {
    templateUrl : "main.htm"
  })
  .when("/red", {
    templateUrl : "red.htm"
  })
  .when("/green", {
    templateUrl : "green.htm"
  })
  .when("/blue", {
    templateUrl : "blue.htm"
  });
});
</script>
</body>
```

## What do I Need?
To make your applications ready for routing, you must include the AngularJS Route module:
```
<script src="https://ajax.googleapis.com/ajax/libs/angularjs/1.6.9/angular-route.js"></script>
```
Then you must add the ngRoute as a dependency in the application module:
```
var app = angular.module("myApp", ["ngRoute"]);
```
Now your application has access to the route module, which provides the $routeProvider.

Use the `$routeProvider` to configure different routes in your application:
```
app.config(function($routeProvider) {
  $routeProvider
  .when("/", {
    templateUrl : "main.htm"
  })
  .when("/red", {
    templateUrl : "red.htm"
  })
  .when("/green", {
    templateUrl : "green.htm"
  })
  .when("/blue", {
    templateUrl : "blue.htm"
  });
});
```

## Where Does it Go?
Your application needs a container to put the content provided by the routing.

This container is the `ng-view` directive.

There are three different ways to include the `ng-view` directive in your application:

Example:
```
<div ng-view></div>
```
Example:
```
<ng-view></ng-view>
```
Example:
```
<div class="ng-view"></div>
```
Applications can only have one `ng-view` directive, and this will be the placeholder for all views provided by the route.

## $routeProvider
With the `$routeProvider` you can define what page to display when a user clicks a link.

Example:
Define a `$routeProvider`:
```
var app = angular.module("myApp", ["ngRoute"]);
app.config(function($routeProvider) {
  $routeProvider
  .when("/", {
    templateUrl : "main.htm"
  })
  .when("/london", {
    templateUrl : "london.htm"
  })
  .when("/paris", {
    templateUrl : "paris.htm"
  });
});
```
Define the `$routeProvider` using the config method of your application. Work registered in the config method will be performed when the application is loading.

## Controllers
With the $routeProvider you can also define a controller for each "view".

Example:

Add controllers:
```
var app = angular.module("myApp", ["ngRoute"]);
app.config(function($routeProvider) {
  $routeProvider
  .when("/", {
    templateUrl : "main.htm"
  })
  .when("/london", {
    templateUrl : "london.htm",
    controller : "londonCtrl"
  })
  .when("/paris", {
    templateUrl : "paris.htm",
    controller : "parisCtrl"
  });
});
app.controller("londonCtrl", function ($scope) {
  $scope.msg = "I love London";
});
app.controller("parisCtrl", function ($scope) {
  $scope.msg = "I love Paris";
});
```
The "london.htm" and "paris.htm" are normal HTML files, which you can add AngularJS expressions as you would with any other HTML sections of your AngularJS application.

The files looks like this:

london.htm
```
<h1>London</h1>
<h3>London is the capital city of England.</h3>
<p>It is the most populous city in the United Kingdom, with a metropolitan area of over 13 million inhabitants.</p>
<p>{{msg}}</p>
```

paris.htm
```
<h1>Paris</h1>
<h3>Paris is the capital city of France.</h3>
<p>The Paris area is one of the largest population centers in Europe, with more than 12 million inhabitants.</p>
<p>{{msg}}</p>
```

## Template
In the previous examples we have used the templateUrl property in the $routeProvider.when method.

You can also use the template property, which allows you to write HTML directly in the property value, and not refer to a page.

Example:
Write templates:
```
var app = angular.module("myApp", ["ngRoute"]);
app.config(function($routeProvider) {
  $routeProvider
  .when("/", {
    template : "<h1>Main</h1><p>Click on the links to change this content</p>"
  })
  .when("/banana", {
    template : "<h1>Banana</h1><p>Bananas contain around 75% water.</p>"
  })
  .when("/tomato", {
    template : "<h1>Tomato</h1><p>Tomatoes contain around 95% water.</p>"
  });
});
```

# The otherwise method
In the previous examples we have used the when method of the `$routeProvider`.

You can also use the otherwise method, which is the default route when none of the others get a match.

Example:
If neither the "Banana" nor the "Tomato" link has been clicked, let them know:
```
var app = angular.module("myApp", ["ngRoute"]);
app.config(function($routeProvider) {
  $routeProvider
  .when("/banana", {
    template : "<h1>Banana</h1><p>Bananas contain around 75% water.</p>"
  })
  .when("/tomato", {
    template : "<h1>Tomato</h1><p>Tomatoes contain around 95% water.</p>"
  })
  .otherwise({
    template : "<h1>None</h1><p>Nothing has been selected</p>"
  });
});
```

# References
https://www.w3schools.com/angular/angular_routing.asp
