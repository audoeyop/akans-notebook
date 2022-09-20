# Java Data Structures

The data structures provided by the Java utility package are very powerful and perform a wide range of functions. These data structures consist of the following interface and classes -

-   Enumeration
-   BitSet
-   Vector
-   Stack
-   Dictionary
-   Hashtable
-   Properties

All these classes are now legacy and Java-2 has introduced a new framework called Collections Framework, which is discussed in the next chapter. -

The Enumeration
---------------

The Enumeration interface isn't itself a data structure, but it is very important within the context of other data structures. The Enumeration interface defines a means to retrieve successive elements from a data structure.

For example, Enumeration defines a method called nextElement that is used to get the next element in a data structure that contains multiple elements.

Following is an example showing usage of Enumeration.
```
import java.util.Vector;
import java.util.Enumeration;

public class EnumerationTester {

   public static void main(String args[]) {
      Enumeration days;
      Vector dayNames = new Vector();

      dayNames.add("Sunday");
      dayNames.add("Monday");
      dayNames.add("Tuesday");
      dayNames.add("Wednesday");
      dayNames.add("Thursday");
      dayNames.add("Friday");
      dayNames.add("Saturday");
      days = dayNames.elements();

      while (days.hasMoreElements()) {
         System.out.println(days.nextElement());
      }
   }
}
```
This will produce the following result −
```
Sunday
Monday
Tuesday
Wednesday
Thursday
Friday
Saturday
```

The BitSet
----------

The BitSet class implements a group of bits or flags that can be set and cleared individually.

This class is very useful in cases where you need to keep up with a set of Boolean values; you just assign a bit to each value and set or clear it as appropriate.

The following program illustrates several of the methods supported by this data structure −
```
import java.util.BitSet;
public class BitSetDemo {

  public static void main(String args[]) {
      BitSet bits1 = new BitSet(16);
      BitSet bits2 = new BitSet(16);

      // set some bits
      for(int i = 0; i < 16; i++) {
         if((i % 2) == 0) bits1.set(i);
         if((i % 5) != 0) bits2.set(i);
      }

      System.out.println("Initial pattern in bits1: ");
      System.out.println(bits1);
      System.out.println("\nInitial pattern in bits2: ");
      System.out.println(bits2);

      // AND bits
      bits2.and(bits1);
      System.out.println("\nbits2 AND bits1: ");
      System.out.println(bits2);

      // OR bits
      bits2.or(bits1);
      System.out.println("\nbits2 OR bits1: ");
      System.out.println(bits2);

      // XOR bits
      bits2.xor(bits1);
      System.out.println("\nbits2 XOR bits1: ");
      System.out.println(bits2);
   }
}
```
This will produce the following result −

```
Initial pattern in bits1:
{0, 2, 4, 6, 8, 10, 12, 14}

Initial pattern in bits2:
{1, 2, 3, 4, 6, 7, 8, 9, 11, 12, 13, 14}

bits2 AND bits1:
{2, 4, 6, 8, 12, 14}

bits2 OR bits1:
{0, 2, 4, 6, 8, 10, 12, 14}

bits2 XOR bits1:
{}
  ```

The Vector
----------

The Vector class is similar to a traditional Java array, except that it can grow as necessary to accommodate new elements.

Like an array, elements of a Vector object can be accessed via an index into the vector.

The nice thing about using the Vector class is that you don't have to worry about setting it to a specific size upon creation; it shrinks and grows automatically when necessary.

The following program illustrates several of the methods supported by this collection −

```
import java.util.*;
public class VectorDemo {

   public static void main(String args[]) {
      // initial size is 3, increment is 2
      Vector v = new Vector(3, 2);
      System.out.println("Initial size: " + v.size());
      System.out.println("Initial capacity: " + v.capacity());

      v.addElement(new Integer(1));
      v.addElement(new Integer(2));
      v.addElement(new Integer(3));
      v.addElement(new Integer(4));
      System.out.println("Capacity after four additions: " + v.capacity());

      v.addElement(new Double(5.45));
      System.out.println("Current capacity: " + v.capacity());

      v.addElement(new Double(6.08));
      v.addElement(new Integer(7));
      System.out.println("Current capacity: " + v.capacity());

      v.addElement(new Float(9.4));
      v.addElement(new Integer(10));
      System.out.println("Current capacity: " + v.capacity());

      v.addElement(new Integer(11));
      v.addElement(new Integer(12));
      System.out.println("First element: " + (Integer)v.firstElement());
      System.out.println("Last element: " + (Integer)v.lastElement());

      if(v.contains(new Integer(3)))
         System.out.println("Vector contains 3.");

      // enumerate the elements in the vector.
      Enumeration vEnum = v.elements();
      System.out.println("\nElements in vector:");

      while(vEnum.hasMoreElements())
         System.out.print(vEnum.nextElement() + " ");
      System.out.println();
   }
}
```
This will produce the following result −

```
Initial size: 0
Initial capacity: 3
Capacity after four additions: 5
Current capacity: 5
Current capacity: 7
Current capacity: 9
First element: 1
Last element: 12
Vector contains 3.

Elements in vector:
1 2 3 4 5.45 6.08 7 9.4 10 11 12
```

The Stack
---------

The Stack class implements a last-in-first-out (LIFO) stack of elements.

You can think of a stack literally as a vertical stack of objects; when you add a new element, it gets stacked on top of the others.

When you pull an element off the stack, it comes off the top. In other words, the last element you added to the stack is the first one to come back off.

The following program illustrates several of the methods supported by this collection −

```
import java.util.*;
public class StackDemo {

   static void showpush(Stack st, int a) {
      st.push(new Integer(a));
      System.out.println("push(" + a + ")");
      System.out.println("stack: " + st);
   }

   static void showpop(Stack st) {
      System.out.print("pop -> ");
      Integer a = (Integer) st.pop();
      System.out.println(a);
      System.out.println("stack: " + st);
   }

   public static void main(String args[]) {
      Stack st = new Stack();
      System.out.println("stack: " + st);
      showpush(st, 42);
      showpush(st, 66);
      showpush(st, 99);
      showpop(st);
      showpop(st);
      showpop(st);
      try {
         showpop(st);
      } catch (EmptyStackException e) {
         System.out.println("empty stack");
      }
   }
}
```
This will produce the following result −

```
stack: [ ]
push(42)
stack: [42]
push(66)
stack: [42, 66]
push(99)
stack: [42, 66, 99]
pop -> 99
stack: [42, 66]
pop -> 66
stack: [42]
pop -> 42
stack: [ ]
pop -> empty stack
```

The Dictionary
--------------

The Dictionary class is an abstract class that defines a data structure for mapping keys to values.

This is useful in cases where you want to be able to access data via a particular key rather than an integer index.

Since the Dictionary class is abstract, it provides only the framework for a key-mapped data structure rather than a specific implementation.

```
import java.util.*;

class My_Dictionary
{
	public static void main(String[] args)
	{
		// creating a My HashTable Dictionary
		Hashtable<String, String> my_dict = new Hashtable<String, String>();

    // Using a few dictionary Class methods
		// using put method
		my_dict.put("01", "Apple");
		my_dict.put("10", "Banana");

		// using get() method
    System.out.println("\nValue at key = 10 : " + my_dict.get("10"));
    System.out.println("Value at key = 11 : " + my_dict.get("11"));

		// using isEmpty() method
    System.out.println("\nIs my dictionary empty? : " + my_dict.isEmpty() + "\n");

		// using remove() method
		// remove value at key 10
    my_dict.remove("10");
    System.out.println("Checking if the removed value exists: " + my_dict.get("10"));
    System.out.println("\nSize of my_dict : " + my_dict.size());
	}
}
```

Output
```
Value at key = 10 : Banana
Value at key = 11 : null

Is my dictionary empty? : false

Checking if the removed value exists: null

Size of my_dict : 1
```

The Hashtable
-------------

The Hashtable class provides a means of organizing data based on some user-defined key structure.

For example, in an address list hash table you could store and sort data based on a key such as ZIP code rather than on a person's name.

The specific meaning of keys with regard to hash tables is totally dependent on the usage of the hash table and the data it contains.

The following program illustrates several of the methods supported by this data structure −

```
import java.util.*;
public class HashTableDemo {

   public static void main(String args[]) {
      // Create a hash map
      Hashtable balance = new Hashtable();
      Enumeration names;
      String str;
      double bal;

      balance.put("Zara", new Double(3434.34));
      balance.put("Mahnaz", new Double(123.22));
      balance.put("Ayan", new Double(1378.00));
      balance.put("Daisy", new Double(99.22));
      balance.put("Qadir", new Double(-19.08));

      // Show all balances in hash table.
      names = balance.keys();

      while(names.hasMoreElements()) {
         str = (String) names.nextElement();
         System.out.println(str + ": " + balance.get(str));
      }        
      System.out.println();

      // Deposit 1,000 into Zara's account
      bal = ((Double)balance.get("Zara")).doubleValue();
      balance.put("Zara", new Double(bal + 1000));
      System.out.println("Zara's new balance: " + balance.get("Zara"));
   }
}
```
This will produce the following result −

```
Qadir: -19.08
Zara: 3434.34
Mahnaz: 123.22
Daisy: 99.22
Ayan: 1378.0

Zara's new balance: 4434.34
```

The Properties
--------------

Properties is a subclass of Hashtable. It is used to maintain lists of values in which the key is a String and the value is also a String.

The Properties class is used by many other Java classes. For example, it is the type of object returned by System.getProperties( ) when obtaining environmental values.

The following program illustrates several of the methods supported by this data structure −

```
import java.util.*;
public class PropDemo {

   public static void main(String args[]) {
      Properties capitals = new Properties();
      Set states;
      String str;

      capitals.put("Illinois", "Springfield");
      capitals.put("Missouri", "Jefferson City");
      capitals.put("Washington", "Olympia");
      capitals.put("California", "Sacramento");
      capitals.put("Indiana", "Indianapolis");

      // Show all states and capitals in hashtable.
      states = capitals.keySet();   // get set-view of keys
      Iterator itr = states.iterator();

      while(itr.hasNext()) {
         str = (String) itr.next();
         System.out.println("The capital of " + str + " is " +
            capitals.getProperty(str) + ".");
      }     
      System.out.println();

      // look for state not in list -- specify default
      str = capitals.getProperty("Florida", "Not Found");
      System.out.println("The capital of Florida is " + str + ".");
   }
}
```
This will produce the following result −

```
The capital of Missouri is Jefferson City.
The capital of Illinois is Springfield.
The capital of Indiana is Indianapolis.
The capital of California is Sacramento.
The capital of Washington is Olympia.

The capital of Florida is Not Found.
```
# References
https://www.tutorialspoint.com/java/java_data_structures.htm
