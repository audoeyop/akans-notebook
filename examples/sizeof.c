#include <stdio.h>
#include <string.h>
#include <sys/resource.h>

char * bytes(bytes) {

  if(bytes != 1)

    return "bytes";

  else

    return "byte";
}

int main()
{
    printf("Size of char: %lu %s\n", sizeof(char), bytes(sizeof(char)));

    printf("Size of int: %lu %s\n", sizeof(int), bytes(sizeof(int)));

    printf("Size of float: %lu %s\n", sizeof(float), bytes(sizeof(float)));

    printf("Size of double: %lu %s\n", sizeof(double), bytes(sizeof(double)));

    char string[] = "This is a string";

    printf("Size of string '%s' (length: %lu): %lu %s\n",string, strlen(string), sizeof(string), bytes(sizeof(string)));

    int integer_array[5] = {14, 2, 33, 7, 5};

    printf("Size of integer_array {14, 2, 33, 7, 5} (length: 5): %lu %s\n%lu = SizeOfInt(%lu) * ArrayLength(%d)\n",sizeof(integer_array), bytes(sizeof(integer_array)), sizeof(integer_array), sizeof(int), 5);

    struct rusage r_usage;
  getrusage(RUSAGE_SELF,&r_usage);
  // Print the maximum resident set size used (in kilobytes).
  printf("Memory usage: %ld kilobytes\n",r_usage.ru_maxrss);
  return 0;
  
    return 0;
}
