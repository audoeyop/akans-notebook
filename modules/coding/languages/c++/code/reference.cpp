#include <iostream>
using namespace std;

// function declaration
void swap_by_reference(int& x, int& y);
void swap_by_value(int x, int y);

int main () {

    // Reference Variables
   // =================

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

   // Pass by Reference
   // =================

   // local variable declaration:
   int a = 100;
   int b = 200;

   cout << "Before swap_by_reference, value of a :" << a << endl;
   cout << "Before swap_by_reference, value of b :" << b << endl;

   /* calling a function to swap the values.*/
   swap_by_reference(a, b);

   cout << "After swap_by_reference, value of a :" << a << endl;
   cout << "After swap_by_reference, value of b :" << b << endl;

   cout << "Before swap_by_value, value of a :" << a << endl;
   cout << "Before swap_by_value, value of b :" << b << endl;

   /* calling a function to swap the values.*/
   swap_by_value(a, b);

   cout << "After swap_by_value, value of a :" << a << endl;
   cout << "After swap_by_value, value of b :" << b << endl;

   return 0;
}

// function definition to swap the values.
void swap_by_reference(int& x, int& y) {

   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */

   return;
}

void swap_by_value(int x, int y) {

   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */

   cout << "Inside swap_by_value, value of a :" << x << endl;
   cout << "Inside swap_by_value, value of b :" << y << endl;

   return;
}