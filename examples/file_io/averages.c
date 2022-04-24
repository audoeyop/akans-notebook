#include <stdio.h>
#include <stdlib.h>

int main() {

  // Read file numbers.txt and store the file pointer.
  // The file pointer is a computer memory address that points to the
  // beginning of the file
  FILE *file_pointer = fopen("numbers.txt", "r");

  // Each line of the file will be read into a file buffer.
  // We are limiting the size of this buffer to a maximum of 128 characters.
  char line_buffer[128];

  // initialize variables used to calculate average as floats (decimal number)
  float sum = 0, count = 0, average;

  // loop through file line-by-line
  while (fscanf(file_pointer, "%[^\n] ", line_buffer) != EOF) {

    // increment the count
    count = count + 1;

    // Add to the sum of the numbers.
    // The line is read as text. 'atoi' converts the text value to an
    // integer data type.
    sum = sum + atoi(line_buffer);

    // print line from file
    printf("%s\n", line_buffer);
  }

  average = sum / count;

  printf("Average: %.2f\n", average);

  // close the file pointer
  fclose(file_pointer);
}
