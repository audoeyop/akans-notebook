# AngularJS New Application

Before creating actual Hello World ! application using AngularJS, let us see the parts of a AngularJS application. An AngularJS application consists of following three important parts −

ng-app − This directive defines and links an AngularJS application to HTML.

ng-model − This directive binds the values of AngularJS application data to HTML input controls.

ng-bind − This directive binds the AngularJS Application data to HTML tags.

Creating AngularJS Application
Step 1: Load framework
Being a pure JavaScript framework, it can be added using <Script> tag.

<script
   src = "https://ajax.googleapis.com/ajax/libs/angularjs/1.3.14/angular.min.js">
</script>
Step 2: Define AngularJS application using ng-app directive
<div ng-app = "">
   ...
</div>
Step 3: Define a model name using ng-model directive
<p>Enter your Name: <input type = "text" ng-model = "name"></p>
Step 4: Bind the value of above model defined using ng-bind directive
<p>Hello <span ng-bind = "name"></span>!</p>
Executing AngularJS Application
Use the above-mentioned three steps in an HTML page.

testAngularJS.htm
Live Demo
<html>
   <head>
      <title>AngularJS First Application</title>
   </head>

   <body>
      <h1>Sample Application</h1>

      <div ng-app = "">
         <p>Enter your Name: <input type = "text" ng-model = "name"></p>
         <p>Hello <span ng-bind = "name"></span>!</p>
      </div>

      <script src = "https://ajax.googleapis.com/ajax/libs/angularjs/1.3.14/angular.min.js">
      </script>

   </body>
</html>
Output
Open the file testAngularJS.htm in a web browser. Enter your name and see the result.


How AngularJS Integrates with HTML
The ng-app directive indicates the start of AngularJS application.

The ng-model directive creates a model variable named name, which can be used with the HTML page and within the div having ng-app directive.

The ng-bind then uses the name model to be displayed in the HTML <span> tag whenever user enters input in the text box.

Closing</div> tag indicates the end of AngularJS application.

# References
https://www.tutorialspoint.com/angularjs/angularjs_first_application.htm
