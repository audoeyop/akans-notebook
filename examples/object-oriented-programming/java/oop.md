# Classes in Java
A class is a blueprint from which individual objects are created.

A class can contain any of the following variable types.

Local variables − Variables defined inside methods, constructors or blocks are called local variables. The variable will be declared and initialized within the method and the variable will be destroyed when the method has completed.

Instance variables − Instance variables are variables within a class but outside any method. These variables are initialized when the class is instantiated. Instance variables can be accessed from inside any method, constructor or blocks of that particular class.

Class variables − Class variables are variables declared within a class, outside any method, with the static keyword.

A class can have any number of methods to access the value of various kinds of methods. In the above example, barking(), hungry() and sleeping() are methods.

Following are some of the important topics that need to be discussed when looking into classes of the Java Language.

# Constructors
A constructor initializes an object when it is created. It has the same name as its class and is syntactically similar to a method. However, constructors have no explicit return type. It can be used for various purposes, including setting default values for variables. Every class has a constructor. If we do not explicitly write a constructor for a class, the Java compiler builds a default constructor for that class.

Each time a new object is created, at least one constructor will be invoked. The main rule of constructors is that they should have the same name as the class. A class can have more than one constructor.

## Parameterized Constructors
Most often, you will need a constructor that accepts one or more parameters. Parameters are added to a constructor in the same way that they are added to a method, just declare them inside the parentheses after the constructor's name.

# Creating an Object
Alass provides the blueprints for objects. So basically, an object is created from a class. In Java, the `new` keyword is used to create new objects.

There are three steps when creating an object from a class −

- Declaration − A variable declaration with a variable name with an object type.
- Instantiation − The 'new' keyword is used to create the object.
- Initialization − The 'new' keyword is followed by a call to a constructor. This call initializes the new object.

# Accessing Instance Variables and Methods
Instance variables and methods are accessed via created objects.

# Static vs. Non-Static
Static methods and variables can be accessed without creating an object of the class, unlike public, which can only be accessed by objects. Class variables and methods are public by default unless otherwise specified by adding profixes like `static`, `private`, etc.

#Modifiers
We divide modifiers into two groups:
- Access Modifiers - controls the access level
- Non-Access Modifiers - do not control access level, but provides other functionality

## Access Modifiers

For classes, you can use either public or default:
- `public` -	The class is accessible by any other class
- `default` -	The class is only accessible by classes in the same package. This is used when you don't specify a modifier.

For attributes, methods and constructors, you can use the one of the following:

- `public`	The code is accessible for all classes
- `private`	The code is only accessible within the declared class
- `default`	The code is only accessible in the same package. This is used when you don't specify a modifier. You will learn more about packages in the Packages chapter
- `protected`	The code is accessible in the same package and subclasses.

# Non-Access Modifiers
For classes, you can use either final or abstract:
- `final` -	The class cannot be inherited by other classes (You will learn more about inheritance in the Inheritance chapter)
- `abstract` -	The class cannot be used to create objects (To access an abstract class, it must be inherited from another class. You will learn more about inheritance and abstraction in the Inheritance and Abstraction chapters)

For attributes and methods, you can use the one of the following:
`final` -	Attributes and methods cannot be overridden/modified
`static` -	Attributes and methods belongs to the class, rather than an object
`abstract` -	Can only be used in an abstract class, and can only be used on methods. The method does not have a body, for example abstract void run();. The body is provided by the subclass (inherited from). You will learn more about inheritance and abstraction in the Inheritance and Abstraction chapters
`transient` -	Attributes and methods are skipped when serializing the object containing them
`synchronized` -	Methods can only be accessed by one thread at a time
`volatile` -	The value of an attribute is not cached thread-locally, and is always read from the "main memory"

# Inheritance
Inheritance can be defined as the process where one class acquires the properties (methods and fields) of another. With the use of inheritance the information is made manageable in a hierarchical order.

The class which inherits the properties of other is known as subclass (derived class, child class) and the class whose properties are inherited is known as superclass (base class, parent class).

`extends` is the keyword used to inherit the properties of a class. Following is the syntax of extends keyword.

A subclass inherits all the members (fields, methods, and nested classes) from its superclass. Constructors are not members, so they are not inherited by subclasses, but the constructor of the superclass can be invoked from the subclass.


# The super keyword
The super keyword is similar to this keyword. Following are the scenarios where the super keyword is used.

It is used to differentiate the members of superclass from the members of subclass, if they have same names.

It is used to invoke the superclass constructor from subclass.

# References
https://www.tutorialspoint.com/java/java_object_classes.htm
