#include <iostream>
using namespace std;

// function declarations
int max(int num1, int num2);

int sum(int a, int b = 20) {
   int result;
   result = a + b;

   return (result);
}

int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;
   int ret;
   int result;

   // calling a function to get max value.
   ret = max(a, b);
   cout << "Max value is : " << ret << endl;

   // calling a function to add the values.
   result = sum(a, b);
   cout << "Total value is :" << result << endl;

   // calling a function again as follows.
   result = sum(a);
   cout << "Total value is :" << result << endl;

   return 0;
}

// function returning the max between two numbers
int max(int num1, int num2) {
   // local variable declaration
   int result;

   if (num1 > num2)
      result = num1;
   else
      result = num2;

   return result;
}