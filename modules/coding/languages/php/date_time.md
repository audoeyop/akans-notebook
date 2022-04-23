# PHP Date & Time

Dates are so much part of everyday life that it becomes easy to work with them without thinking. PHP also provides powerful tools for date arithmetic that make manipulating dates easy.

Getting the Time Stamp with time()
PHP's time() function gives you all the information that you need about the current date and time. It requires no arguments but returns an integer.

The integer returned by time() represents the number of seconds elapsed since midnight GMT on January 1, 1970. This moment is known as the UNIX epoch, and the number of seconds that have elapsed since then is referred to as a time stamp.

Live Demo
<?php
   print time();
?>
This will produce the following result −

1480930103
This is something difficult to understand. But PHP offers excellent tools to convert a time stamp into a form that humans are comfortable with.

Converting a Time Stamp with getdate()
The function getdate() optionally accepts a time stamp and returns an associative array containing information about the date. If you omit the time stamp, it works with the current time stamp as returned by time().

Following table lists the elements contained in the array returned by getdate().

Sr.No	Key & Description	Example
1
seconds

Seconds past the minutes (0-59)

20
2
minutes

Minutes past the hour (0 - 59)

29
3
hours

Hours of the day (0 - 23)

22
4
mday

Day of the month (1 - 31)

11
5
wday

Day of the week (0 - 6)

4
6
mon

Month of the year (1 - 12)

7
7
year

Year (4 digits)

1997
8
yday

Day of year ( 0 - 365 )

19
9
weekday

Day of the week

Thursday
10
month

Month of the year

January
11
0

Timestamp

948370048
Now you have complete control over date and time. You can format this date and time in whatever format you wan.

Example
Try out following example

Live Demo
<?php
   $date_array = getdate();

   foreach ( $date_array as $key => $val ){
      print "$key = $val<br />";
   }

   $formated_date  = "Today's date: ";
   $formated_date .= $date_array['mday'] . "/";
   $formated_date .= $date_array['mon'] . "/";
   $formated_date .= $date_array['year'];

   print $formated_date;
?>
This will produce following result −

seconds = 10
minutes = 29
hours = 9
mday = 5
wday = 1
mon = 12
year = 2016
yday = 339
weekday = Monday
month = December
0 = 1480930150
Today's date: 5/12/2016
Converting a Time Stamp with date()
The date() function returns a formatted string representing a date. You can exercise an enormous amount of control over the format that date() returns with a string argument that you must pass to it.

date(format,timestamp)
The date() optionally accepts a time stamp if omitted then current date and time will be used. Any other data you include in the format string passed to date() will be included in the return value.

Following table lists the codes that a format string can contain −

Sr.No	Format & Description	Example
1
a

'am' or 'pm' lowercase

pm
2
A

'AM' or 'PM' uppercase

PM
3
d

Day of month, a number with leading zeroes

20
4
D

Day of week (three letters)

Thu
5
F

Month name

January
6
h

Hour (12-hour format - leading zeroes)

12
7
H

Hour (24-hour format - leading zeroes)

22
8
g

Hour (12-hour format - no leading zeroes)

12
9
G

Hour (24-hour format - no leading zeroes)

22
10
i

Minutes ( 0 - 59 )

23
11
j

Day of the month (no leading zeroes

20
12
l (Lower 'L')

Day of the week

Thursday
13
L

Leap year ('1' for yes, '0' for no)

1
14
m

Month of year (number - leading zeroes)

1
15
M

Month of year (three letters)

Jan
16
r

The RFC 2822 formatted date

Thu, 21 Dec 2000 16:01:07 +0200
17
n

Month of year (number - no leading zeroes)

2
18
s

Seconds of hour

20
19
U

Time stamp

948372444
20
y

Year (two digits)

06
21
Y

Year (four digits)

2006
22
z

Day of year (0 - 365)

206
23
Z

Offset in seconds from GMT

+5
Example
Try out following example

Live Demo
<?php
   print date("m/d/y G.i:s<br>", time());
   echo "<br>";
   print "Today is ";
   print date("j of F Y, \a\\t g.i a", time());
?>
This will produce following result −

12/05/16 9:29:47
Today is 5 2016f December 2016 at 9:29 am
Hope you have good understanding on how to format date and time according to your requirement. For your reference a complete list of all the date and time functions is given in PHP Date & Time Functions.

# References
https://www.tutorialspoint.com/php/php_date_and_time.htm
