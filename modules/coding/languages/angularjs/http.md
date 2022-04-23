# AngularJS AJAX - $http
`$http` is an AngularJS service for reading data from remote servers.

## AngularJS $http Service
The AngularJS $http service makes a request to the server, and returns a response.

Make a simple request to the server, and display the result in a header:
```
<div ng-app="myApp" ng-controller="myCtrl">

<p>Today's welcome message is:</p>
<h1>{{myWelcome}}</h1>

</div>

<script>
var app = angular.module('myApp', []);
app.controller('myCtrl', function($scope, $http) {
  $http.get("welcome.htm")
  .then(function(response) {
    $scope.myWelcome = response.data;
  });
});
</script>
```

## Methods
The example above uses the `.get` method of the $http service.

The `.get` method is a shortcut method of the $http service. There are several shortcut methods:

- .delete()
- .get()
- .head()
- .jsonp()
- .patch()
- .post()
- .put()

The methods above are all shortcuts of calling the $http service:

**Example**
```
var app = angular.module('myApp', []);
app.controller('myCtrl', function($scope, $http) {
  $http({
    method : "GET",
      url : "welcome.htm"
  }).then(function mySuccess(response) {
    $scope.myWelcome = response.data;
  }, function myError(response) {
    $scope.myWelcome = response.statusText;
  });
});
```
The example above executes the `$http` service with an object as an argument. The object is specifying the HTTP method, the url, what to do on success, and what to do on failure.

## Properties
The response from the server is an object with these properties:

- .config the object used to generate the request.
- .data a string, or an object, carrying the response from the server.
- .headers a function to use to get header information.
- .status a number defining the HTTP status.
- .statusText a string defining the HTTP status.

**Example**
```
var app = angular.module('myApp', []);
app.controller('myCtrl', function($scope, $http) {
  $http.get("welcome.htm")
  .then(function(response) {
    $scope.content = response.data;
    $scope.statuscode = response.status;
    $scope.statustext = response.statusText;
  });
});
```

To handle errors, add one more functions to the .then method:

**Example**
```
var app = angular.module('myApp', []);
app.controller('myCtrl', function($scope, $http) {
  $http.get("wrongfilename.htm")
  .then(function(response) {
    // First function handles success
    $scope.content = response.data;
  }, function(response) {
    // Second function handles error
    $scope.content = "Something went wrong";
  });
});
```

## JSON
The data you get from the response is expected to be in JSON format.

JSON is a great way of transporting data, and it is easy to use within AngularJS, or any other JavaScript.

**Example**: On the server we have a file that returns a JSON object containing 3 customers, all wrapped in an array called records.


The ng-repeat directive is perfect for looping through an array:
```
<div ng-app="myApp" ng-controller="customersCtrl">

<ul>
  <li ng-repeat="x in myData">
    {{ x.Name + ', ' + x.Country }}
  </li>
</ul>

</div>

<script>
var app = angular.module('myApp', []);
app.controller('customersCtrl', function($scope, $http) {
  $http.get("customers.php").then(function(response) {
    $scope.myData = response.data.records;
  });
});
</script>
```

JSON data returned:
```
{
  "records": [
    {
      "Name": "Alfreds Futterkiste",
      "City": "Berlin",
      "Country": "Germany"
    },
    {
      "Name": "Ana Trujillo Emparedados y helados",
      "City": "México D.F.",
      "Country": "Mexico"
    },
    {
      "Name": "Antonio Moreno Taquería",
      "City": "México D.F.",
      "Country": "Mexico"
    }
  ]
}
```

Application explained:

The application defines the `customersCtrl` controller, with a `$scope` and `$http` object.

`$http` is an XMLHttpRequest object for requesting external data.

`$http.get()` reads JSON data from https://www.w3schools.com/angular/customers.php.

On success, the controller creates a property, myData, in the scope, with JSON data from the server.

# References
https://www.w3schools.com/angular/angular_http.asp
