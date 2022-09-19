# C# Program Structure

Before we study basic building blocks of the C# programming language, let us look at a bare minimum C# program structure so that we can take it as a reference in upcoming chapters.

## Creating Hello World Program
A C# program consists of the following parts −

- Namespace declaration
- A class
- Class methods
- Class attributes
- A Main method
- Statements and Expressions
- Comments

Let us look at a simple code that prints the words "Hello World" −
```
using System;

namespace HelloWorldApplication {
   class HelloWorld {
      static void Main(string[] args) {
         /* my first program in C# */
         Console.WriteLine("Hello World");
         Console.ReadKey();
      }
   }
}
```
When this code is compiled and executed, it produces the following result −
```
Hello World
```
Let us look at the various parts of the given program −

The first line of the program using System; - the using keyword is used to include the System namespace in the program. A program generally has multiple using statements.

The next line has the namespace declaration. A namespace is a collection of classes. The HelloWorldApplication namespace contains the class HelloWorld.

The next line has a class declaration, the class HelloWorld contains the data and method definitions that your program uses. Classes generally contain multiple methods. Methods define the behavior of the class. However, the HelloWorld class has only one method Main.

The next line defines the Main method, which is the entry point for all C# programs. The Main method states what the class does when executed.

The next line `/*...*/` is ignored by the compiler and it is put to add comments in the program.

The Main method specifies its behavior with the statement Console.WriteLine("Hello World");

WriteLine is a method of the Console class defined in the System namespace. This statement causes the message "Hello, World!" to be displayed on the screen.

The last line Console.ReadKey(); is for the VS.NET Users. This makes the program wait for a key press and it prevents the screen from running and closing quickly when the program is launched from Visual Studio .NET.

It is worth to note the following points −

- C# is case sensitive.
- All statements and expression must end with a semicolon (;).
- The program execution starts at the Main method.
- Unlike Java, program file name could be different from the class name.

## Compiling and Executing the Program
If you are using Visual Studio.Net for compiling and executing C# programs, take the following steps −

- Start Visual Studio.

- On the menu bar, choose File -> New -> Project.

- Choose Visual C# from templates, and then choose Windows.

- Choose Console Application.

- Specify a name for your project and click OK button.

- This creates a new project in Solution Explorer.

- Write code in the Code Editor.

- Click the Run button or press F5 key to execute the project. A Command Prompt window appears that contains the line Hello World.

You can compile a C# program by using the command-line instead of the Visual Studio IDE −

- Open a text editor and add the above-mentioned code.

- Save the file as helloworld.cs

- Open the command prompt tool and go to the directory where you saved the file.

- Type csc helloworld.cs and press enter to compile your code.

- If there are no errors in your code, the command prompt takes you to the next line and generates helloworld.exe executable file.

- Type helloworld to execute your program.

- You can see the output Hello World printed on the screen.

# References
https://www.tutorialspoint.com/csharp/csharp_program_structure.htm
