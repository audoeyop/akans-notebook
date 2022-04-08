# print to standard output (stdout)
puts "Enter Your Name:"

# read a single line from standard input (stdin)
name = gets.chomp

puts "Hello #{name}. Welcome to The Complete Software Engineer\n"

puts "Enter 3 Hobbies\n"

# initialize empty array to store hobbies
hobby_list = []

number_of_hobbies = 3

hobby_count = 0

# read lines from stdin
STDIN.each_line do |line|

  # keep track of amout of hobbies
  hobby_count = hobby_count + 1

  # add hobby (line) to hobby_list
  hobby_list.push line

  # stop reading from stdin if hobby_count is greater than or equal to
  # number_of_hobbies
  break if hobby_count >= number_of_hobbies
end

puts "Your Hobby List"
puts "==============="

puts hobby_list
