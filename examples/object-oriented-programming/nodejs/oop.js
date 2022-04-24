// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Classes

class Box {

  #private_field = "PRIVATE TEXT"

  constructor(width, height) {

    this.height = height;
    this.width = width;
    this.color = "Red";
    this.version = 0;
  }

  static print_class_desciption() {

    return "A box is a shape with four equal sides and four right angles."
  }

  // Methods
  calculate_peremeter() {

    var perimeter = (this.width + this.height) * 2;

    return perimeter;
  }

  calculate_area() {

    return this.width * this.height;
  }

  print_private_field() {

    return this.#private_field;
  }

  // Getter Methods
  get get_area() {

    return this.calculate_area();
  }

  get get_perimeter() {

    return this.calculate_peremeter();
  }
}

Box.prototype.toString = function boxToString() {

  return `(w:${this.width},h:${this.height})`;
};

var box = new Box(10, 20);

box.version = 1

console.log(`New box: ${box.toString()}`)

width = box.width
height = box.height
color = box.color
version = box.version
area = box.get_area
perimeter = box.get_perimeter
private_field = box.print_private_field()

console.log(`Width of the box is ${width}`)
console.log(`Height of the box is : ${height}`)
console.log(`Color of the box is : ${color}`)
console.log(`Area of the box is : ${area}`)
console.log(`Perimeter of the box is : ${perimeter}`)
console.log(`Description of a box is : ${Box.print_class_desciption()}`)
console.log(`Private field of the box is : ${private_field}`)

class Cube extends Box {
  constructor(height, width, depth) {

    super(height, width);

    this.depth = depth;
  }

  get get_volume() {

    return this.width * this.height * this.depth;
  }

  get get_area() {

    return 9000;
  }
}

Box.prototype.toString = function boxToString() {

  return `(w:${this.width},h:${this.height},d:${this.depth})`;
};

cube = new Cube(10, 20, 30)

console.log(`New cube: ${cube.toString()}`)

width = cube.width
height = cube.height
area = cube.get_area
perimeter = cube.get_perimeter
volume = cube.get_volume

console.log(`Width of the box is ${width}`)
console.log(`Height of the box is : ${height}`)
console.log(`Area of the box is : ${area}`)
   console.log(`Perimeter of the box is : ${perimeter}`)
console.log(`Volume of the box is : ${volume}`)
