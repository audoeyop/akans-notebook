// https://www.tutorialspoint.com/cplusplus/cpp_classes_objects.htm
// g++ -o oop ./oop.cpp && ./oop


#include <iostream>

using namespace std;

class Box {

   public: //public members

      int width;
      int height;
      char color[10];
      int version;

      // member functions

      int get_area() {

         return calculate_area();
      }

      int get_perimeter() {

         return calculate_perimeter();
      }

      int get_version() {

         return version;
      }

      static void print_static_text() {

        cout << "print static text";
      }

      char * print_box() {

        sprintf(print_output, "(w:%d,h:%d)", width, height);

        // cout << "(w:" << width << ",h:" << height << ")\n" << endl;
        return print_output;
      }

      // constructor declaration - defined in Box::Box() below.
      Box(int width, int height);

      // destructor declaration - defined in Box::~Box() below.
      ~Box();

    protected: // protected members

      char print_output[50];

      int calculate_area() {

         return (width * height);
      }

    private:

      int calculate_perimeter() {

         return (width + height) * 2;
      }

};

// constructor function
Box::Box(int width, int height) {

  this->width = width;

  this->height = height;

  sprintf(this->color, "Red");
}

// destructor function
Box::~Box(void) {

   cout << "Box is being deleted" << endl;

   cout << this->print_box() << endl;
}

class Cube: public Box {

   public:

     int depth;

     Cube(int width, int height, int depth);

     int get_volume() {

       int volume = (width * height * depth);

        return volume;
     }

     int get_area() {

       int volume = (width * height * depth);

        return volume;
     }

     char * print_cube() {

       sprintf(print_output, "(w:%d,h:%d,d:%d)", width, height, depth);

       // cout << "(w:" << width << ",h:" << height << ")\n" << endl;
       return print_output;
     }
};

Cube::Cube(int width, int height, int depth) : Box(width, height) {

  this->width = width;

  this->height = height;

  this->depth = depth;

  sprintf(this->color, "Blue");
}

int main() {

   Box box(10, 20);

   cout << "New box : " << box.print_box() << endl;

   box.version = 1;

   cout << "Width of the box is : " << box.width << endl;
   cout << "Height of the box is : " << box.height << endl;
   cout << "Color of the box is : " << box.color << endl;
   cout << "Area of the box is : " << box.get_area() << endl;
   cout << "Perimeter of the box is : " << box.get_perimeter() << endl;
   cout << "Version of the box is : " << box.get_version() << endl;
   cout << "Static text of the box is : "; box.print_static_text(); cout << endl;

   Cube cube(10, 20, 30);

   cout << "\nNew cube : " << cube.print_cube() << endl;

   cout << "Width of the cube is : " << cube.width << endl;
   cout << "Height of the cube is : " << cube.height << endl;
   cout << "Depth of the cube is : " << cube.height << endl;
   cout << "Color of the cube is : " << cube.color << endl;
   cout << "Area of the cube is : " << cube.get_area() << endl;
   cout << "Perimeter of the cube is : " << cube.get_perimeter() << endl;
   cout << "Volume of the cube is : " << cube.get_volume() << endl;
 }
