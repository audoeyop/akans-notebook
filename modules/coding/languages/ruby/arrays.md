# Ruby Arrays

Ruby arrays are ordered, integer-indexed collections of any object. Each element in an array is associated with and referred to by an index.

Array indexing starts at 0, as in C or Java. A negative index is assumed relative to the end of the array --- that is, an index of -1 indicates the last element of the array, -2 is the next to last element in the array, and so on.

Ruby arrays can hold objects such as String, Integer, Fixnum, Hash, Symbol, even other Array objects. Ruby arrays are not as rigid as arrays in other languages. Ruby arrays grow automatically while adding elements to them.

Creating Arrays
There are many ways to create or initialize an array. One way is with the new class method −

names = Array.new
You can set the size of an array at the time of creating array −

names = Array.new(20)
The array names now has a size or length of 20 elements. You can return the size of an array with either the size or length methods −

Live Demo
#!/usr/bin/ruby

names = Array.new(20)
puts names.size  # This returns 20
puts names.length # This also returns 20
This will produce the following result −

20
20
You can assign a value to each element in the array as follows −

Live Demo
#!/usr/bin/ruby

names = Array.new(4, "mac")
puts "#{names}"
This will produce the following result −

["mac", "mac", "mac", "mac"]
You can also use a block with new, populating each element with what the block evaluates to −

Live Demo
#!/usr/bin/ruby

nums = Array.new(10) { |e| e = e * 2 }
puts "#{nums}"
This will produce the following result −

[0, 2, 4, 6, 8, 10, 12, 14, 16, 18]
There is another method of Array, []. It works like this −

nums = Array.[](1, 2, 3, 4,5)
One more form of array creation is as follows −

nums = Array[1, 2, 3, 4,5]
The Kernel module available in core Ruby has an Array method, which only accepts a single argument. Here, the method takes a range as an argument to create an array of digits −

Live Demo
#!/usr/bin/ruby

digits = Array(0..9)
puts "#{digits}"
This will produce the following result −

[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
Array Built-in Methods
We need to have an instance of Array object to call an Array method. As we have seen, following is the way to create an instance of Array object −

Array.[](...) [or] Array[...] [or] [...]
This will return a new array populated with the given objects. Now, using the created object, we can call any available instance methods. For example −

Live Demo
#!/usr/bin/ruby

digits = Array(0..9)
num = digits.at(6)
puts "#{num}"
This will produce the following result −

6
Following are the public array methods (assuming array is an array object) −
Array pack Directives
Following table lists the pack directives for use with Array#pack.
Example
Try the following example to pack various data.

Live Demo
a = [ "a", "b", "c" ]
n = [ 65, 66, 67 ]
puts a.pack("A3A3A3")   #=> "a  b  c  "
puts a.pack("a3a3a3")   #=> "a\000\000b\000\000c\000\000"
puts n.pack("ccc")      #=> "ABC"
This will produce the following result −

a  b  c
abc
ABC

# References
https://www.tutorialspoint.com/ruby/ruby_arrays.htm
