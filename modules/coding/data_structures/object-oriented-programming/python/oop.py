class Box:

    def __init__(self, width, height):

        self.width = width
        self.height = height
        self.color = "Red"
        self.__private_variable = "PRIVATE TEXT"

    # Replace .description() with __str__()
    def __str__(self):

        return "(w:" + str(self.width) + ",h:" + str(self.height) + ":" + self.__private_variable + ")"

    # instance methods

    def get_area(self):

        return self.__calculate_area()

    def get_perimeter(self):

        perimeter = (self.width + self.height) * 2

        return perimeter

    def __calculate_area(self):

        area = self.width * self.height

        return area


box = Box(10, 20)

print("New box: " + str(box))

box.version = 1

width = box.width
height = box.height
color = box.color
version = box.version
area = box.get_area()
perimeter = box.get_perimeter()

print("Width of the box is : " + str(width))
print("Height of the box is : " + str(height))
print("Color of the box is : " + str(color))
print("Area of the box is : " + str(area))
print("Perimeter of the box is : " + str(perimeter))
print("Version of the box is : " + str(box.version))

class Cube(Box):

    def __init__(self, height, width, depth):

        self.width = width
        self.height = height
        self.depth = depth
        self.color = "Blue"

    def __str__(self):

        return "(w:" + str(self.width) + ",h:" + str(self.height) + ",d:" + str(self.depth) + ")"


    def get_volume(self):

        volume = self.width * self.height * self.depth

        return volume

    # overwrite method of parent class
    def get_area(self):

        return 9000

cube = Cube(10, 20, 30)

print("\nNew cube: " + str(cube))

width = cube.width
height = cube.height
depth = cube.depth
color = cube.color
area = cube.get_area()
perimeter = cube.get_perimeter()
volume = cube.get_volume()

print("Width of the cube is : " + str(width))
print("Height of the cube is : " + str(height))
print("Depth of the cube is : " + str(depth))
print("Color of the cube is : " + str(color))
print("Area of the cube is : " + str(area))
print("Perimeter of the cube is : " + str(perimeter))
print("Volume of the cube is : " + str(volume))
