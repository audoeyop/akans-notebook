# AngularJS Includes
With AngularJS, you can include HTML from an external file.

## AngularJS Includes
With AngularJS, you can include HTML content using the ng-include directive:
```
<body ng-app="">

<div ng-include="'myFile.htm'"></div>

</body>
```

## Include AngularJS Code
The HTML files you include with the ng-include directive, can also contain AngularJS code:

myTable.htm:
```
<table>
  <tr ng-repeat="x in names">
    <td>{{ x.Name }}</td>
    <td>{{ x.Country }}</td>
  </tr>
</table>
```
Include the file "myTable.htm" in your web page, and all AngularJS code will be executed, even the code inside the included file:
```
<body>

<div ng-app="myApp" ng-controller="customersCtrl">
  <div ng-include="'myTable.htm'"></div>
</div>

<script>
var app = angular.module('myApp', []);
app.controller('customersCtrl', function($scope, $http) {
  $http.get("customers.php").then(function (response) {
    $scope.names = response.data.records;
  });
});
</script>
```

## Include Cross Domains
By default, the ng-include directive does not allow you to include files from other domains.

To include files from another domain, you can add a whitelist of legal files and/or domains in the config function of your application:

```
<body ng-app="myApp">

<div ng-include="'https://tryit.w3schools.com/angular_include.php'"></div>

<script>
var app = angular.module('myApp', [])
app.config(function($sceDelegateProvider) {
  $sceDelegateProvider.resourceUrlWhitelist([
    'https://tryit.w3schools.com/**'
  ]);
});
</script>

</body>
```

# References
https://www.w3schools.com/angular/angular_includes.asp
