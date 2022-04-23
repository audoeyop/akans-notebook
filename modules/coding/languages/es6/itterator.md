# ES6 Itterators

Introduction to Iterator
------------------------

Iterator is an object which allows us to access a collection of objects one at a time.

The following built-in types are by default iterable -

-   String
-   Array
-   Map
-   Set

An object is considered iterable, if the object implements a function whose key is [Symbol.iterator] and returns an iterator. A for...of loop can be used to iterate a collection.

### Example

The following example declares an array, marks, and iterates through it by using a for..of loop.

```
<script>
   let marks = [10,20,30]
   //check iterable using for..of
   for(let m of marks){
      console.log(m);
   }
</script>
```
The output of the above code will be as given below -
```
10
20
30
```
### Example

The following example declares an array, marks and retrieves an iterator object. The [`Symbol.iterator]()` can be used to retrieve an iterator object. The next() method of the iterator returns an object with '`value`' and '`done`' properties . '`done`' is Boolean and returns true after reading all items in the collection.

```
<script>
   let marks = [10,20,30]
   let iter = marks[Symbol.iterator]();
   console.log(iter.next())
   console.log(iter.next())
   console.log(iter.next())
   console.log(iter.next())
</script>
```

The output of the above code will be as shown below -
```
{value: 10, done: false}
{value: 20, done: false}
{value: 30, done: false}
{value: undefined, done: true}
```

Custom Iterable
---------------

Certain types in JavaScript are iterable (E.g. Array, Map etc.) while others are not (E.g. Class). JavaScript types which are not iterable by default can be iterated by using the iterable protocol.

The following example defines a class named `CustomerList` which stores multiple customer objects as an array. Each customer object has firstName and lastName properties.

To make this class iterable, the class must implement `[Symbol.iterator]()` function. This function returns an iterator object. The iterator object has a function `next` which returns an object `{value:'customer',done:true/false}`.

```
<script>
   //user defined iterable
   class CustomerList {
      constructor(customers){
         //adding customer objects to an array
         this.customers = [].concat(customers)
      }
      //implement iterator function
      [Symbol.iterator](){
         let count=0;
         let customers = this.customers
         return {
            next:function(){
            //retrieving a customer object from the array
               let customerVal = customers[count];
               count+=1;
               if(count<=customers.length){
                  return {
                     value:customerVal,
                     done:false
                  }
               }
               //return true if all customer objects are iterated
               return {done:true}
            }
         }
      }
   }
   //create customer objects
   let c1={
      firstName:'Sachin',
      lastName:'Tendulkar'
   }
   let c2={
      firstName:'Rahul',
      lastName:'Dravid'
   }
   //define a customer array and initialize it let customers=[c1,c2]
   //pass customers to the class' constructor
   let customersObj = new CustomerList(customers);
   //iterating using for..of
   for(let c of customersObj){
      console.log(c)
   }
   //iterating using the next() method
   let iter = customersObj[Symbol.iterator]();
   console.log(iter.next())
   console.log(iter.next())
   console.log(iter.next())
</script>
```

The output of the above code will be as follows -
```
{firstName: "Sachin", lastName: "Tendulkar"}
{firstName: "Rahul", lastName: "Dravid"}
{
   done: false
   value: {
      firstName: "Sachin",
      lastName: "Tendulkar"
   }
}
{
   done: false
   value: {
      firstName: "Rahul",
      lastName: "Dravid"
   }
}
{done: true}
```
Generator
---------

Prior to ES6, functions in JavaScript followed a run-to completion model. ES6 introduces functions known as Generator which can stop midway and then continue from where it stopped.

A generator prefixes the function name with an asterisk * character and contains one or more yield statements. The yield keyword returns an iterator object.

### Syntax
```
function * generator_name() {
   yield value1
   ...
   yield valueN
}
```
### Example

The example defines a generator function getMarks with three yield statements. Unlike normal functions, the generator function getMarks(),when invoked, doesn't execute the function but returns an iterator object that helps you to execute code inside the generator function.

On the first call to markIter.next() operations in the beginning would run and the yield statement pauses the execution of the generator. Subsequent calls to the markIter.next() will resume the generator function until the next yield expression.

```
<script>
   //define generator function
   function * getMarks(){
      console.log("Step 1")
      yield 10
      console.log("Step 2")
      yield 20
      console.log("Step 3")
      yield 30
      console.log("End of function")
   }
   //return an iterator object
      let markIter = getMarks()
   //invoke statements until first yield
      console.log(markIter.next())
   //resume execution after the last yield until second yield expression
      console.log(markIter.next())
   //resume execution after last yield until third yield expression
      console.log(markIter.next())
      console.log(markIter.next()) // iteration is completed;no value is returned
</script>
```

The output of the above code will be as mentioned below -
```
Step 1
{value: 10, done: false}
Step 2
{value: 20, done: false}
Step 3
{value: 30, done: false}
End of function
{value: undefined, done: true}
```
### Example

The following example creates an infinite sequence of even numbers through

* evenNumberGenerator generator function.

We can iterate through all even numbers by using next() or using for of loop as shown below

```
<script>
   function * evenNumberGenerator(){
      let num = 0;
      while(true){
         num+=2
         yield num
      }
   }
   // display first two elements
   let iter = evenNumberGenerator();
   console.log(iter.next())
   console.log(iter.next())
   //using for of to iterate till 12
   for(let n of evenNumberGenerator()){
      if(n==12)break;
      console.log(n);
   }
</script>
```
```
The output of the above code will be as follows -

{value: 2, done: false}
{value: 4, done: false}
2
4
6
8
10
```

# References
https://www.tutorialspoint.com/es6/es6_iterator.htm
