file1 = open('numbers.txt', 'r')
Lines = file1.readlines()

# initialize variables used to calculate average
sum = 0
count = 0

# read file numbers.txt line-by-line
for line in Lines:

  # increment the count
  count = count + 1

  # add to the sum of the numbers
  # float() type casts (converts) the line value to a float (decimal number)
  # eg. "12" -> 12.0
  sum = sum + float(line)

  # print line from file
  # strip() removes spaces & new lines from
  print(line.strip())

average = sum / count

print("Average: {}".format(average))
