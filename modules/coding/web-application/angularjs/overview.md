# AngularJs Overview

AngularJS is an open-source web application framework. It was originally developed in 2009 by Misko Hevery and Adam Abrons. It is now maintained by Google. Its latest version is 1.2.21.

Definition of AngularJS as put by its official documentation is as follows −

AngularJS is a structural framework for dynamic web applications. It lets you use HTML as your template language and lets you extend HTML's syntax to express your application components clearly and succinctly. Its data binding and dependency injection eliminate much of the code you currently have to write. And it all happens within the browser, making it an ideal partner with any server technology.

General Features
The general features of AngularJS are as follows −

AngularJS is a efficient framework that can create Rich Internet Applications (RIA).

AngularJS provides developers an options to write client side applications using JavaScript in a clean Model View Controller (MVC) way.

Applications written in AngularJS are cross-browser compliant. AngularJS automatically handles JavaScript code suitable for each browser.

AngularJS is open source, completely free, and used by thousands of developers around the world. It is licensed under the Apache license version 2.0.

Overall, AngularJS is a framework to build large scale, high-performance, and easyto-maintain web applications.

Core Features
The core features of AngularJS are as follows −

Data-binding − It is the automatic synchronization of data between model and view components.

Scope − These are objects that refer to the model. They act as a glue between controller and view.

Controller − These are JavaScript functions bound to a particular scope.

Services − AngularJS comes with several built-in services such as $http to make a XMLHttpRequests. These are singleton objects which are instantiated only once in app.

Filters − These select a subset of items from an array and returns a new array.

Directives − Directives are markers on DOM elements such as elements, attributes, css, and more. These can be used to create custom HTML tags that serve as new, custom widgets. AngularJS has built-in directives such as ngBind, ngModel, etc.

Templates − These are the rendered view with information from the controller and model. These can be a single file (such as index.html) or multiple views in one page using partials.

Routing − It is concept of switching views.

Model View Whatever − MVW is a design pattern for dividing an application into different parts called Model, View, and Controller, each with distinct responsibilities. AngularJS does not implement MVC in the traditional sense, but rather something closer to MVVM (Model-View-ViewModel). The Angular JS team refers it humorously as Model View Whatever.

Deep Linking − Deep linking allows to encode the state of application in the URL so that it can be bookmarked. The application can then be restored from the URL to the same state.

Dependency Injection − AngularJS has a built-in dependency injection subsystem that helps the developer to create, understand, and test the applications easily.

Concepts
The following diagram depicts some important parts of AngularJS which we will discuss in detail in the subsequent chapters.

AngularJS Concepts
Advantages of AngularJS
The advantages of AngularJS are −

It provides the capability to create Single Page Application in a very clean and maintainable way.

It provides data binding capability to HTML. Thus, it gives user a rich and responsive experience.

AngularJS code is unit testable.

AngularJS uses dependency injection and make use of separation of concerns.

AngularJS provides reusable components.

With AngularJS, the developers can achieve more functionality with short code.

In AngularJS, views are pure html pages, and controllers written in JavaScript do the business processing.

On the top of everything, AngularJS applications can run on all major browsers and smart phones, including Android and iOS based phones/tablets.

Disadvantages of AngularJS
Though AngularJS comes with a lot of merits, here are some points of concern −

Not Secure − Being JavaScript only framework, application written in AngularJS are not safe. Server side authentication and authorization is must to keep an application secure.

Not degradable − If the user of your application disables JavaScript, then nothing would be visible, except the basic page.

AngularJS Directives
The AngularJS framework can be divided into three major parts −

ng-app − This directive defines and links an AngularJS application to HTML.

ng-model − This directive binds the values of AngularJS application data to HTML input controls.

ng-bind − This directive binds the AngularJS application data to HTML tags.

# References
https://www.tutorialspoint.com/angularjs/angularjs_overview.htm
