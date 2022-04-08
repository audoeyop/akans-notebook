# C Regular Expressions

A regular expression is a sequence of characters that is used to search pattern. It is mainly used for pattern matching with strings, or string matching, etc. They are a generalized way to match patterns with sequences of characters. It is used in every programming language like C++, Java, and Python.
Patterns in the POSIX Library


Expression	Description
[]	Used to find any of the characters or numbers specified between the brackets.
[:number:]	Used to find any digit.
[:lower:]	Used to find lowercase alphabets.
[:word:]	Used to find letters numbers and underscores.
Creation of Regular Expression
For compiling or creating the regular expression regcomp() function is used. It takes three arguments:
Syntax:


regcomp(&regex, expression, flag)
where,


regex is a pointer to a memory location where expression is matched and stored.
expression is a string type
flag to specify the type of compilation
Return Value: This returns the value as shown below:


0: when successful compilation is done.
Error_code: When there is unsuccessful complilation of the expression.
Below is the illustration of the regcomp() function:



// C program for illustration of regcomp()
#include <regex.h>
#include <stdio.h>

// Driver Code
int main()
{

    // Variable to create regex
    regex_t regex;

    // Variable to store the return
    // value after creation of regex
    int value;

    // Function call to create regex
    value = regcomp( ®ex, "[:word:]", 0);

    // If compilation is successful
    if (value == 0) {
        printf("RegEx compiled successfully.");
    }

    // Else for Compilation error
    else {
        printf("Compilation error.");
    }
    return 0;
}
Output
RegEx compiled successfully.
Matching of Pattern using Regular Expression
The regexec() function is used to match a string against a pattern. It takes in five arguments:


A precompiled pattern
A string in which the pattern needs to be searched for.
Information regarding the location of matches.
Flags to specify a change in the matching behavior.
Syntax:


regexec(&regex, expression, 0, NULL, 0);
where, regex = precomplied pattern,
expression = pattern to be match in regex,
NULL = Information regarding location of the matches.
flag = to specify the change in matching behaviour
Return Value: This returns the value as shown below:


0: If there is a match.
REG_NOMATCH: If there is no match.
Below is the illustration of the regexec() function:



// C program to illustrate the regexec() function
#include <regex.h>
#include <stdio.h>

// Function to print the result
void print_result(int value)
{

    // If pattern found
    if (value == 0) {
        printf("Pattern found.\n");
    }

    // If pattern not found
    else if (value == REG_NOMATCH) {
        printf("Pattern not found.\n");
    }

    // If error occured during Pattern
    // matching
    else {
        printf("An error occured.\n");
    }
}

// Driver Code
int main()
{

    // Variable to store initial regex()
    regex_t regex;

    // Variable for return type
    int value;
    int value2;

    // Creation of regEx
    value = regcomp( ®ex, "Welcome to GfG", 0);

    // Comparing pattern "GeeksforGeeks" with
    // string in reg
    value = regexec( ®ex, "GeeksforGeeks",
                    0, NULL, 0);

    // Creation of regEx
    value2 = regcomp( ®ex, "GeeksforGeeks", 0);

    // Comparing pattern "Geeks"
    // with string in reg
    value2 = regexec( ®ex, "GeeksforGeeks",
                     0, NULL, 0);

    // Print the results
    print_result(value);
    print_result(value2);
    return 0;
}
Output
Pattern not found.
Pattern found.

# References
https://www.geeksforgeeks.org/regular-expressions-in-c/
