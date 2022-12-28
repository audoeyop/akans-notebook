#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main () {

    // regex_match example

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

   // regex_search example

   //string to be searched
    string mystr2 = "She sells_sea shells in the sea shore";

    // regex expression for pattern to be searched
    regex regexp("s[a-z_]+");

    // flag type for determining the matching behavior (in this case on string objects)
     smatch m;

    // regex_search that searches pattern regexp in the string mystr  
    regex_search(mystr2, m, regexp);

    cout<<"String that matches the pattern:"<<endl;
    for (auto x : m)
        cout << x << " ";

    cout << endl;

   return 0;
}