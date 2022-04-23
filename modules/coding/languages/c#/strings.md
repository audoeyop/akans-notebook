# C# Strings

In C#, you can use strings as array of characters, However, more common practice is to use the string keyword to declare a string variable. The string keyword is an alias for the System.String class.

Creating a String Object
You can create string object using one of the following methods −

By assigning a string literal to a String variable

By using a String class constructor

By using the string concatenation operator (+)

By retrieving a property or calling a method that returns a string

By calling a formatting method to convert a value or an object to its string representation

The following example demonstrates this −

using System;

namespace StringApplication {

   class Program {

      static void Main(string[] args) {
         //from string literal and string concatenation
         string fname, lname;
         fname = "Rowan";
         lname = "Atkinson";

         char []letters= { 'H', 'e', 'l', 'l','o' };
         string [] sarray={ "Hello", "From", "Tutorials", "Point" };

         string fullname = fname + lname;
         Console.WriteLine("Full Name: {0}", fullname);

         //by using string constructor { 'H', 'e', 'l', 'l','o' };
         string greetings = new string(letters);
         Console.WriteLine("Greetings: {0}", greetings);

         //methods returning string { "Hello", "From", "Tutorials", "Point" };
         string message = String.Join(" ", sarray);
         Console.WriteLine("Message: {0}", message);

         //formatting method to convert a value
         DateTime waiting = new DateTime(2012, 10, 10, 17, 58, 1);
         string chat = String.Format("Message sent at {0:t} on {0:D}", waiting);
         Console.WriteLine("Message: {0}", chat);
      }
   }
}
When the above code is compiled and executed, it produces the following result −

Full Name: RowanAtkinson
Greetings: Hello
Message: Hello From Tutorials Point
Message: Message sent at 5:58 PM on Wednesday, October 10, 2012
Properties of the String Class
The String class has the following two properties −

Sr.No.	Property & Description
1
Chars

Gets the Char object at a specified position in the current String object.

2
Length

Gets the number of characters in the current String object.

Methods of the String Class
The String class has numerous methods that help you in working with the string objects. The following table provides some of the most commonly used methods −

Given below is the list of methods of the String class.
You can visit MSDN library for the complete list of methods and String class constructors.

Examples
The following example demonstrates some of the methods mentioned above −

Comparing Strings
using System;

namespace StringApplication {

   class StringProg {

      static void Main(string[] args) {
         string str1 = "This is test";
         string str2 = "This is text";

         if (String.Compare(str1, str2) == 0) {
            Console.WriteLine(str1 + " and " + str2 +  " are equal.");
         } else {
            Console.WriteLine(str1 + " and " + str2 + " are not equal.");
         }
         Console.ReadKey() ;
      }
   }
}
When the above code is compiled and executed, it produces the following result −

This is test and This is text are not equal.
String Contains String
using System;

namespace StringApplication {

   class StringProg {

      static void Main(string[] args) {
         string str = "This is test";

         if (str.Contains("test")) {
            Console.WriteLine("The sequence 'test' was found.");
         }
         Console.ReadKey() ;
      }
   }
}
When the above code is compiled and executed, it produces the following result −

The sequence 'test' was found.
Getting a Substring
using System;

namespace StringApplication {

   class StringProg {

      static void Main(string[] args) {
         string str = "Last night I dreamt of San Pedro";
         Console.WriteLine(str);
         string substr = str.Substring(23);
         Console.WriteLine(substr);
      }
   }
}
When the above code is compiled and executed, it produces the following result −

San Pedro
Joining Strings
using System;

namespace StringApplication {

   class StringProg {

      static void Main(string[] args) {
         string[] starray = new string[]{"Down the way nights are dark",
            "And the sun shines daily on the mountain top",
            "I took a trip on a sailing ship",
            "And when I reached Jamaica",
            "I made a stop"};

         string str = String.Join("\n", starray);
         Console.WriteLine(str);
      }
   }
}
When the above code is compiled and executed, it produces the following result −

Down the way nights are dark
And the sun shines daily on the mountain top
I took a trip on a sailing ship
And when I reached Jamaica
I made a stop

# References
https://www.tutorialspoint.com/csharp/csharp_strings.htm
