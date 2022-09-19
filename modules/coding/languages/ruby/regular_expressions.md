# Ruby Regular Expressions

A regular expression is a special sequence of characters that helps you match or find other strings or sets of strings using a specialized syntax held in a pattern.

A regular expression literal is a pattern between slashes or between arbitrary delimiters followed by %r as follows −

**Syntax**
```
/pattern/
/pattern/im    # option can be specified
%r!/usr/local! # general delimited regular expression
```

**Example**
```
#!/usr/bin/ruby

line1 = "Cats are smarter than dogs";
line2 = "Dogs also like meat";

if ( line1 =~ /Cats(.*)/ )
   puts "Line1 contains Cats"
end
if ( line2 =~ /Cats(.*)/ )
   puts "Line2 contains  Dogs"
end
```
This will produce the following result −
```
Line1 contains Cats
```

## Regular-Expression Modifiers
Regular expression literals may include an optional modifier to control various aspects of matching. The modifier is specified after the second slash character, as shown previously and may be represented by one of these characters

**i**

Ignores case when matching text.

**o**

Performs #{} interpolations only once, the first time the regexp literal is evaluated.

**x**

Ignores whitespace and allows comments in regular expressions.

**m**

Matches multiple lines, recognizing newlines as normal characters.

**u,e,s,n**

Interprets the regexp as Unicode (UTF-8), EUC, SJIS, or ASCII. If none of these modifiers is specified, the regular expression is assumed to use the source encoding.

Like string literals delimited with %Q, Ruby allows you to begin your regular expressions with %r followed by a delimiter of your choice. This is useful when the pattern you are describing contains a lot of forward slash characters that you don't want to escape −
```
# Following matches a single slash character, no escape required
%r|/|

# Flag characters are allowed with this syntax, too
%r[</(.*)>]i
```

## Regular-Expression Patterns
Except for control characters, (+ ? . * ^ $ ( ) [ ] { } | \), all characters match themselves. You can escape a control character by preceding it with a backslash.

Following table lists the regular expression syntax that is available in Ruby.

### Regular-Expression Examples
**/ruby/**

Matches "ruby".

**¥**

Matches Yen sign. Multibyte characters are supported in Ruby 1.9 and Ruby 1.8.

### Character Classes

**/[Rr]uby/**

Matches "Ruby" or "ruby".

**/rub[ye]/**

Matches "ruby" or "rube".

**/[aeiou]/**

Matches any one lowercase vowel.

**/[0-9]/**

Matches any digit; same as /[0123456789]/.

**/[a-z]/**

Matches any lowercase ASCII letter.

**/[A-Z]/**

Matches any uppercase ASCII letter.

 **/[a-zA-Z0-9]/**

Matches any of the above.

**/[^aeiou]/**

Matches anything other than a lowercase vowel.

**/[^0-9]/**

Matches anything other than a digit.

### Special Character Classes

**/./**

Matches any character except newline.

**/./m**

In multi-line mode, matches newline, too.

**/\d/**

Matches a digit: /[0-9]/.

**/\D/**

Matches a non-digit: /[^0-9]/.

**/\s/**

Matches a whitespace character: /[ \t\r\n\f]/.

**/\S/**

Matches non-whitespace: /[^ \t\r\n\f]/.

**/\w/**

Matches a single word character: /[A-Za-z0-9_]/.

**/\W/**

Matches a non-word character: /[^A-Za-z0-9_]/.

### Repetition Cases

**/ruby?/**

Matches "rub" or "ruby": the y is optional.

**/ruby*/**

Matches "rub" plus 0 or more ys.

**/ruby+/**

Matches "rub" plus 1 or more ys.

**/\d{3}/**

Matches exactly 3 digits.

**/\d{3,}/**

Matches 3 or more digits.

**/\d{3,5}/**

Matches 3, 4, or 5 digits.

### Non-greedy Repetition

This matches the smallest number of repetitions -

**/<.*>/**

Greedy repetition: matches "<ruby>perl>".

**/<.*?>/**

Non-greedy: matches "<ruby>" in "<ruby>perl>".

### Grouping with Parentheses

**/\D\d+/**

No group: + repeats \d

**/(\D\d)+/**

Grouped: + repeats \D\d pair

**/([Rr]uby(, )?)+/**

Match "Ruby", "Ruby, ruby, ruby", etc.

### Back References

This matches a previously matched group again -

**/([Rr])uby&\1ails/**

Matches ruby&rails or Ruby&Rails.

**/(['"])(?:(?!\1).)*\1/**

Single or double-quoted string. \1 matches whatever the 1st group matched . \2 matches whatever the 2nd group matched, etc.

### Alternatives

**/ruby|rube/**

Matches "ruby" or "rube".

**/rub(y|le))/**

Matches "ruby" or "ruble".

**/ruby(!+|\?)/**

"ruby" followed by one or more ! or one ?

### Anchors

Anchors used to specify match position.

**/^Ruby/**

Matches "Ruby" at the start of a string or internal line.

**/Ruby$/**

Matches "Ruby" at the end of a string or line.

**/\ARuby/**

Matches "Ruby" at the start of a string.

**/Ruby\Z/**

Matches "Ruby" at the end of a string.

**/\bRuby\b/**

Matches "Ruby" at a word boundary.

**/\brub\B/**

\B is non-word boundary: matches "rub" in "rube" and "ruby" but not alone.

**/Ruby(?=!)/**

Matches "Ruby", if followed by an exclamation point.

**/Ruby(?!!)/**

Matches "Ruby", if not followed by an exclamation point.

## Special Syntax with Parentheses

**/R(?#comment)/**

Matches "R". All the rest is a comment.

**/R(?i)uby/**

Case-insensitive while matching "uby".

**/R(?i:uby)/**

Same as above.

**/rub(?:y|le))/**

Group only without creating \1 backreference.

## Search and Replace
Some of the most important String methods that use regular expressions are sub and gsub, and their in-place variants sub! and gsub!.

All of these methods perform a search-and-replace operation using a Regexp pattern. The sub & sub! replaces the first occurrence of the pattern and gsub & gsub! replaces all occurrences.

The sub and gsub returns a new string, leaving the original unmodified where as sub! and gsub! modify the string on which they are called.

Following is the example −
```
#!/usr/bin/ruby

phone = "2004-959-559 #This is Phone Number"

# Delete Ruby-style comments
phone = phone.sub!(/#.*$/, "")   
puts "Phone Num : #{phone}"

# Remove anything other than digits
phone = phone.gsub!(/\D/, "")    
puts "Phone Num : #{phone}"
```
This will produce the following result −
```
Phone Num : 2004-959-559
Phone Num : 2004959559
```
Following is another example −
```
#!/usr/bin/ruby

text = "rails are rails, really good Ruby on Rails"

# Change "rails" to "Rails" throughout
text.gsub!("rails", "Rails")

# Capitalize the word "Rails" throughout
text.gsub!(/\brails\b/, "Rails")
puts "#{text}"
```
This will produce the following result −
```
Rails are Rails, really good Ruby on Rails
```
# References
https://www.tutorialspoint.com/ruby/ruby_regular_expressions.htm
