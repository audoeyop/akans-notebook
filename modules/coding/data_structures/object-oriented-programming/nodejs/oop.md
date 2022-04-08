#Javascript Classes

Classes are a template for creating objects. They encapsulate data with code to work on that data. Classes in JS are built on prototypes but also have some syntax and semantics that are not shared with ES5 class-like semantics.

# Defining classes
Classes are in fact "special functions", and just as you can define function expressions and function declarations, the class syntax has two components: class expressions and class declarations.

#Constructor
The `constructor` method is a special method for creating and initializing an object created with a class. There can only be one special method with the name "constructor" in a class. A SyntaxError will be thrown if the class contains more than one occurrence of a constructor method.

A constructor can use the super keyword to call the constructor of the super class.

# Static methods and properties

Class static initialization blocks allow flexible initialization of class static properties including the evaluation of statements during initialization, and granting access to private scope.

The static keyword defines a static method or property for a class. Static members (properties and methods) are called without instantiating their class and cannot be called through a class instance. **Static methods are often used to create utility functions for an application**, whereas static properties are useful for caches, fixed-configuration, or any other data you don't need to be replicated across instances.

When a static or prototype method is called without a value for this, such as by assigning the method to a variable and then calling it, the this value will be undefined inside the method. This behavior will be the same even if the "use strict" directive isn't present, because code within the class body's syntactic boundary is always executed in strict mode.

# Private Field Declarations
Private fields can be used to restrict access to class properties. They are defined by prefixing a hash `#` before the property. For example `this.#my_property`.

Private fields cannot be accessed from outside of the class; they can only be read or written within the class body. By defining things that are not visible outside of the class, you ensure that your classes' users can't depend on internals, which may change from version to version.

# Class prototype string
Modifying the default string that is printed for a class can be achieved by updating the class' `.prototype.toString` function.
```
BoxClass.prototype.toString = function boxToString() {

  return `(w:${this.width},h:${this.height})`;
};
```
