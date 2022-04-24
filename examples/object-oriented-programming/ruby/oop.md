https://www.tutorialspoint.com/ruby/ruby_object_oriented.htm

Classes are a grouping of methods that exist to construct an object by creating a new instance of the class. Instances are the objects created by a class. Class methods are called on the class itself (hence why in the method declaration, it will always state def self.class_method_name), whereas instance methods are called on a particular instance of the class (these are declared like regular methods: def instance_method_name).

# constructor method
# ------------------
# The initialize method is useful when you want to initialize some class
# variables at the time of object creation. This method may take a list of
# parameters and like any other ruby method it would be preceded by def
# keyword as shown below

# accessor methods
# ----------------
# To make the variables available from outside the class, they must be
# defined within accessor methods, these accessor methods are also known as a
# getter methods. Following example shows the usage of accessor methods

# setter methods
# -----
# Similar to accessor methods, which are used to access the value of the
# variables, Ruby provides a way to set the values of those variables from
# outside of the class using setter methods, which are defined as below

# instance method
# ---------------
# Instance methods are accessible by class instances.

# Class Variables
The class variables is a variable, which is shared between all instances of a class. In other words, there is one instance of the variable and it is accessed by object instances. Class variables are prefixed with two @ characters (@@). A class variable must be initialized within the class definition as shown below.

# Class Methods
A class method is defined using def self.methodname(), which ends with end delimiter and would be called using the class name as classname.methodname as shown in the following example −

# Access Control
Ruby gives you three levels of protection at instance methods level, which may be public, private, or protected. Ruby does not apply any access control over instance and class variables.

Public Methods − Public methods can be called by anyone. Methods are public by default except for initialize, which is always private.

Private Methods − Private methods cannot be accessed, or even viewed from outside the class. Only the class methods can access private members.

Protected Methods − A protected method can be invoked only by objects of the defining class and its subclasses. Access is kept within the family.

to_s Method
The to_s method updates the default text that is return when you attempt to print the raw class instance.

Ruby provides us with the super keyword to call methods earlier in the method lookup path. When you call super from within a method, it searches the method lookup path for a method with the same name, then invokes it. Let's see a quick example of how this works:

# Inheritance
Inheritance is when a class inherits behavior from another class. The class that is inheriting behavior is called the subclass and the class it inherits from is called the superclass.

We use inheritance as a way to extract common behaviors from classes that share that behavior, and move it to a superclass.

attr_accessor - creates method to get & set the attribute value
attr_reader - creates method to get the attribute value
attr_writer - creates method to set the attribute value
