# C# Type Conversion

Type conversion is converting one type of data to another type. It is also known as Type Casting. In C#, type casting has two forms -

-   Implicit type conversion - These conversions are performed by C# in a type-safe manner. For example, are conversions from smaller to larger integral types and conversions from derived classes to base classes.

-   Explicit type conversion - These conversions are done explicitly by users using the pre-defined functions. Explicit conversions require a cast operator.

The following example shows an explicit type conversion -

```
using System;

namespace TypeConversionApplication {
   class ExplicitConversion {
      static void Main(string[] args) {
         double d = 5673.74;
         int i;

         // cast double to int.
         i = (int)d;
         Console.WriteLine(i);
         Console.ReadKey();
      }
   }
}
```

When the above code is compiled and executed, it produces the following result -
```
5673
```

C# Type Conversion Methods
--------------------------

C# provides the following built-in type conversion methods -

**ToBoolean**

Converts a type to a Boolean value, where possible.

**ToByte**

Converts a type to a byte.

**ToChar**

Converts a type to a single Unicode character, where possible.

**ToDateTime**

Converts a type (integer or string type) to date-time structures.

**ToDecimal**

Converts a floating point or integer type to a decimal type.

**ToDouble**

Converts a type to a double type.

**ToInt16**

Converts a type to a 16-bit integer.

**ToInt32**

Converts a type to a 32-bit integer.

**ToInt64**

Converts a type to a 64-bit integer.

**ToSbyte**

Converts a type to a signed byte type.

**ToSingle**

Converts a type to a small floating point number.

**ToString**

Converts a type to a string.

**ToType**

Converts a type to a specified type.

**ToUInt16**

Converts a type to an unsigned int type.

**ToUInt32**

Converts a type to an unsigned long type.

**ToUInt64**

Converts a type to an unsigned big integer.

 |

The following example converts various value types to string type -

```
using System;

namespace TypeConversionApplication {
   class StringConversion {
      static void Main(string[] args) {
         int i = 75;
         float f = 53.005f;
         double d = 2345.7652;
         bool b = true;

         Console.WriteLine(i.ToString());
         Console.WriteLine(f.ToString());
         Console.WriteLine(d.ToString());
         Console.WriteLine(b.ToString());
         Console.ReadKey();

      }
   }
}
```
When the above code is compiled and executed, it produces the following result -
```
75
53.005
2345.7652
True
```
# References
https://www.tutorialspoint.com/csharp/csharp_type_conversion.htm
