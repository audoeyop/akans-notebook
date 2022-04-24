# OOP
Object-oriented programming (OOP) is a way of design based on the three fundamental concepts:

Encapsulation – the ability to package data and functions together into classes
Inheritance – the ability to define new classes based on existing classes in order to obtain reuse and code organization
Polymorphism – the ability to substitute objects of matching interfaces for one another at run-time

# Classes vs Instances
Classes are used to create user-defined data structures. Classes define functions called methods, which identify the behaviors and actions that an object created from the class can perform with its data. An instance is created when a class is instanciated.

When you define a class, you define a blueprint for a data type. This doesn't actually define any data, but it does define what the class name means, that is, what an object of the class will consist of and what operations can be performed on such an object.

# Constructor Methods

# Class vs Instance Properties and Variables
Class methods/properties - accessible via class object. Cannot access properties of a class instance.

Instance methods/properties - accessible by class instances.

Class Default String

# Access Control
Access control can be leveraged to restrict access to class methods and properties. Access levels can include public, private, or protected.

Public Methods − Public methods can be called from anywhere including instances of the class.

Private Methods − Private methods cannot be accessed, or even viewed from outside the class. Only the class methods can access private members.

Protected Methods − A protected method can be invoked only by objects of the defining class and its subclasses. Access is kept within the family.

# Inheritance
Inheritance is when a class inherits behavior from another class. The class that is inheriting behavior is called the subclass and the class it inherits from is called the superclass.

# This/Self Pointer
Every class has a special pointer that points to the object itself. This pointer is typically called is `this` or `self`.

# Super
