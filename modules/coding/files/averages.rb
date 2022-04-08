
# initialize variables used to calculate average
sum = 0
count = 0

# read file numbers.txt line-by-line
File.foreach("numbers.txt") do |line|

  # increment the count
  count = count + 1

  # add to the sum of the numbers
  sum = sum + line.to_f

  # print line from file
  puts line
end

average = sum / count

puts "Average: #{average}"
