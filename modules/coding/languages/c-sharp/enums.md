# C# Enums

An enumeration is a set of named integer constants. An enumerated type is declared using the enum keyword.

C# enumerations are value data type. In other words, enumeration contains its own values and cannot inherit or cannot pass inheritance.

### Declaring enum Variable
The general syntax for declaring an enumeration is −
```
enum <enum_name> {
   enumeration list
};
```
Where,

The enum_name specifies the enumeration type name.

The enumeration list is a comma-separated list of identifiers.

Each of the symbols in the enumeration list stands for an integer value, one greater than the symbol that precedes it. By default, the value of the first enumeration symbol is 0. For example −
```
enum Days { Sun, Mon, tue, Wed, thu, Fri, Sat };
```

**Example**

The following example demonstrates use of enum variable −
```
using System;

namespace EnumApplication {
   class EnumProgram {
      enum Days { Sun, Mon, tue, Wed, thu, Fri, Sat };

      static void Main(string[] args) {
         int WeekdayStart = (int)Days.Mon;
         int WeekdayEnd = (int)Days.Fri;

         Console.WriteLine("Monday: {0}", WeekdayStart);
         Console.WriteLine("Friday: {0}", WeekdayEnd);
         Console.ReadKey();
      }
   }
}
```
When the above code is compiled and executed, it produces the following result −
```
Monday: 1
Friday: 5
```
# References
https://www.tutorialspoint.com/csharp/csharp_enums.htm
