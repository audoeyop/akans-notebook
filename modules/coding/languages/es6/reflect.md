# Reflect API

ES6 introduces new features around meta-programming which involves inspecting or modifying the structure of the program, or changing the way things work in the language itself.

Following are the three forms of meta programming −

- Introspection − Introspection means a program gathering information about itself. Some examples of JavaScript operators that are used for introspection are typeof, instanceof etc.

- Self-modification − Self-modification refers to modifying the structure of a program at runtime. It involves accessing or creating new properties at runtime. In other words, self-modification is when some code modifies itself.

- Intercession − refers to code modifying the default behavior of a programming language. Intercession involves modifying semantics of the programming language or adding new constructs to the program at runtime.

ES6 introduces Reflect Application Programming Interface (Reflect API) and Proxy API that supports meta programming.

## Meta Programming with Reflect API

Reflect API in ES6 allows us to inspect, or modify classes, objects, properties, and methods of a program at runtime. The Reflect API provides global Reflect object which has static methods that can be used for introspection. These methods are used to discover low level information about the code. The Reflect API can be used to build automation testing frameworks that examine and introspect program at runtime.

Some commonly used methods of the Reflect object are given below −

**Reflect.apply()**

Calls a target function with arguments as specified by the args parameter

The syntax given herewith is for apply(), where,

- `target` represents the target function to call

- `thisArgument` is the value of this provided for the call to target.

- `argumentsList` is an array-like object specifying the arguments with which target should be called.
```
Reflect.apply(target, thisArgument, argumentsList)
```


The following example defines a function that calculates and returns the area of a rectangle.
```
<script>
   const areaOfRectangle = function(width,height){
      return `area is ${width*height} ${this.units}`
   }
   const thisValue = {
      units:'Centimeters'
   }
   const argsList = [10,20]
   const result = Reflect.apply(areaOfRectangle,thisValue,argsList)

   console.log(result)
</script>
```


The output of the above code will be as mentioned below −
```
area is 200 Centimeters
```

**Reflect.construct()**

Equivalent to calling new target(...args) objects of a class

The syntax given below is for the function construct(), where,

- `target` is the target function to call.

- `argumentsList` is an array-like object specifying the arguments with which target should be called.

- `newTarget` is the constructor whose prototype should be used. This is an optional parameter. If no value is passed to this parameter, its value is `targetparameter`.

```
Reflect.construct(target, argumentsList[, newTarget])
```
The following example creates a class Student with a property fullName. The constructor of the class takes firstName and lastName as parameters. An object of the class Student is created using reflection as shown below.
```
<script>
   class Student{
      constructor(firstName,lastName){
         this.firstName = firstName
         this.lastName = lastName
      }

	  get fullName(){
         return `${this.firstName} : ${this.lastName}`
      }
   }

   const args = ['Mohammad','Mohtashim']
   const s1 = Reflect.construct(Student,args)

   console.log(s1.fullName)

</script>
```
The output of the above code will be as follows −
```
Mohammad : Mohtashim
```

**Reflect.get()**

A function that returns the value of properties.

The syntax for the function get() is given below, where,

- `target` is the target object on which to get the property.

- `propertyKey` is the name of the property to get.

- `Receiver` is the value of this provided for the call to target if a getter is encountered. This is an optional argument.
```
Reflect.get(target, propertyKey[, receiver])
```

The following example creates an instance of the class Student using reflection and fetches the properties of the instance using the Reflect.get() method.
```
<script>
   class Student{
      constructor(firstName,lastName){
         this.firstName = firstName
         this.lastName = lastName
      }

      get fullName(){
         return `${this.firstName} : ${this.lastName}`
      }
   }
   const args = ['Tutorials','Point']
   const s1 = Reflect.construct(Student,args)
   console.log('fullname is ',Reflect.get(s1,'fullName'))

   console.log('firstName is ',Reflect.get(s1,'firstName'))
</script>
```
The output of the above code will be as shown below −
```
fullname is Tutorials : Point
firstName is Tutorials
```

**Reflect.set()**

A function that assigns values to properties. Returns a Boolean that is true if the update was successful.

The syntax which is mentioned below is for the function set(), where,

- `target` is the name of the property to get value to set.

- `propertyKey` is the name of the property to get.

- `Receiver` is The value of this provided for the call to target if a setter is encountered. This is an optional argument.
```
Reflect.set(target, propertyKey, value[, receiver])
```

The following example creates an instance of the class Student using reflection and sets the value of the instance’s properties using the `Reflect.set()` method.
```
<script>
   class Student{
      constructor(firstName,lastName){
         this.firstName = firstName
         this.lastName = lastName
      }
      get fullName(){
         return `${this.firstName} : ${this.lastName}`
      }
   }

   const args = ['Tutorials','']
   const s1 = Reflect.construct(Student,args)
   console.log('fullname is ',Reflect.get(s1,'fullName'))
   //setting value
   Reflect.set(s1,'lastName','Point')
   console.log('fullname is ',Reflect.get(s1,'fullName'))
</script>
```
The output of the above code will be as shown below −
```
fullname is Tutorials :
fullname is Tutorials : Point
```

**Reflect.has()**

The in operator as function. Returns a Boolean indicating whether an own or inherited property exists.

Given below is the syntax for the function has(), where,

- `target` is the target object in which to look for the property.

- `propertyKey` is the name of the property to check.

```
Reflect.has(target, propertyKey)
```
The following example creates an instance of the class Student using reflection and verifies if the properties exist using the Reflect.has() method.
```
<script>
   class Student{
      constructor(firstName,lastName){
         this.firstName = firstName
         this.lastName = lastName
      }
      get fullName(){
         return `${this.firstName} : ${this.lastName}`
      }
   }

   const args = ['Tutorials','Point']
   const s1 = Reflect.construct(Student,args)
   console.log(Reflect.has(s1,'fullName'))
   console.log(Reflect.has(s1,'firstName'))
   console.log(Reflect.has(s1,'lastname'))
</script>
```
The output of the above code will be as mentioned below −
```
true
true
false
```

# References
https://www.tutorialspoint.com/es6/es6_reflect_api.htm
