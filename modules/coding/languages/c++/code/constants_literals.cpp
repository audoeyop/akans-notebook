#include <iostream>
using namespace std;

#define LENGTH 10
#define CHAR_VARIABLE cout << 300 << endl;
#define calculateArea(X, Y)  X * Y

int main() {

   const int  WIDTH  = 5;
   char char_var = 'S';
   int area;  

   area = LENGTH * WIDTH;

   cout << LENGTH << endl;
   cout << WIDTH << endl;
   cout << area << endl;
   CHAR_VARIABLE
   cout << calculateArea(LENGTH, WIDTH) << endl;

   return 0;
}
