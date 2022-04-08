# Strings & escape characters
# for loops
# arrays and objects classes
# https://www.ruby-lang.org/en/documentation/faq/8/
# https://www.tutorialspoint.com/ruby/ruby_modules.htm

string = "This is a string"
puts "string = '#{string}'"

integer = 9000
puts "integer = #{integer}"

float = 3.14
puts "float = #{float}"

integer_array = [1, 2, 3, 4]
puts "integer_array = #{integer_array}"

string_array = ["Cat", "Dog", "Cow", "Horse"]
puts "string_array = #{string_array}"

animals_hash = {"cats": 32, "dogs": 17, "cows": 7, "horses": 11}
puts "animals_object = #{animals_hash}"

mixed_array = ["Andrew", animals_hash, 2.2, string_array,"Michelle", float]
puts "animals_object = [\"Andrew\", animals_object, 2.2, string_array,\"Michelle\", float]"
puts "#{mixed_array}'"

mixed_hash = {"float value": float, "number": 23, "string": string, "animal hash": animals_hash, "integer array": integer_array}
