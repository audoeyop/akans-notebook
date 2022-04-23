# Java Numbers

Normally, when we work with Numbers, we use primitive data types such as byte, int, long, double, etc.

Example
```

```
**Example**
```
int i =  5000;
float gpa =  13.65f;
double mask =  125;
```
However, in development, we come across situations where we need to use objects instead of primitive data types. In order to achieve this, Java provides wrapper classes.

All the wrapper classes (Integer, Long, Byte, Double, Float, Short) are subclasses of the abstract class Number.

![Number Classes](assets/number_classes.jpeg)

The object of the wrapper class contains or wraps its respective primitive data type. Converting primitive data types into object is called **boxing, and this is taken care by the compiler. Therefore, while using a wrapper class you just need to pass the value of the primitive data type to the constructor of the Wrapper class.

And the Wrapper object will be converted back to a primitive data type, and this process is called unboxing. The **Number** class is part of the java.lang package.

Following is an example of boxing and unboxing -

Example
```

```
**Example**
```
public class Test {

   public static void main(String args[]) {
      Integer x = 5; // boxes int to an Integer object
      x =  x + 10;   // unboxes the Integer to a int
      System.out.println(x);
   }
}
```

This will produce the following result -
```
15
```
When x is assigned an integer value, the compiler boxes the integer because x is integer object. Later, x is unboxed so that they can be added as an integer.

Number Methods
--------------

**xxxValue()**

Converts the value of this Number object to the xxx data type and returns it.

Here is a separate method for each primitive data type −
```
byte byteValue()
short shortValue()
int intValue()
long longValue()
float floatValue()
double doubleValue()
```

Example
```
public class Test {

   public static void main(String args[]) {
      Integer x = 5;

      // Returns byte primitive data type
      System.out.println( x.byteValue() );

      // Returns double primitive data type
      System.out.println(x.doubleValue());

      // Returns long primitive data type
      System.out.println( x.longValue() );      
   }
}
```
**compareTo()**

Compares this Number object to the argument.

Example
```
public class Test {

   public static void main(String args[]) {
      Integer x = 5;

      System.out.println(x.compareTo(3));
      System.out.println(x.compareTo(5));
      System.out.println(x.compareTo(8));            
   }
}
```
**equals()**

Determines whether this number object is equal to the argument.

Example
```
public class Test {

   public static void main(String args[]) {
      Integer x = 5;
      Integer y = 10;
      Integer z =5;
      Short a = 5;

      System.out.println(x.equals(y));  
      System.out.println(x.equals(z));
      System.out.println(x.equals(a));
   }
}
```
**valueOf()**

The valueOf method returns the relevant Number Object holding the value of the argument passed. The argument can be a primitive data type, String, etc.

Following are all the variants of this method −
```
static Integer valueOf(int i)
static Integer valueOf(String s)
static Integer valueOf(String s, int radix)
```

Example
```
public class Test {

   public static void main(String args[]) {
      Integer x =Integer.valueOf(9);
      Double c = Double.valueOf(5);
      Float a = Float.valueOf("80");               
      Integer b = Integer.valueOf("444",16);

      System.out.println(x);
      System.out.println(c);
      System.out.println(a);
      System.out.println(b);
   }
}
```
**toString()**

Returns a String object representing the value of a specified int or Integer.

Example
```
public class Test {

   public static void main(String args[]) {
      Integer x = 5;

      System.out.println(x.toString());  
      System.out.println(Integer.toString(12));
   }
}
```
**parseInt()**

This method is used to get the primitive data type of a certain String.

Example
```
public class Test {

   public static void main(String args[]) {
      int x =Integer.parseInt("9");
      double c = Double.parseDouble("5");
      int b = Integer.parseInt("444",16);

      System.out.println(x);
      System.out.println(c);
      System.out.println(b);
   }
}
```
**abs()**

Returns the absolute value of the argument.

Example
```
public class Test {

   public static void main(String args[]) {
      Integer a = -8;
      double d = -100;
      float f = -90;

      System.out.println(Math.abs(a));
      System.out.println(Math.abs(d));     
      System.out.println(Math.abs(f));    
   }
}
```
**ceil()**

Returns the smallest integer that is greater than or equal to the argument. Returned as a double.

Example
```
public class Test {

   public static void main(String args[]) {
      double d = -100.675;
      float f = -90;    

      System.out.println(Math.ceil(d));
      System.out.println(Math.ceil(f));

      System.out.println(Math.floor(d));
      System.out.println(Math.floor(f));
   }
}
```
**floor()**

Returns the largest integer that is less than or equal to the argument. Returned as a double.

Example
```
public class Test {

   public static void main(String args[]) {
      double d = -100.675;
      float f = -90;

      System.out.println(Math.floor(d));
      System.out.println(Math.floor(f));

      System.out.println(Math.ceil(d));
      System.out.println(Math.ceil(f));
   }
}
```
**rint()**

Returns the integer that is closest in value to the argument. Returned as a double.

Example
```
public class Test {

   public static void main(String args[]) {
      double d = 100.675;
      double e = 100.500;
      double f = 100.200;

      System.out.println(Math.rint(d));
      System.out.println(Math.rint(e));
      System.out.println(Math.rint(f));
   }
}
```
**round()**

Returns the closest long or int, as indicated by the method's return type to the argument.

Example
```
public class Test {

   public static void main(String args[]) {
      double d = 100.675;
      double e = 100.500;
      float f = 100;
      float g = 90f;

      System.out.println(Math.round(d));
      System.out.println(Math.round(e));
      System.out.println(Math.round(f));
      System.out.println(Math.round(g));
   }
}
```
**min()**

Returns the smaller of the two arguments.

Example
```
public class Test {

   public static void main(String args[]) {
      System.out.println(Math.min(12.123, 12.456));      
      System.out.println(Math.min(23.12, 23.0));  
   }
}
```
**max()**

Returns the larger of the two arguments.

Example
```
public class Test {

   public static void main(String args[]) {
      System.out.println(Math.max(12.123, 12.456));      
      System.out.println(Math.max(23.12, 23.0));  
   }
}
```
**exp()**

Returns the base of the natural logarithms, e, to the power of the argument.

Example
```
public class Test {

   public static void main(String args[]) {
      double x = 11.635;
      double y = 2.76;

      System.out.printf("The value of e is %.4f%n", Math.E);
      System.out.printf("exp(%.3f) is %.3f%n", x, Math.exp(x));  
   }
}
```
**log()**

Returns the natural logarithm of the argument.

Example
```
public class Test {

   public static void main(String args[]) {
      double x = 11.635;
      double y = 2.76;

      System.out.printf("The value of e is %.4f%n", Math.E);
      System.out.printf("log(%.3f) is %.3f%n", x, Math.log(x));
   }
}
```
**pow()**

Returns the value of the first argument raised to the power of the second argument.

Example
```
public class Test {

   public static void main(String args[]) {
      double x = 11.635;
      double y = 2.76;

      System.out.printf("The value of e is %.4f%n", Math.E);
      System.out.printf("pow(%.3f, %.3f) is %.3f%n", x, y, Math.pow(x, y));
   }
}
```
**sqrt()**

Returns the square root of the argument.

Example
```
public class Test {

   public static void main(String args[]) {
      double x = 11.635;
      double y = 2.76;

      System.out.printf("The value of e is %.4f%n", Math.E);
      System.out.printf("sqrt(%.3f) is %.3f%n", x, Math.sqrt(x));
   }
}
```
**sin()**

Returns the sine of the specified double value.

Example
```
public class Test {

   public static void main(String args[]) {
      double degrees = 45.0;
      double radians = Math.toRadians(degrees);

      System.out.format("The value of pi is %.4f%n", Math.PI);
      System.out.format("The sine of %.1f degrees is %.4f%n", degrees, Math.sin(radians));
   }
}
```
**cos()**

Returns the cosine of the specified double value.

Example
```
public class Test {

   public static void main(String args[]) {
      double degrees = 45.0;
      double radians = Math.toRadians(degrees);

      System.out.format("The value of pi is %.4f%n", Math.PI);
      System.out.format("The cosine of %.1f degrees is %.4f%n", degrees, Math.cos(radians));
   }
}
```
**tan()**

Returns the tangent of the specified double value.

Example
```
public class Test {

   public static void main(String args[]) {
      double degrees = 45.0;
      double radians = Math.toRadians(degrees);

      System.out.format("The value of pi is %.4f%n", Math.PI);
      System.out.format("The tangent of %.1f degrees is %.4f%n", degrees, Math.tan(radians));
   }
}
```
**asin()**

Returns the arcsine of the specified double value.

Example
```
public class Test {

   public static void main(String args[]) {   
      double degrees = 45.0;
      double radians = Math.toRadians(degrees);

      System.out.format("The value of pi is %.4f%n", Math.PI);
      System.out.format("The arcsine of %.4f is %.4f degrees %n", Math.sin(radians),
         Math.toDegrees(Math.asin(Math.sin(radians))));
   }
}
```
**acos()**

Returns the arccosine of the specified double value.

Example
```
public class Test {

   public static void main(String args[]) {
      double degrees = 45.0;
      double radians = Math.toRadians(degrees);

      System.out.format("The value of pi is %.4f%n", Math.PI);
      System.out.format("The arccosine of %.4f is %.4f degrees %n", Math.cos(radians),
         Math.toDegrees(Math.acos(Math.cos(radians))));
   }
}
```
**atan()**

Returns the arctangent of the specified double value.

Example
```
public class Test {

   public static void main(String args[]) {
      double degrees = 45.0;
      double radians = Math.toRadians(degrees);

      System.out.format("The value of pi is very very very approximately %.4f%n", Math.PI);
      System.out.format("The arctangent of %.4f is %.4f degrees %n", Math.cos(radians),
         Math.toDegrees(Math.atan(Math.sin(radians))));
   }
}
```
**atan2()**

Converts rectangular coordinates (x, y) to polar coordinate (r, theta) and returns theta.

Example
```
public class Test {

   public static void main(String args[]) {
      double x = 45.0;
      double y = 30.0;

      System.out.println( Math.atan2(x, y) );
   }
}
```
**toDegrees()**

Converts the argument to degrees.

Example
```
public class Test {

   public static void main(String args[]) {
      double x = 45.0;
      double y = 30.0;

      System.out.println( Math.toDegrees(x) );
      System.out.println( Math.toDegrees(y) );
   }
}
```
**toRadians()**

Converts the argument to radians.

Example
``public class Test {

   public static void main(String args[]) {
      double x = 45.0;
      double y = 30.0;

      System.out.println( Math.toRadians(x) );
      System.out.println( Math.toRadians(y) );
   }
}`

```
**random()**

Returns a random number.

Example
```
public class Test {

   public static void main(String args[]) {
      System.out.println( Math.random() );
      System.out.println( Math.random() );
   }
}
```

# References
https://www.tutorialspoint.com/java/java_numbers.htm
