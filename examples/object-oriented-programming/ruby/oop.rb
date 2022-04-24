# define a class
class Box

  attr_accessor :object_color

  # class variable
  @@version = 0

  # constructor method
   def initialize(width, height)

      @object_width = width
      @object_height = height
      @object_color = "Red"
   end

   # to_s method
   def to_s
      "(w:#@object_width,h:#@object_height)"  # string formatting of the object.
   end

   # accessor methods
   # ----------------

   def get_width()

      @object_width
   end

   def get_height()

      @object_height
   end

   def get_color()

      @object_color
   end

   # setter methods
   # --------------

   def set_width(new_width)

      @object_width = new_width
   end

   def set_height(new_height)

      @object_height = new_height
   end

   def set_color(new_color)

      @object_color = new_color
   end

   # instance methods
   # ----------------

   def calculate_perimeter(width, height)

     (@object_width + @object_height) * 2
   end

   def calculate_area(width, height)

     @object_width * @object_height
   end

   # set private methods
   private :calculate_area

   def get_area()

      calculate_area(@object_width, @object_height)
   end

   def get_perimeter()

     self.calculate_perimeter(@object_width, @object_height)
   end

   # set protected methods
   protected :calculate_perimeter

   def print_version_instance_method()

      @@version
   end

   # class methods

   def self.print_version_class_method()

      @@version
   end

   def self.increment_version_class_method()

      @@version += 1
   end
end

# create an object
box = Box.new(10, 20)

puts "New box: #{box}"

# update box color via attr_accessor
box.object_color = "Blue"

# use accessor methods
width = box.get_width()
height = box.get_height()
color = box.get_color()
area = box.get_area()
perimeter = box.get_perimeter()

puts "Width of the box is : #{width}"
puts "Height of the box is : #{height}"
puts "Color of the box is : #{color}"
puts "Area of the box is : #{area}"
puts "Perimeter of the box is : #{perimeter}"

Box.increment_version_class_method()

puts "Incremented version of the box is (Instance Method): #{box.print_version_instance_method()}"
puts "Incremented version of the box is (Class Method): #{Box.print_version_class_method()}"

class Cube < Box

  def initialize(width, height, depth)

     @object_width = width
     @object_height = height
     @object_depth = depth
  end

  # to_s method
  def to_s

     "(w:#@object_width,h:#@object_height,d:#@object_depth)"  # string formatting of the object.
  end

  def get_depth()

    @object_depth
  end

  def get_volume()

    volume =  @object_width * @object_height * @object_depth

    volume
  end

  def get_area()

     super + 9000
  end
end


# create an object
cube = Cube.new(10, 20, 30)

puts "\nNew cube: #{cube}"

# use accessor methods
width = cube.get_width()
height = cube.get_height()
depth = cube.get_depth()
area = cube.get_area()
perimeter = cube.get_perimeter()
volume = cube.get_volume()

puts "Width of the cube is : #{width}"
puts "Height of the cube is : #{height}"
puts "Depth of the cube is : #{depth}"
puts "Area of the cube is : #{area}"
puts "Perimeter of the cube is : #{perimeter}"
puts "Volume of the cube is : #{volume}"
