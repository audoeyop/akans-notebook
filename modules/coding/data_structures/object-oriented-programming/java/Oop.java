class Box {

  // class variables

  int width;
  int height;
  String color;
  static int version = 0;

  // class methods

   public int get_area() {

     return calculate_area();
   }

   int get_perimeter() {

     return calculate_perimeter();
   }

   int get_version() {

     return this.version;
   }

   String print_box() {

     return "(w:" + this.width + ",h:" + this.height + ")";
   }

   static String print_static_text() {

     return "print static text";
   }

   protected int calculate_area() {

      return (this.width * this.height);
   }

   private int calculate_perimeter() {

      return (this.width + this.height) * 2;
   }

   // constructor

   public Box(int width, int height) {

     this.width = width;

     this.height = height;

     this.color = "Red";
   };
}

// inheritance

class Cube extends Box {

  int depth;

  public Cube(int width, int height, int depth) {

    super(width, height);

    this.depth = depth;

    this.color = "Blue";
  }

  int get_volume() {

    int area = super.get_area();

    return (area * this.depth);
  }

  String print_cube() {

    return "(w:" + this.width + ",h:" + this.height + ",d:" + this.depth + ")";
  }
}

public class Oop {

  public static void main(String[] args) {

    Box box = new Box(10, 20);

    System.out.printf("New box: %s%n", box.print_box());

    box.version = 1;

    System.out.printf("Width of the box is : %d%n", box.width);
    System.out.printf("Height of the box is : %d%n", box.height);
    System.out.printf("Color of the box is : %s%n", box.color);
    System.out.printf("Area of the box is : %d%n", box.get_area());
    System.out.printf("Perimeter of the box is : %d%n", box.get_perimeter());
    System.out.printf("Version of the box is : %d%n", box.get_version());
    System.out.printf("Static text of the box is : %s%n", box.print_static_text());

    Cube cube = new Cube(10, 20, 30);

    System.out.printf("\nNew cube: %s%n", cube.print_cube());

    System.out.printf("Width of the cube is : %d%n", cube.width);
    System.out.printf("Height of the cube is : %d%n", cube.height);
    System.out.printf("Depth of the cube is : %d%n", cube.depth);
    System.out.printf("Color of the cube is : %s%n", cube.color);
    System.out.printf("Area of the cube is : %d%n", cube.get_area());
    System.out.printf("Perimeter of the cube is : %d%n", cube.get_perimeter());
    System.out.printf("Volume of the cube is : %d%n", cube.get_volume());
  }
}
