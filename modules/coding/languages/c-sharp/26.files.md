# C# File I/O

A file is a collection of data stored in a disk with a specific name and a directory path. When a file is opened for reading or writing, it becomes a stream.

The stream is basically the sequence of bytes passing through the communication path. There are two main streams: the input stream and the output stream. The input stream is used for reading data from file (read operation) and the output stream is used for writing into the file (write operation).

## C# I/O Classes
The System.IO namespace has various classes that are used for performing numerous operations with files, such as creating and deleting files, reading from or writing to a file, closing a file etc.

The following table shows some commonly used non-abstract classes in the System.IO namespace −

**BinaryReader**

Reads primitive data from a binary stream.

**BinaryWriter**

Writes primitive data in binary format.

**BufferedStream**

A temporary storage for a stream of bytes.

**Directory**

Helps in manipulating a directory structure.

**DirectoryInfo**

Used for performing operations on directories.

**DriveInfo**

Provides information for the drives.

**File**

Helps in manipulating files.

**FileInfo**

Used for performing operations on files.

**FileStream**

Used to read from and write to any location in a file.

**MemoryStream**

Used for random access to streamed data stored in memory.

**Path**

Performs operations on path information.

**StreamReader**

Used for reading characters from a byte stream.

**StreamWriter**

Is used for writing characters to a stream.

**StringReader**

Is used for reading from a string buffer.

**StringWriter**

Is used for writing into a string buffer.

## The FileStream Class
The FileStream class in the System.IO namespace helps in reading from, writing to and closing files. This class derives from the abstract class Stream.

You need to create a FileStream object to create a new file or open an existing file. The syntax for creating a FileStream object is as follows −
```
FileStream <object_name> = new FileStream( <file_name>, <FileMode Enumerator>,
   <FileAccess Enumerator>, <FileShare Enumerator>);
```
For example, we create a FileStream object F for reading a file named sample.txt as shown −
```
FileStream F = new FileStream("sample.txt", FileMode.Open, FileAccess.Read,
   FileShare.Read);
```

**FileMode**

The FileMode enumerator defines various methods for opening files. The members of the FileMode enumerator are −

- Append − It opens an existing file and puts cursor at the end of file, or creates the file, if the file does not exist.

- Create − It creates a new file.

- CreateNew − It specifies to the operating system, that it should create a new file.

- Open − It opens an existing file.

- OpenOrCreate − It specifies to the operating system that it should open a file if it exists, otherwise it should create a new file.

- Truncate − It opens an existing file and truncates its size to zero bytes.

**FileAccess**

FileAccess enumerators have members: Read, ReadWrite and Write.

**FileShare**

FileShare enumerators have the following members −

- Inheritable − It allows a file handle to pass inheritance to the child processes

- None − It declines sharing of the current file

- Read − It allows opening the file for readin.

- ReadWrite − It allows opening the file for reading and writing

- Write − It allows opening the file for writing

**Example**

The following program demonstrates use of the FileStream class −
```
using System;
using System.IO;

namespace FileIOApplication {
   class Program {
      static void Main(string[] args) {
         FileStream F = new FileStream("test.dat", FileMode.OpenOrCreate,
            FileAccess.ReadWrite);

         for (int i = 1; i <= 20; i++) {
            F.WriteByte((byte)i);
         }
         F.Position = 0;
         for (int i = 0; i <= 20; i++) {
            Console.Write(F.ReadByte() + " ");
         }
         F.Close();
         Console.ReadKey();
      }
   }
}
```
When the above code is compiled and executed, it produces the following result −
```
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 -1
```

## Advanced File Operations in C#
The preceding example provides simple file operations in C#. However, to utilize the immense powers of C# System.IO classes, you need to know the commonly used properties and methods of these classes.

## Reading from and Writing into Text files
It involves reading from and writing into text files. The StreamReader and StreamWriter class helps to accomplish it.

The StreamReader and StreamWriter classes are used for reading from and writing data to text files. These classes inherit from the abstract base class Stream, which supports reading and writing bytes into a file stream.

### The StreamReader Class
The StreamReader class also inherits from the abstract base class TextReader that represents a reader for reading series of characters. The following table describes some of the commonly used methods of the StreamReader class −

**public override void Close()**

It closes the StreamReader object and the underlying stream, and releases any system resources associated with the reader.

**public override int Peek()**

Returns the next available character but does not consume it.

**public override int Read()**

Reads the next character from the input stream and advances the character position by one.

**Example**

The following example demonstrates reading a text file named Jamaica.txt. The file reads −
```
Down the way where the nights are gay
And the sun shines daily on the mountain top
I took a trip on a sailing ship
And when I reached Jamaica
I made a stop
```
```
using System;
using System.IO;

namespace FileApplication {
   class Program {
      static void Main(string[] args) {
         try {
            // Create an instance of StreamReader to read from a file.
            // The using statement also closes the StreamReader.
            using (StreamReader sr = new StreamReader("c:/jamaica.txt")) {
               string line;

               // Read and display lines from the file until
               // the end of the file is reached.
               while ((line = sr.ReadLine()) != null) {
                  Console.WriteLine(line);
               }
            }
         } catch (Exception e) {
            // Let the user know what went wrong.
            Console.WriteLine("The file could not be read:");
            Console.WriteLine(e.Message);
         }
         Console.ReadKey();
      }
   }
}
```
Guess what it displays when you compile and run the program!

### The StreamWriter Class
The StreamWriter class inherits from the abstract class TextWriter that represents a writer, which can write a series of character.

The following table describes the most commonly used methods of this class −

**public override void Close()**

Closes the current StreamWriter object and the underlying stream.

**public override void Flush()**

Clears all buffers for the current writer and causes any buffered data to be written to the underlying stream.

**public virtual void Write(bool value)**

Writes the text representation of a Boolean value to the text string or stream. (Inherited from TextWriter.)

**public override void Write(char value)**

Writes a character to the stream.

**public virtual void Write(decimal value)**

Writes the text representation of a decimal value to the text string or stream.

**public virtual void Write(double value)**

Writes the text representation of an 8-byte floating-point value to the text string or stream.

**public virtual void Write(int value)**

Writes the text representation of a 4-byte signed integer to the text string or stream.

**public override void Write(string value)**

Writes a string to the stream.

**public virtual void WriteLine()**

Writes a line terminator to the text string or stream.

For a complete list of methods, please visit Microsoft's C# documentation.

**Example**

The following example demonstrates writing text data into a file using the StreamWriter class −

```
using System;
using System.IO;

namespace FileApplication {
   class Program {
      static void Main(string[] args) {
         string[] names = new string[] {"Zara Ali", "Nuha Ali"};

         using (StreamWriter sw = new StreamWriter("names.txt")) {

            foreach (string s in names) {
               sw.WriteLine(s);
            }
         }

         // Read and show each line from the file.
         string line = "";
         using (StreamReader sr = new StreamReader("names.txt")) {
            while ((line = sr.ReadLine()) != null) {
               Console.WriteLine(line);
            }
         }
         Console.ReadKey();
      }
   }
}
```
When the above code is compiled and executed, it produces the following result −
```
Zara Ali
Nuha Ali
```

## Reading from and Writing into Binary files
It involves reading from and writing into binary files. The BinaryReader and BinaryWriter class helps to accomplish this.

The BinaryReader and BinaryWriter classes are used for reading from and writing to a binary file.

### The BinaryReader Class
The BinaryReader class is used to read binary data from a file. A BinaryReader object is created by passing a FileStream object to its constructor.

The following table describes commonly used methods of the BinaryReader class.

**public override void Close()**

It closes the BinaryReader object and the underlying stream.

**public virtual int Read()**

Reads the characters from the underlying stream and advances the current position of the stream.

**public virtual bool ReadBoolean()**

Reads a Boolean value from the current stream and advances the current position of the stream by one byte.

**public virtual byte ReadByte()**

Reads the next byte from the current stream and advances the current position of the stream by one byte.

**public virtual byte[] ReadBytes(int count)**

Reads the specified number of bytes from the current stream into a byte array and advances the current position by that number of bytes.

**public virtual char ReadChar()**

Reads the next character from the current stream and advances the current position of the stream in accordance with the Encoding used and the specific character being read from the stream.

**public virtual char[] ReadChars(int count)**

Reads the specified number of characters from the current stream, returns the data in a character array, and advances the current position in accordance with the Encoding used and the specific character being read from the stream.

**public virtual double ReadDouble()**

Reads an 8-byte floating point value from the current stream and advances the current position of the stream by eight bytes.

**public virtual int ReadInt32()**

Reads a 4-byte signed integer from the current stream and advances the current position of the stream by four bytes.

**public virtual string ReadString()**

Reads a string from the current stream. The string is prefixed with the length, encoded as an integer seven bits at a time.

### The BinaryWriter Class
The BinaryWriter class is used to write binary data to a stream. A BinaryWriter object is created by passing a FileStream object to its constructor.

The following table describes commonly used methods of the BinaryWriter class.

**public override void Close()**

It closes the BinaryWriter object and the underlying stream.

**public virtual void Flush()**

Clears all buffers for the current writer and causes any buffered data to be written to the underlying device.


**public virtual long Seek(int offset, SeekOrigin origin)**

Sets the position within the current stream.


**public virtual void Write(bool value)**

Writes a one-byte Boolean value to the current stream, with 0 representing false and 1 representing true.


**public virtual void Write(byte value)**

Writes an unsigned byte to the current stream and advances the stream position by one byte.


**public virtual void Write(byte[] buffer)**

Writes a byte array to the underlying stream.


**public virtual void Write(char ch)**

Writes a Unicode character to the current stream and advances the current position of the stream in accordance with the Encoding used and the specific characters being written to the stream.


**public virtual void Write(char[] chars)**

Writes a character array to the current stream and advances the current position of the stream in accordance with the Encoding used and the specific characters being written to the stream.


**public virtual void Write(double value)**

Writes an eight-byte floating-point value to the current stream and advances the stream position by eight bytes.


**public virtual void Write(int value)**

Writes a four-byte signed integer to the current stream and advances the stream position by four bytes.


**public virtual void Write(string value)**

Writes a length-prefixed string to this stream in the current encoding of the BinaryWriter, and advances the current position of the stream in accordance with the encoding used and the specific characters being written to the stream.

For a complete list of methods, please visit Microsoft C# documentation.

**Example**

The following example demonstrates reading and writing binary data −
```
using System;
using System.IO;

namespace BinaryFileApplication {
   class Program {
      static void Main(string[] args) {
         BinaryWriter bw;
         BinaryReader br;

         int i = 25;
         double d = 3.14157;
         bool b = true;
         string s = "I am happy";

         //create the file
         try {
            bw = new BinaryWriter(new FileStream("mydata", FileMode.Create));
         } catch (IOException e) {
            Console.WriteLine(e.Message + "\n Cannot create file.");
            return;
         }

         //writing into the file
         try {
            bw.Write(i);
            bw.Write(d);
            bw.Write(b);
            bw.Write(s);
         } catch (IOException e) {
            Console.WriteLine(e.Message + "\n Cannot write to file.");
            return;
         }
         bw.Close();

         //reading from the file
         try {
            br = new BinaryReader(new FileStream("mydata", FileMode.Open));
         } catch (IOException e) {
            Console.WriteLine(e.Message + "\n Cannot open file.");
            return;
         }

         try {
            i = br.ReadInt32();
            Console.WriteLine("Integer data: {0}", i);
            d = br.ReadDouble();
            Console.WriteLine("Double data: {0}", d);
            b = br.ReadBoolean();
            Console.WriteLine("Boolean data: {0}", b);
            s = br.ReadString();
            Console.WriteLine("String data: {0}", s);
         } catch (IOException e) {
            Console.WriteLine(e.Message + "\n Cannot read from file.");
            return;
         }
         br.Close();
         Console.ReadKey();
      }
   }
}
```
When the above code is compiled and executed, it produces the following result −
```
Integer data: 25
Double data: 3.14157
Boolean data: True
String data: I am happy
```

# Manipulating the Windows file system
It gives a C# programamer the ability to browse and locate Windows files and directories.

# References
https://www.tutorialspoint.com/csharp/csharp_file_io.htm
