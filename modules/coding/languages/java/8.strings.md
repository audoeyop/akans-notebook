# Java Strings

Strings, which are widely used in Java programming, are a sequence of characters. In Java programming language, strings are treated as objects.

The Java platform provides the String class to create and manipulate strings.

Creating Strings
----------------

The most direct way to create a string is to write -
```
String greeting = "Hello world!";
```
Whenever it encounters a string literal in your code, the compiler creates a String object with its value in this case, "Hello world!'.

As with any other object, you can create String objects by using the new keyword and a constructor. The String class has 11 constructors that allow you to provide the initial value of the string using different sources, such as an array of characters.

### Example

```
public class StringDemo {

   public static void main(String args[]) {
      char[] helloArray = { 'h', 'e', 'l', 'l', 'o', '.' };
      String helloString = new String(helloArray);  
      System.out.println( helloString );
   }
}
```
This will produce the following result -

### Output
```
hello.
```

**Note** - The String class is immutable, so that once it is created a String object cannot be changed. If there is a necessity to make a lot of modifications to Strings of characters, then you should use **StringBuffer** & **StringBuilder** Classes.

String Length
-------------

Methods used to obtain information about an object are known as accessor methods. One accessor method that you can use with strings is the length() method, which returns the number of characters contained in the string object.

The following program is an example of length(), method String class.

### Example

```
public class StringDemo {

   public static void main(String args[]) {
      String palindrome = "Dot saw I was Tod";
      int len = palindrome.length();
      System.out.println( "String Length is : " + len );
   }
}
```
This will produce the following result -
```
String Length is : 17
```

Concatenating Strings
---------------------

The String class includes a method for concatenating two strings -
```
string1.concat(string2);
```
This returns a new string that is string1 with string2 added to it at the end. You can also use the concat() method with string literals, as in -
```
"My name is ".concat("Zara");
```
Strings are more commonly concatenated with the + operator, as in -
```
"Hello," + " world" + "!"
```
which results in -
```
"Hello, world!"
```
Let us look at the following example -

### Example
```
public class StringDemo {

   public static void main(String args[]) {
      String string1 = "saw I was ";
      System.out.println("Dot " + string1 + "Tod");
   }
}
```

This will produce the following result -

### Output
```
Dot saw I was Tod
```
Creating Format Strings
-----------------------

You have printf() and format() methods to print output with formatted numbers. The String class has an equivalent class method, format(), that returns a String object rather than a PrintStream object.

Using String's static format() method allows you to create a formatted string that you can reuse, as opposed to a one-time print statement. For example, instead of -

### Example

```
System.out.printf("The value of the float variable is " +
                  "%f, while the value of the integer " +
                  "variable is %d, and the string " +
                  "is %s", floatVar, intVar, stringVar);

```

You can write -

```
String fs;
fs = String.format("The value of the float variable is " +
                   "%f, while the value of the integer " +
                   "variable is %d, and the string " +
                   "is %s", floatVar, intVar, stringVar);
System.out.println(fs);
```

String Methods
--------------

Here is a list of methods supported by String class -

**char charAt(int index)**<br/>
Returns the character at the specified index.

**int compareTo(Object o)**<br/>
Compares this String to another Object.

**int compareTo(String anotherString)**<br/>
Compares two strings lexicographically.

**int compareToIgnoreCase(String str)**<br/>
Compares two strings lexicographically, ignoring case differences.

**String concat(String str)**<br/>
Concatenates the specified string to the end of this string.

**boolean contentEquals(StringBuffer sb)**<br/>
Returns true if and only if this String represents the same sequence of characters as the specified StringBuffer.

**static String copyValueOf(char[] data)**<br/>
Returns a String that represents the character sequence in the array specified.

**static String copyValueOf(char[] data, int offset, int count)**<br/>
Returns a String that represents the character sequence in the array specified.

**boolean endsWith(String suffix)**<br/>
Tests if this string ends with the specified suffix.

**boolean equals(Object anObject)**<br/>
Compares this string to the specified object.

**boolean equalsIgnoreCase(String anotherString)**<br/>
Compares this String to another String, ignoring case considerations.

**byte[] getBytes()**<br/>
Encodes this String into a sequence of bytes using the platform's default charset, storing the result into a new byte array.

**byte[] getBytes(String charsetName)**<br/>
Encodes this String into a sequence of bytes using the named charset, storing the result into a new byte array.

**void getChars(int srcBegin, int srcEnd, char[] dst, int dstBegin)**<br/>
Copies characters from this string into the destination character array.

**int hashCode()**<br/>
Returns a hash code for this string.

**int indexOf(int ch)**<br/>
Returns the index within this string of the first occurrence of the specified character.

**int indexOf(int ch, int fromIndex)**<br/>
Returns the index within this string of the first occurrence of the specified character, starting the search at the specified index.

**int indexOf(String str)**<br/>
Returns the index within this string of the first occurrence of the specified substring.

**int indexOf(String str, int fromIndex)**<br/>
Returns the index within this string of the first occurrence of the specified substring, starting at the specified index.

**String intern()**<br/>
Returns a canonical representation for the string object.

**int lastIndexOf(int ch)**<br/>
Returns the index within this string of the last occurrence of the specified character.

**int lastIndexOf(int ch, int fromIndex)**<br/>
Returns the index within this string of the last occurrence of the specified character, searching backward starting at the specified index.

**int lastIndexOf(String str)**<br/>
Returns the index within this string of the rightmost occurrence of the specified substring.

**int lastIndexOf(String str, int fromIndex)**<br/>
Returns the index within this string of the last occurrence of the specified substring, searching backward starting at the specified index.

**int length()**<br/>
Returns the length of this string.

**boolean matches(String regex)**<br/>
Tells whether or not this string matches the given regular expression.

**boolean regionMatches(boolean ignoreCase, int toffset, String other, int ooffset, int len)**<br/>
Tests if two string regions are equal.

**boolean regionMatches(int toffset, String other, int ooffset, int len)**<br/>
Tests if two string regions are equal.

**String replace(char oldChar, char newChar)**<br/>
Returns a new string resulting from replacing all occurrences of oldChar in this string with newChar.

**String replaceAll(String regex, String replacement)**<br/>
Replaces each substring of this string that matches the given regular expression with the given replacement.

**String replaceFirst(String regex, String replacement)**<br/>
Replaces the first substring of this string that matches the given regular expression with the given replacement.

**String[] split(String regex)**<br/>
Splits this string around matches of the given regular expression.

**String[] split(String regex, int limit)**<br/>
Splits this string around matches of the given regular expression.

**boolean startsWith(String prefix)**<br/>
Tests if this string starts with the specified prefix.

**boolean startsWith(String prefix, int toffset)**<br/>
Tests if this string starts with the specified prefix beginning a specified index.

**CharSequence subSequence(int beginIndex, int endIndex)**<br/>
Returns a new character sequence that is a subsequence of this sequence.

**String substring(int beginIndex)**<br/>
Returns a new string that is a substring of this string.

**String substring(int beginIndex, int endIndex)**<br/>
Returns a new string that is a substring of this string.

**char[] toCharArray()**<br/>
Converts this string to a new character array.

**String toLowerCase()**<br/>
Converts all of the characters in this String to lower case using the rules of the default locale.

**String toLowerCase(Locale locale)**<br/>
Converts all of the characters in this String to lower case using the rules of the given Locale.

**String toString()**<br/>
This object (which is already a string!) is itself returned.

**String toUpperCase()**<br/>
Converts all of the characters in this String to upper case using the rules of the default locale.

**String toUpperCase(Locale locale)**<br/>
Converts all of the characters in this String to upper case using the rules of the given Locale.

**String trim()**<br/>
Returns a copy of the string, with leading and trailing whitespace omitted.

**static String valueOf(primitive data type x)**<br/>
Returns the string representation of the passed data type argument.

<!-- TODO: Add Examples -->

# References
https://www.tutorialspoint.com/java/java_string_replaceall.htm
