# PHP Date & Time

Dates are so much part of everyday life that it becomes easy to work with them without thinking. PHP also provides powerful tools for date arithmetic that make manipulating dates easy.

## Getting the Time Stamp with time()
PHP's time() function gives you all the information that you need about the current date and time. It requires no arguments but returns an integer.

The integer returned by time() represents the number of seconds elapsed since midnight GMT on January 1, 1970. This moment is known as the UNIX epoch, and the number of seconds that have elapsed since then is referred to as a time stamp.

```
<?php
   print time();
?>
```
This will produce the following result −
```
1480930103
```
This is something difficult to understand. But PHP offers excellent tools to convert a time stamp into a form that humans are comfortable with.

## Converting a Time Stamp with getdate()
The function getdate() optionally accepts a time stamp and returns an associative array containing information about the date. If you omit the time stamp, it works with the current time stamp as returned by time().

Following table lists the elements contained in the array returned by getdate().

**seconds**

Seconds past the minutes (0-59)

Example: 20

**minutes**

Minutes past the hour (0 - 59)

Example: 29

**hours**

Hours of the day (0 - 23)

Example: 22

**mday**

Day of the month (1 - 31)

Example: 11

**wday**

Day of the week (0 - 6)

Example: 4

**mon**

Month of the year (1 - 12)

Example: 7

**year**

Year (4 digits)

Example: 1997

**yday**

Day of year ( 0 - 365 )

Example: 19

**weekday**

Day of the week

Example: Thursday

**month**

Month of the year

Example: January

**0**

Timestamp

Example: 948370048

Now you have complete control over date and time. You can format this date and time in whatever format you wan.

**Example**
```
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
```
This will produce following result −
```
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
```

## Converting a Time Stamp with date()
The date() function returns a formatted string representing a date. You can exercise an enormous amount of control over the format that date() returns with a string argument that you must pass to it.
```
date(format,timestamp)
```
The date() optionally accepts a time stamp if omitted then current date and time will be used. Any other data you include in the format string passed to date() will be included in the return value.

Following table lists the codes that a format string can contain −

**a**

'am' or 'pm' lowercase

**A**

'AM' or 'PM' uppercase

**d**

Day of month, a number with leading zeroes


**D**

Day of week (three letters)

**F**

Month name

**h**

Hour (12-hour format - leading zeroes)

**H**

Hour (24-hour format - leading zeroes)

**g**

Hour (12-hour format - no leading zeroes)

**G**

Hour (24-hour format - no leading zeroes)

**i**

Minutes ( 0 - 59 )

**j**

Day of the month (no leading zeroes

**l (Lower 'L')**

Day of the week

**L**

Leap year ('1' for yes, '0' for no)

**m**

Month of year (number - leading zeroes)

**M**

Month of year (three letters)

**r**

The RFC 2822 formatted date

**n**

Month of year (number - no leading zeroes)

**s**

Seconds of hour

**U**

Time stamp

**y**

Year (two digits)

**Y**

Year (four digits)

**z**

Day of year (0 - 365)

**Z**

Offset in seconds from GMT

### Example
Try out following example

```
<?php
   print date("m/d/y G.i:s<br>", time());
   echo "<br>";
   print "Today is ";
   print date("j of F Y, \a\\t g.i a", time());
?>
```
This will produce following result −
```
12/05/16 9:29:47
Today is 5 2016f December 2016 at 9:29 am
```
Hope you have good understanding on how to format date and time according to your requirement. For your reference a complete list of all the date and time functions is given in PHP Date & Time Functions.

# References
https://www.tutorialspoint.com/php/php_date_and_time.htm
