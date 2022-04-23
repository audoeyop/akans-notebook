# ES6 Collections

ES6 introduces two new data structures: Maps and Sets.

-   Maps - This data structure enables mapping a key to a value.

-   Sets - Sets are similar to arrays. However, sets do not encourage duplicates.

Maps
----

The Map object is a simple key/value pair. Keys and values in a map may be primitive or objects.

Following is the syntax for the same.
```
new Map([iterable])
```
The parameter iterable represents any iterable object whose elements comprise of a key/value pair. Maps are ordered, i.e. they traverse the elements in the order of their insertion.

### Map Properties

**Map.prototype.size**

This property returns the number of key/value pairs in the Map object.

Example
```
var myMap = new Map();
myMap.set("J", "john");
myMap.set("M", "mary");
myMap.set("T", "tom");

console.log(myMap.size);
```
Output
```
3
```
Understanding basic Map operations
----------------------------------

The `set()` function sets the value for the key in the Map object. The `set()` function takes two parameters namely, the key and its value. This function returns the Map object.

The has() function returns a boolean value indicating whether the specified key is found in the Map object. This function takes a key as parameter.
```
var map = new Map();
map.set('name','Tutorial Point');
map.get('name'); // Tutorial point
```
The above example creates a map object. The map has only one element. The element key is denoted by name. The key is mapped to a value Tutorial point.

Note - Maps distinguish between similar values but bear different data types. In other words, an integer key 1 is considered different from a string key "1". Consider the following example to better understand this concept

```
var map = new Map();
map.set(1,true);
console.log(map.has("1")); //false
map.set("1",true);
console.log(map.has("1")); //true
```
Output
```
false
true
```
The `set()` method is also chainable. Consider the following example.

```
var roles = new Map();
roles.set('r1', 'User')
.set('r2', 'Guest')
.set('r3', 'Admin');
console.log(roles.has('r1'))
```
Output
```
True
```

The above example, defines a map object. The example chains the set() function to define the key/value pair.

The get() function is used to retrieve the value corresponding to the specified key.

The Map constructor can also be passed an array. Moreover, map also supports the use of spread operator to represent an array.

### Example

```
var roles = new Map([
   ['r1', 'User'],
   ['r2', 'Guest'],
   ['r3', 'Admin'],
]);  
console.log(roles.get('r2'))
```

The following output is displayed on successful execution of the above code.
```
Guest
```
Note - The `get()` function returns undefined if the key specified doesn't exist in the map.

The `set()` replaces the value for the key, if it already exists in the map. Consider the following example.

```
var roles = new Map([
   ['r1', 'User'],
   ['r2', 'Guest'],
   ['r3', 'Admin'],
]);  
console.log(`value of key r1 before set(): ${roles.get('r1')}`)
roles.set('r1','superUser')
console.log(`value of key r1 after set(): ${roles.get('r1')}`)
```

The following output is displayed on successful execution of the above code.
```
value of key r1 before set(): User
value of key r1 after set(): superUser
```
Map Methods
-----------

**Map.prototype.clear()**

Removes all key/value pairs from the Map object.

Example
```
var myMap = new Map();
myMap.set("bar", "baz");
console.log(myMap.size);

myMap.clear();
console.log(myMap.size)
```
Output
```
1
0    
```

**Map.prototype.delete(key)**

Removes any value associated to the key and returns the value that Map.prototype.has(key) would have previously returned.

Map.prototype.has(key) will return false afterwards.

Example
```
var myMap = new Map();
myMap.set("id", "admin");
myMap.set("pass", "admin@123");
console.log(myMap.has("id"));

myMap.delete("id");
console.log(myMap.has("id"));
```
Output
```
true
false    
```

**Map.prototype.entries()**

Returns a new Iterator object that contains an array of [key, value] for each element in the Map object in insertion order.

Example
```
var myMap = new Map();
myMap.set("id", "admin");
myMap.set("pass", "admin@123");

var itr = myMap.entries();
console.log(itr.next().value);
console.log(itr.next().value);  
```
Output
```
id,admin
pass,admin@123   
```


**Map.prototype.forEach(callbackFn[, thisArg])**

Calls callbackFn once for each key-value pair present in the Map object, in insertion order. If a thisArg parameter is provided to forEach, it will be used as the 'this' value for each callback .

Example
```
function userdetails(key,value) {
   console.log("m[" + key + "] = " + value);
}  
var myMap = new Map();
myMap.set("id", "admin");
myMap.set("pass", "admin@123");
myMap.forEach(userdetails);  
```
Output
```
m[admin] = id
m[admin@123] = pass  
```

**Map.prototype.keys()**

Returns a new Iterator object that contains the keys for each element in the Map object in insertion order.

Example
```
var myMap = new Map();
myMap.set("id", "admin");
myMap.set("pass", "admin@123");

var itr = myMap.keys();
console.log(itr.next().value);
console.log(itr.next().value);
```
Output
```
id
pass  
```

**Map.prototype.values()**

Returns a new Iterator object that contains an array of [key, value] for each element in the Map object in insertion order.

```
Example
var myMap = new Map();
myMap.set("id", "admin");
myMap.set("pass", "admin@123");

var itr = myMap.values();
console.log(itr.next().value);
console.log(itr.next().value);
```
Output
```
Admin
admin@123
```

The for...of Loop
---------------

The following example illustrates traversing a map using the for...of loop.

```
'use strict'
var roles = new Map([
   ['r1', 'User'],
   ['r2', 'Guest'],
   ['r3', 'Admin'],
]);
for(let r of roles.entries())
console.log(`${r[0]}: ${r[1]}`);
```

The following output is displayed on successful execution of the above code.
```
r1: User
r2: Guest
r3: Admin
```
Weak Maps
---------

A weak map is identical to a map with the following exceptions -

-   Its keys must be objects.

-   Keys in a weak map can be Garbage collected. Garbage collection is a process of clearing the memory occupied by unreferenced objects in a program.

-   A weak map cannot be iterated or cleared.

### Example : Weak Map

```
'use strict'
let weakMap = new WeakMap();
let obj = {};
console.log(weakMap.set(obj,"hello"));  
console.log(weakMap.has(obj));// true
```
The following output is displayed on successful execution of the above code.
```
WeakMap {}
true
```

Sets
----

A set is an ES6 data structure. It is similar to an array with an exception that it **cannot contain duplicates**. In other words, it lets you store unique values. Sets support both primitive values and object references.

Just like maps, sets are also ordered, i.e. elements are iterated in their insertion order.

Set Properties
--------------

**Set.prototype.size**

Returns the number of values in the Set object.

Example
```
var mySet = new Set('tom','jim','jack');
var tot = mySet.size;
console.log(tot);
```
Output
```
3
```

Set Methods
-----------

**Set.prototype.add(value)**

Appends a new element with the given value to the Set object. Returns the Set object.

Example
```
var set = new Set();
set.add(10);
set.add(10); // duplicate not added
set.add(10); // duplicate not added
set.add(20);
set.add(30);
console.log(set.size);
```
Output
```
3
```

**Set.prototype.clear()**

Example
```
var mySet = new Set('tom','jim','jack');
mySet.clear()
var tot = mySet.size;
console.log(tot);
```
Output
```
0
```


**Set.prototype.delete(value)**

Removes the element associated to the value.

Example
```
var set = new Set();
set.add(10);
set.add(20);
set.add(30);
console.log(`Size of Set before delete() :${set.size}`);
console.log(`Set has 10 before delete() :${set.has(10)}`);

set.delete(10)
console.log(`Size of Set after delete() :${set.size}`);
console.log(`Set has 10 after delete() :${set.has(10)}`)
```
Output
```
Size of Set before delete() :3
Set has 10 before delete() :true
Size of Set after delete() :2
Set has 10 after delete() :false
```

**Set.prototype.entries()**

Returns a new Iterator object that contains an array of [value, value] for each element in the Set object, in insertion order. This is kept similar to the Map object, so that each entry has the same value for its key and value here.

Example
```
var mySet = new Set();
mySet.add("Jim");
mySet.add("Jack");
mySet.add("Jane");

var itr = mySet.entries()
console.log(itr.next().value);
console.log(itr.next().value);
console.log(itr.next().value);
```
Output
```
Jim,Jim
Jack,Jack
Jane,Jane
```

 **Set.prototype.forEach(callbackFn[, thisArg])**

Calls callbackFn once for each value present in the Set object, in insertion order. If athisArg parameter is provided to forEach, it will be used as the 'this' value for each callback.
```
Example
function userdetails(values) {
   console.log(values);
}  
var mySet = new Set();
mySet.add("John");
mySet.add("Jane");
mySet.forEach(userdetails);
```
Output
```
John
Jane
```

**Set.prototype.has(value)**

Returns a boolean asserting whether an element is present with the given value in the Set object or not.

```
Example
var mySet = new Set();
mySet.add("Jim");  
console.log(mySet.has("Jim"));   
console.log(mySet.has("Tom"));
```
Output
```
true
false
```

**Set.prototype.values()**

Returns a new Iterator object that contains the values for each element in the Set object in insertion order.

Example
```
var mySet = new Set();
mySet.add("Jim");
mySet.add("Jack");
mySet.add("Jane");
console.log("Printing keys()------------------");  

var keyitr = mySet.keys();
console.log(keyitr.next().value);
console.log(keyitr.next().value);
console.log(keyitr.next().value);  
console.log("Printing values()------------------");

var valitr = mySet.values();
console.log(valitr.next().value);
console.log(valitr.next().value);
console.log(valitr.next().value);
```
Output
```
Printing keys()------------------
Jim
Jack
Jane
Printing values()------------------
Jim
Jack
Jane
```

Weak Set
--------

Weak sets can only contain objects, and the objects they contain may be garbage collected. Like weak maps, weak sets cannot be iterated.

### Example: Using a Weak Set

```
'use strict'
   let weakSet = new WeakSet();  
   let obj = {msg:"hello"};
   weakSet.add(obj);
   console.log(weakSet.has(obj));
   weakSet.delete(obj);
   console.log(weakSet.has(obj));
```

The following output is displayed on successful execution of the above code.
```
true
false
```

Iterator
--------

Iterator is an object which allows to access a collection of objects one at a time. Both set and map have methods which returns an iterator.

Iterators are objects with next() method. When next() method is invoked, it returns an object with 'value' and 'done' properties . 'done' is boolean, this will return true after reading all items in the collection

### Example 1: Set and Iterator

```
var  set = new Set(['a','b','c','d','e']);  
var iterator = set.entries();
console.log(iterator.next())
```

The following output is displayed on successful execution of the above code.
```
{ value: [ 'a', 'a' ], done: false }
```

Since, the set does not store key/value, the value array contains similar key and value. done will be false as there are more elements to be read.

### Example 2: Set and Iterator

```
var  set = new Set(['a','b','c','d','e']);  
var iterator = set.values();
console.log(iterator.next());
```

The following output is displayed on successful execution of the above code.
```
{ value: 'a', done: false }
```

### Example 3: Set and Iterator

```
var  set = new Set(['a','b','c','d','e']);  
var iterator = set.keys();
console.log(iterator.next());
```

The following output is displayed on successful execution of the above code.
```
{ value: 'a', done: false }
```

### Example 4: Map and Iterator

```
var map = new Map([[1,'one'],[2,'two'],[3,'three']]);
var iterator = map.entries();
console.log(iterator.next());
```

The following output is displayed on successful execution of the above code.
```
{ value: [ 1, 'one' ], done: false }
```

### Example 5: Map and Iterator

```
var map = new Map([[1,'one'],[2,'two'],[3,'three']]);
var iterator = map.values();
console.log(iterator.next());
```

The following output is displayed on successful execution of the above code.
```
{value: "one", done: false}
```

### Example 6: Map and Iterator

```
var map = new Map([[1,'one'],[2,'two'],[3,'three']]);
var iterator = map.keys();
console.log(iterator.next());
```
The following output is displayed on successful execution of the above code.
```
{value: 1, done: false}
```

# References
https://www.tutorialspoint.com/es6/es6_collections.htm
