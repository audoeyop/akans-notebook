#include <stdio.h>

void pass_by_value_swap(int a, int b) {

   int temp;

   temp = a; /* save the value of a */
   a = b;    /* put b into x */
   b = temp; /* put temp into b */

   printf("pass_by_value_swap(): a : %d, b : %d\n", a, b);

   return;
}

void pass_by_reference_swap(int *a, int *b) {

   int temp;

   temp = *a; /* save the value of x */
   *a = *b;    /* put y into x */
   *b = temp; /* put temp into y */

   printf("pass_by_reference_swap(): a : %d, b : %d\n", *a, *b);

   return;
}

void pass_by_reference_address_swap(int *a, int *b) {

   int * temp;

   temp = a; /* save the value of x */
   a = b;    /* put y into x */
   b = temp; /* put temp into y */

   printf("pass_by_reference_address_swap(): a : %d, b : %d\n", *a, *b);

   return;
}

int main () {

   /* local variable definition */
   int a = 100;
   int b = 200;
   int temp;

   printf("main(): a : %d, b : %d\n", a, b);

   // calling a pass_by_value_swap */
   pass_by_value_swap(a, b);

   printf("main(): a : %d, b : %d\n\n", a, b);

   // calling a pass_by_reference_swap */
   pass_by_reference_swap(&a, &b);

   printf("main(): a : %d, b : %d\n\n", a, b);

   // calling a pass_by_reference_address_swap */
   pass_by_reference_address_swap(&a, &b);

   printf("main(): a : %d, b : %d\n\n", a, b);

   temp = a; /* save the value of x */
   a = b;    /* put y into x */
   b = temp; /* put temp into y */

   printf("manual swap\n");
   printf("main(): a : %d, b : %d\n\n", a, b);

   return 0;
}
