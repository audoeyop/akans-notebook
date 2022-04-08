# AngularJS Model View Controller

Model View Controller or MVC as it is popularly called, is a software design pattern for developing web applications. A Model View Controller pattern is made up of the following three parts −

Model − It is the lowest level of the pattern responsible for maintaining data.

View − It is responsible for displaying all or a portion of the data to the user.

Controller − It is a software Code that controls the interactions between the Model and View.

MVC is popular because it isolates the application logic from the user interface layer and supports separation of concerns. The controller receives all requests for the application and then works with the model to prepare any data needed by the view. The view then uses the data prepared by the controller to generate a final presentable response. The MVC abstraction can be graphically represented as follows.

AngularJS MVC
The Model
The model is responsible for managing application data. It responds to the request from view and to the instructions from controller to update itself.

The View
A presentation of data in a particular format, triggered by the controller's decision to present the data. They are script-based template systems such as JSP, ASP, PHP and very easy to integrate with AJAX technology.

The Controller
The controller responds to user input and performs interactions on the data model objects. The controller receives input, validates it, and then performs business operations that modify the state of the data model.

AngularJS is a MVC based framework. In the coming chapters, we will see how AngularJS uses MVC methodology.

# References
https://www.tutorialspoint.com/angularjs/angularjs_mvc_architecture.htm
