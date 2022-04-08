// gcc -o oop ./opp.c && ./oop

#include <stdio.h>

 int main (int argc, char *argv[]) {

   printf("You have entered %s arguments:\n", argc);

     for (int i = 0; i < argc; i++) {

       printf("%s\n", argv[i]);
     }

   return 0;
 }
