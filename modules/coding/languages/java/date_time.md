Java Date and Time

Java provides the Date class available in java.util package, this class encapsulates the current date and time.

The Date class supports two constructors as shown below.

- **Date( )**<br/>
This constructor initializes the object with the current date and time.

- **Date(long millisec)**<br/>
This constructor accepts an argument that equals the number of milliseconds that have elapsed since midnight, January 1, 1970.

Following are the methods of the date class.

- **boolean after(Date date)**<br/>Returns true if the invoking Date object contains a date that is later than the one specified by date, otherwise, it returns false.

- **boolean before(Date date)**<br/>Returns true if the invoking Date object contains a date that is earlier than the one specified by date, otherwise, it returns false.

- **Object clone( )**<br/>Duplicates the invoking Date object.

- **int compareTo(Date date)**<br/>Compares the value of the invoking object with that of date. Returns 0 if the values are equal. Returns a negative value if the invoking object is earlier than date. Returns a positive value if the invoking object is later than date.

- **int compareTo(Object obj)**<br/>Operates identically to compareTo(Date) if obj is of class Date. Otherwise, it throws a ClassCastException.

- **boolean equals(Object date)**<br/>Returns true if the invoking Date object contains the same time and date as the one specified by date, otherwise, it returns false.

- **long getTime( )**<br/>Returns the number of milliseconds that have elapsed since January 1, 1970.

- **int hashCode( )**<br/>Returns a hash code for the invoking object.

- **void setTime(long time)**<br/>Sets the time and date as specified by time, which represents an elapsed time in milliseconds from midnight, January 1, 1970.

- **String toString( )**<br/>Converts the invoking Date object into a string and returns the result.

Getting Current Date and Time
-----------------------------

This is a very easy method to get current date and time in Java. You can use a simple Date object with *toString()* method to print the current date and time as follows -

### Example

```
import java.util.Date;
public class DateDemo {

   public static void main(String args[]) {
      // Instantiate a Date object
      Date date = new Date();

      // display time and date using toString()
      System.out.println(date.toString());
   }
}
```

This will produce the following result -

### Output
```
on May 04 09:51:52 CDT 2009
```
Date Comparison
---------------

Following are the three ways to compare two dates -

-   You can use getTime( ) to obtain the number of milliseconds that have elapsed since midnight, January 1, 1970, for both objects and then compare these two values.

-   You can use the methods before( ), after( ), and equals( ). Because the 12th of the month comes before the 18th, for example, new Date(99, 2, 12).before(new Date (99, 2, 18)) returns true.

-   You can use the compareTo( ) method, which is defined by the Comparable interface and implemented by Date.

Date Formatting Using SimpleDateFormat
--------------------------------------

SimpleDateFormat is a concrete class for formatting and parsing dates in a locale-sensitive manner. SimpleDateFormat allows you to start by choosing any user-defined patterns for date-time formatting.

### Example

```
import java.util.*;
import java.text.*;

public class DateDemo {

   public static void main(String args[]) {
      Date dNow = new Date( );
      SimpleDateFormat ft =
      new SimpleDateFormat ("E yyyy.MM.dd 'at' hh:mm:ss a zzz");

      System.out.println("Current Date: " + ft.format(dNow));
   }
}
```

This will produce the following result -

### Output
```
Current Date: Sun 2004.07.18 at 04:14:09 PM PDT
```
Simple DateFormat Format Codes
------------------------------

To specify the time format, use a time pattern string. In this pattern, all ASCII letters are reserved as pattern letters, which are defined as the following -

| Character | Description | Example |
|-----|-----|-----
| G | Era designator | AD |
| y | Year in four digits | 2001 |
| M | Month in year | July or 07 |
| d | Day in month | 10 |
| h | Hour in A.M./P.M. (1~12) | 12 |
| H | Hour in day (0~23) | 22 |
| m | Minute in hour | 30 |
| s | Second in minute | 55 |
| S | Millisecond | 234 |
| E | Day in week | Tuesday |
| D | Day in year | 360 |
| F | Day of week in month | 2 (second Wed. in July) |
| w | Week in year | 40 |
| W | Week in month | 1 |
| a | A.M./P.M. marker | PM |
| k | Hour in day (1~24) | 24 |
| K | Hour in A.M./P.M. (0~11) | 10 |
| z | Time zone | Eastern Standard Time |
| ' | Escape for text | Delimiter |
| " | Single quote | ` |

Date Formatting Using printf
----------------------------

Date and time formatting can be done very easily using printf method. You use a two-letter format, starting with t and ending in one of the letters of the table as shown in the following code.

### Example
```
import java.util.Date;
public class DateDemo {

   public static void main(String args[]) {
      // Instantiate a Date object
      Date date = new Date();

      // display time and date
      String str = String.format("Current Date/Time : %tc", date );

      System.out.printf(str);
   }
}
```
This will produce the following result -

### Output
```
Current Date/Time : Sat Dec 15 16:37:57 MST 2012
```
It would be a bit silly if you had to supply the date multiple times to format each part. For that reason, a format string can indicate the index of the argument to be formatted.

The index must immediately follow the % and it must be terminated by a $.

### Example

```
import java.util.Date;
public class DateDemo {

   public static void main(String args[]) {
      // Instantiate a Date object
      Date date = new Date();

      // display time and date
      System.out.printf("%1$s %2$tB %2$td, %2$tY", "Due date:", date);
   }
}
```

This will produce the following result -

### Output
```
Due date: February 09, 2004
```
Alternatively, you can use the < flag. It indicates that the same argument as in the preceding format specification should be used again.

### Example

```
import java.util.Date;
public class DateDemo {

   public static void main(String args[]) {
      // Instantiate a Date object
      Date date = new Date();

      // display formatted date
      System.out.printf("%s %tB %<te, %<tY", "Due date:", date);
   }
}
```

This will produce the following result -

### Output

Due date: February 09, 2004

Date and Time Conversion Characters
-----------------------------------

| Character | Description | Example |
|-----|-----|-----
| c | Complete date and time | Mon May 04 09:51:52 CDT 2009 |
| F | ISO 8601 date | 2004-02-09 |
| D | U.S. formatted date (month/day/year) | 02/09/2004 |
| T | 24-hour time | 18:05:19 |
| r | 12-hour time | 06:05:19 pm |
| R | 24-hour time, no seconds | 18:05 |
| Y | Four-digit year (with leading zeroes) | 2004 |
| y | Last two digits of the year (with leading zeroes) | 04 |
| C | First two digits of the year (with leading zeroes) | 20 |
| B | Full month name | February |
| b | Abbreviated month name | Feb |
| m | Two-digit month (with leading zeroes) | 02 |
| d | Two-digit day (with leading zeroes) | 03 |
| e | Two-digit day (without leading zeroes) | 9 |
| A | Full weekday name | Monday |
| a | Abbreviated weekday name | Mon |
| j | Three-digit day of year (with leading zeroes) | 069 |
| H | Two-digit hour (with leading zeroes), between 00 and 23 | 18 |
| k | Two-digit hour (without leading zeroes), between 0 and 23 | 18 |
| I | Two-digit hour (with leading zeroes), between 01 and 12 | 06 |
| l | Two-digit hour (without leading zeroes), between 1 and 12 | 6 |
| M | Two-digit minutes (with leading zeroes) | 05 |
| S | Two-digit seconds (with leading zeroes) | 19 |
| L | Three-digit milliseconds (with leading zeroes) | 047 |
| N | Nine-digit nanoseconds (with leading zeroes) | 047000000 |
| P | Uppercase morning or afternoon marker | PM |
| p | Lowercase morning or afternoon marker | pm |
| z | RFC 822 numeric offset from GMT | -0800 |
| Z | Time zone | PST |
| s | Seconds since 1970-01-01 00:00:00 GMT | 1078884319 |
| Q | Milliseconds since 1970-01-01 00:00:00 GMT | 1078884319047 |

There are other useful classes related to Date and time. For more details, you can refer to Java Standard documentation.

Parsing Strings into Dates
--------------------------

The SimpleDateFormat class has some additional methods, notably parse( ), which tries to parse a string according to the format stored in the given SimpleDateFormat object.

### Example

```
import java.util.*;
import java.text.*;

public class DateDemo {

   public static void main(String args[]) {
      SimpleDateFormat ft = new SimpleDateFormat ("yyyy-MM-dd");
      String input = args.length == 0 ? "1818-11-11" : args[0];

      System.out.print(input + " Parses as ");
      Date t;
      try {
         t = ft.parse(input);
         System.out.println(t);
      } catch (ParseException e) {
         System.out.println("Unparseable using " + ft);
      }
   }
}
```

A sample run of the above program would produce the following result -
```
1818-11-11 Parses as Wed Nov 11 00:00:00 EST 1818
```

Sleeping for a While
--------------------

You can sleep for any period of time from one millisecond up to the lifetime of your computer. For example, the following program would sleep for 3 seconds -

### Example

```
import java.util.*;
public class SleepDemo {

   public static void main(String args[]) {
      try {
         System.out.println(new Date( ) + "\n");
         Thread.sleep(5*60*10);
         System.out.println(new Date( ) + "\n");
      } catch (Exception e) {
         System.out.println("Got an exception!");
      }
   }
}
```
This will produce the following result -

```
Sun May 03 18:04:41 GMT 2022
Sun May 03 18:04:51 GMT 2022
```

Measuring Elapsed Time
----------------------

Sometimes, you may need to measure point in time in milliseconds. So let's re-write the above example once again -

### Example

```
import java.util.*;
public class DiffDemo {

   public static void main(String args[]) {
      try {
         long start = System.currentTimeMillis( );
         System.out.println(new Date( ) + "\n");

         Thread.sleep(5*60*10);
         System.out.println(new Date( ) + "\n");

         long end = System.currentTimeMillis( );
         long diff = end - start;
         System.out.println("Difference is : " + diff);
      } catch (Exception e) {
         System.out.println("Got an exception!");
      }
   }
}
```
This will produce the following result -

```
Sun May 03 18:16:51 GMT 2009
Sun May 03 18:16:57 GMT 2009
Difference is : 5993
```
# References
https://www.tutorialspoint.com/java/java_date_time.htm
