# C++ Regular Expressions

Regular Expression or regexes or regexp as they are commonly called are used to represent a particular pattern of string or text. Regexes are often used to denote a standard textual syntax of a string.

A regular expression or regex is an expression containing a sequence of characters that define a particular search pattern that can be used in string searching algorithms, find or find/replace algorithms, etc. Regexes are also used for input validation.

Most of the programming languages provide either built-in capability for regex or through libraries. From C++11 onwards, C++ provides regex support by means of the standard library via the <regex> header.

A regex processor that is used to parse a regex translates it into an internal representation that is executed and matched against a string that represents the text being searched. C++11 uses ECMAScript grammar as the default grammar for regex. ECMAScript is simple, yet it provides powerful regex capabilities.

Let us see some of the patterns that we specify in regex like Range Specification, Repeated Patterns, etc.

## Range Specifications
Specifying a range of characters or literals is one of the simplest criteria used in a regex.

For example, we can specify a range of lowercase letters from a to z as follows:
```
[a-z]
```
This will match exactly one lowercase character.

The following criteria,
```
[A-Za-z0-9]
```
The above expression specifies the range containing one single uppercase character, one lowercase character and a digit from 0 to 9.

The brackets ([]) in the above expressions have a special meaning i.e. they are used to specify the range. If you want to include a bracket as part of an expression, then you will need to escape it.

So the following expression,
```
[\[0-9]
```
The above expression indicates an opening bracket and a digit in the range 0 to 9 as a regex.

But note that as we are programming in C++, we need to use the C++ specific escape sequence as follows:
```
[\\[0-9]
```
Repeated Pattern
The range examples that we have specified above match only one character or literal. If we want to match more than one character, we usually specify the “expression modifier” along with the pattern thereby making it a repeated pattern.

An expression modifier can be “+” that suggests matching the occurrence of a pattern one or more times or it can be “*” that suggests matching the occurrence of a pattern zero or more times.

For Example, the following expression,

`[a-z]+` matches the strings like a, aaa, abcd, softwaretestinghelp, etc. Note that it will never match a blank string.

The expression,

`[a-z]*` will match a blank string or any of the above strings.

If you want to specify a group of characters to match one or more times, then you can use the parentheses as follows:
```
(Xyz)+
```
The above expression will match Xyz, XyzXyz, and XyzXyzXyz, etc.

## C++ regex Example
Consider a regular expression that matches an MS-DOS filename as shown below.
```
char regex_filename[] = “[a-zA-Z_] [a-zA-Z_0-9]*\\.[a-zA-Z0-9]+”;
```
The above regex can be interpreted as follows:

Match a letter (lowercase and then uppercase) or an underscore. Then match zero or more characters, in which each may be a letter, or an underscore or a digit. Then match a literal dot (.). After the dot, match one or more characters, in which each may be a letter or digit indicating file extension.

Function Templates Used In C++ Regex
Let’s now discuss some of the important function templates while programming regex in C++.

### regex_match()

This function template is used to match the given pattern. This function returns true if the given expression matches the string. Otherwise, the function returns false.

Following is a C++ programming example that demonstrates the regex_match function.

```
#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main () {

   if (regex_match ("softwareTesting", regex("(soft)(.*)") ))
      cout << "string:literal => matched\n";

   const char mystr[] = "SoftwareTestingHelp";
   string str ("software");
   regex str_expr ("(soft)(.*)");

   if (regex_match (str,str_expr))
      cout << "string:object => matched\n";

   if ( regex_match ( str.begin(), str.end(), str_expr ) )
      cout << "string:range(begin-end)=> matched\n";

   cmatch cm;
   regex_match (mystr,cm,str_expr);

   smatch sm;
   regex_match (str,sm,str_expr);

   regex_match ( str.cbegin(), str.cend(), sm, str_expr);
   cout << "String:range, size:" << sm.size() << " matches\n";


   regex_match ( mystr, cm, str_expr, regex_constants::match_default );

   cout << "the matches are: ";
   for (unsigned i=0; i<sm.size(); ++i) {
      cout << "[" << sm[i] << "] ";
   }

   cout << endl;

   return 0;
}
```

In the above program, first, we match the string “softwareTesting” against the regular expression “(“(soft)(.*)” using the regex_match function. Subsequently, we also demonstrate different variations of regex_match by passing it a string object, range, etc.

### regex_search()
The function regex_search() is used to search for a pattern in the string that matches the regular expression.

Consider the following C++ program that shows the usage of regex_search().
```
#include <iostream>
#include <regex>
#include<string.h>
using namespace std;

int main()
{
    //string to be searched
    string mystr = "She sells_sea shells in the sea shore";

    // regex expression for pattern to be searched
    regex regexp("s[a-z_]+");

    // flag type for determining the matching behavior (in this case on string objects)
     smatch m;

    // regex_search that searches pattern regexp in the string mystr  
    regex_search(mystr, m, regexp);

    cout<<"String that matches the pattern:"<<endl;
    for (auto x : m)
        cout << x << " ";
    return 0;
}
```

We specify a string and then a regular expression using the regex object. This string and regex are passed to the regex_search function along with the smatch flag type. The function searches for the first occurrence of pattern in the input string and returns the matched string.

### regex_replace()

The function regex_replace() is used to replace the pattern matching to a regular expression with a string.

Let’s use a C++ program to demonstrate the regex_replace() function.
```
#include <iostream>
#include <string>
#include <regex>
#include <iterator>
using namespace std;

int main()
{  
    string mystr = "This is software testing Help portal \n";

    cout<<"Input string: "<<mystr<<endl;

    // regex to match string beginning with 'p'
    regex regexp("p[a-zA-z]+");
    cout<<"Replace the word 'portal' with word 'website' : ";
    // regex_replace() for replacing the match with the word 'website'  
    cout << regex_replace(mystr, regexp, "website");

    string result;

    cout<<"Replace the word 'website' back to 'portal': ";
    // regex_replace( ) for replacing the match back with 'portal'
    regex_replace(back_inserter(result), mystr.begin(), mystr.end(),
                  regexp,  "portal");

    cout << result;

    return 0;
}
```

Here, we have an input string. We provide a regular expression to match a string starting with ‘p’. Then we replace the matched word with the word ‘website’. Next, we replace the ‘website’ word back to the portal.

### C++ Input Validation
We have discussed the major function templates that are used for pattern matching using regex. It is notable that the main purpose that regex serves is input validation. You can validate the input entered from a standard input device using the regex expression.

Check the below program to demonstrate how you can use the regex to validate incoming data.
```
#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main()
{
    string input;
    regex integer_expr("(\\+|-)?[[:digit:]]+");
    //As long as the input is correct ask for another number
    while(true)
    {
        cout<<"Enter the input: ";
        cin>>input;
        if(!cin) break;
        //Exit when the user inputs q
        if(input=="q")
            break;
        if(regex_match(input,integer_expr))
            cout<<"Input is an integer"<<endl;
        else
        {cout<<"Invalid input : Not an integer"<<endl;}
    }
}
```

This program matches the input entered by the user to validate if it’s an integer. The above output shows that when an integer is entered, it gives an appropriate message and when any other data is entered it gives the message as invalid input.

# References
https://www.softwaretestinghelp.com/regex-in-cpp/
