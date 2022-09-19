# C++ References

A reference variable is an alias, that is, another name for an already existing variable. Once a reference is initialized with a variable, either the variable name or the reference name may be used to refer to the variable.

## References vs Pointers
References are often confused with pointers but three major differences between references and pointers are −

You cannot have NULL references. You must always be able to assume that a reference is connected to a legitimate piece of storage.

Once a reference is initialized to an object, it cannot be changed to refer to another object. Pointers can be pointed to another object at any time.

A reference must be initialized when it is created. Pointers can be initialized at any time.

## Creating References in C++
Think of a variable name as a label attached to the variable's location in memory. You can then think of a reference as a second label attached to that memory location. Therefore, you can access the contents of the variable through either the original variable name or the reference. For example, suppose we have the following example −
```
int i = 17;
```
We can declare reference variables for i as follows.
```
int& r = i;
```
Read the & in these declarations as reference. Thus, read the first declaration as "r is an integer reference initialized to i" and read the second declaration as "s is a double reference initialized to d.". Following example makes use of references on int and double −

```
#include <iostream>

using namespace std;

int main () {
   // declare simple variables
   int    i;
   double d;

   // declare reference variables
   int&    r = i;
   double& s = d;

   i = 5;
   cout << "Value of i : " << i << endl;
   cout << "Value of i reference : " << r  << endl;

   d = 11.7;
   cout << "Value of d : " << d << endl;
   cout << "Value of d reference : " << s  << endl;

   return 0;
}
```
When the above code is compiled together and executed, it produces the following result −
```
Value of i : 5
Value of i reference : 5
Value of d : 11.7
Value of d reference : 11.7
```
References are usually used for function argument lists and function return values. So following are two important subjects related to C++ references which should be clear to a C++ programmer −

##	References as Parameters
C++ supports passing references as function parameter more safely than parameters.

We have discussed how we implement call by reference concept using pointers. Here is another example of call by reference which makes use of C++ reference −

```
#include <iostream>
using namespace std;

// function declaration
void swap(int& x, int& y);

int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;

   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;

   /* calling a function to swap the values.*/
   swap(a, b);

   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;

   return 0;
}

// function definition to swap the values.
void swap(int& x, int& y) {

   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */

   return;
}
```
When the above code is compiled and executed, it produces the following result −
```
Before swap, value of a :100
Before swap, value of b :200
After swap, value of a :200
After swap, value of b :100
```

##	Reference as Return Value
You can return reference from a C++ function like any other data type.

# References
https://www.tutorialspoint.com/cplusplus/cpp_references.htm
