// https://www.tutorialspoint.com/cprogramming/c_structures.htm
// https://www.tutorialspoint.com/cprogramming/c_unions.htm

// javac Oop.java && java Oop

#include <stdlib.h>
#include <stdio.h>

union Line {
  int end1;
  int end2;
  int end3;
  int end4;
};

struct Box {
    int width;
    int height;
    char color[10];
    int version;
};

typedef struct Box Square;

// function declarations

struct Box create_box(int width, int height) {

  struct Box box;

  box.width = width;
  box.height = height;
  sprintf(box.color, "Blue");

  return box;
}

void print_box(struct Box box) {

  printf("(w:%d,h:%d)\n", box.width, box.height);
};

int get_area(struct Box box) {

  int area = box.width * box.height;

  return area;
};

int main() {

  // instanciate new Line (union)
  union Line line;

  line.end1 = 1;
  line.end2 = 2;

  printf("New line: (w:%d,h:%d)\n", line.end1, line.end2);
  printf("Line property addresses: (w:0x%x,h:0x%x)\n", &line.end1, &line.end2);

  // instanciate new Box (struct)
  struct Box box = create_box(10, 20);

  printf("New box: (w:%d,h:%d)\n", box.width, box.height);
  printf("Box property addresses: (w:0x%x,h:0x%x)\n", &box.width, &box.height);

  box.version = 1;

  Square square = create_box(30, 40);

  Square * square_address = &square;

  printf("New square: (w:%d,h:%d)\n", square_address->width, square_address->height);

  exit(0);
}
