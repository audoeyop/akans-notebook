# Ruby Regular Expressions

A regular expression is a special sequence of characters that helps you match or find other strings or sets of strings using a specialized syntax held in a pattern.

A regular expression literal is a pattern between slashes or between arbitrary delimiters followed by %r as follows −

Syntax
/pattern/
/pattern/im    # option can be specified
%r!/usr/local! # general delimited regular expression
Example
Live Demo
#!/usr/bin/ruby

line1 = "Cats are smarter than dogs";
line2 = "Dogs also like meat";

if ( line1 =~ /Cats(.*)/ )
   puts "Line1 contains Cats"
end
if ( line2 =~ /Cats(.*)/ )
   puts "Line2 contains  Dogs"
end
This will produce the following result −

Line1 contains Cats
Regular-Expression Modifiers
Regular expression literals may include an optional modifier to control various aspects of matching. The modifier is specified after the second slash character, as shown previously and may be represented by one of these characters −

Sr.No.	Modifier & Description
1
i

Ignores case when matching text.

2
o

Performs #{} interpolations only once, the first time the regexp literal is evaluated.

3
x

Ignores whitespace and allows comments in regular expressions.

4
m

Matches multiple lines, recognizing newlines as normal characters.

5
u,e,s,n

Interprets the regexp as Unicode (UTF-8), EUC, SJIS, or ASCII. If none of these modifiers is specified, the regular expression is assumed to use the source encoding.

Like string literals delimited with %Q, Ruby allows you to begin your regular expressions with %r followed by a delimiter of your choice. This is useful when the pattern you are describing contains a lot of forward slash characters that you don't want to escape −

# Following matches a single slash character, no escape required
%r|/|

# Flag characters are allowed with this syntax, too
%r[</(.*)>]i
Regular-Expression Patterns
Except for control characters, (+ ? . * ^ $ ( ) [ ] { } | \), all characters match themselves. You can escape a control character by preceding it with a backslash.

Following table lists the regular expression syntax that is available in Ruby.
Regular-Expression Examples
Literal Characters
Character Classes
Special Character Classes
Repetition Cases
Non-greedy Repetition
Grouping with Parentheses
Back References
Alternatives
Anchors
Special Syntax with Parentheses
Search and Replace
Some of the most important String methods that use regular expressions are sub and gsub, and their in-place variants sub! and gsub!.

All of these methods perform a search-and-replace operation using a Regexp pattern. The sub & sub! replaces the first occurrence of the pattern and gsub & gsub! replaces all occurrences.

The sub and gsub returns a new string, leaving the original unmodified where as sub! and gsub! modify the string on which they are called.

Following is the example −

Live Demo
#!/usr/bin/ruby

phone = "2004-959-559 #This is Phone Number"

# Delete Ruby-style comments
phone = phone.sub!(/#.*$/, "")   
puts "Phone Num : #{phone}"

# Remove anything other than digits
phone = phone.gsub!(/\D/, "")    
puts "Phone Num : #{phone}"
This will produce the following result −

Phone Num : 2004-959-559
Phone Num : 2004959559
Following is another example −

Live Demo
#!/usr/bin/ruby

text = "rails are rails, really good Ruby on Rails"

# Change "rails" to "Rails" throughout
text.gsub!("rails", "Rails")

# Capitalize the word "Rails" throughout
text.gsub!(/\brails\b/, "Rails")
puts "#{text}"
This will produce the following result −

Rails are Rails, really good Ruby on Rails

# References
https://www.tutorialspoint.com/ruby/ruby_regular_expressions.htm
