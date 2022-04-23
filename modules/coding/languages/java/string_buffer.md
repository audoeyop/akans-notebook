# Java String Buffer and String Builder

The StringBuffer and StringBuilder classes are used when there is a necessity to make a lot of modifications to Strings of characters.

Unlike Strings, objects of type StringBuffer and String builder can be modified over and over again without leaving behind a lot of new unused objects.

The StringBuilder class was introduced as of Java 5 and the main difference between the StringBuffer and StringBuilder is that StringBuilders methods are not thread safe (not synchronised).

It is recommended to use StringBuilder whenever possible because it is faster than StringBuffer. However, if the thread safety is necessary, the best option is StringBuffer objects.

Example
-------

```
public class Test {

   public static void main(String args[]) {
      StringBuffer sBuffer = new StringBuffer("test");
      sBuffer.append(" String Buffer");
      System.out.println(sBuffer);  
   }
}
```

This will produce the following result -
```
test String Buffer
```
StringBuffer Methods
--------------------

Here is the list of important methods supported by StringBuffer class -

**public StringBuffer append(String s)**

Updates the value of the object that invoked the method. The method takes boolean, char, int, long, Strings, etc.

Example
```
public class Test {

   public static void main(String args[]) {
      StringBuffer sb = new StringBuffer("Test");
      sb.append(" More Text");
      System.out.println(sb);
   }  
}
```
Output
```
Test More Text
```

**public StringBuffer reverse()**

The method reverses the value of the StringBuffer object that invoked the method.

Example
```
public class Test {

   public static void main(String args[]) {
      StringBuffer buffer = new StringBuffer("Game Plan");
      buffer.reverse();
      System.out.println(buffer);
   }  
}
```
Output
```
nalP emaG
```

**public delete(int start, int end)**

Deletes the string starting from the start index until the end index.

Example
```
public class Test {

   public static void main(String args[]) {
      StringBuffer sb = new StringBuffer("abcdefghijk");
      sb.delete(3, 7);
      System.out.println(sb);
   }  
}
```
Output
```
abchijk
```

**public insert(int offset, int i)**

This method inserts a string s at the position mentioned by the offset.

Example
```
public class Test {

   public static void main(String args[]) {
      StringBuffer sb = new StringBuffer("abcdefghijk");
      sb.insert(3, "123");
      System.out.println(sb);
   }  
}
```
Output
```
abc123defghijk
```

**replace(int start, int end, String str)**

This method replaces the characters in a substring of this StringBuffer with characters in the specified String.
Example
```
public class Test {

   public static void main(String args[]) {
      StringBuffer sb = new StringBuffer("abcdefghijk");
      sb.replace(3, 8, "ZARA");
      System.out.println(sb);
   }  
}
```
Output
```
abcZARAijk
```
# References
https://www.tutorialspoint.com/java/java_string_buffer.htm
