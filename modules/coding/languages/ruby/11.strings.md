# Ruby Strings

A String object in Ruby holds and manipulates an arbitrary sequence of one or more bytes, typically representing characters that represent human language.

The simplest string literals are enclosed in single quotes (the apostrophe character). The text within the quote marks is the value of the string −
```
'This is a simple Ruby string literal'
```
If you need to place an apostrophe within a single-quoted string literal, precede it with a backslash, so that the Ruby interpreter does not think that it terminates the string −
```
'Won\'t you read O\'Reilly\'s book?'
```
The backslash also works to escape another backslash, so that the second backslash is not itself interpreted as an escape character.

Following are the string-related features of Ruby.

## Expression Substitution
Expression substitution is a means of embedding the value of any Ruby expression into a string using #{ and } −
```
#!/usr/bin/ruby

x, y, z = 12, 36, 72
puts "The value of x is #{ x }."
puts "The sum of x and y is #{ x + y }."
puts "The average was #{ (x + y + z)/3 }."
```
This will produce the following result −
```
The value of x is 12.
The sum of x and y is 48.
The average was 40.
```

## General Delimited Strings
With general delimited strings, you can create strings inside a pair of matching though arbitrary delimiter characters, e.g., !, (, {, <, etc., preceded by a percent character (%). Q, q, and x have special meanings. General delimited strings can be −
```
%{Ruby is fun.}  equivalent to "Ruby is fun."
%Q{ Ruby is fun. } equivalent to " Ruby is fun. "
%q[Ruby is fun.]  equivalent to a single-quoted string
%x!ls! equivalent to back tick command output `ls`
```

## Escape Chracters

Following table is a list of escape or non-printable characters that can be represented with the backslash notation.

NOTE − In a double-quoted string, an escape character is interpreted; in a single-quoted string, an escape character is preserved.

|Backslash notation	|Hexadecimal character	|Description
|---|---|---
\a	|0x07	|Bell or alert
\b	|0x08	|Backspace
\cx	|| 	Control-x
\C-x||	 	Control-x
\e	|0x1b	|Escape
\f	|0x0c	|Formfeed
\M-\C-x	|| 	Meta-Control-x
\n	|0x0a	|Newline
\nnn	 	|| Octal notation, where n is in the range 0.7
\r	|0x0d	|Carriage return
\s	|0x20	|Space
\t	|0x09	|Tab
\v	|0x0b	|Vertical tab
\x	|| 	Character x
\xnn	|| 	Hexadecimal notation, where n is in the range 0.9, a.f, or A.F

## Escape Characters
Following table is a list of escape or non-printable characters that can be represented with the backslash notation.
Character Encoding
The default character set for Ruby is ASCII, whose characters may be represented by single bytes. If you use UTF-8, or another modern character set, characters may be represented in one to four bytes.

You can change your character set using $KCODE at the beginning of your program, like this −
```
$KCODE = 'u'
```
Following are the possible values for $KCODE.

**a**

ASCII (same as none). This is the default.

**e**

EUC.

**n**

None (same as ASCII).

**u**

UTF-8.

## String Built-in Methods
We need to have an instance of String object to call a String method. Following is the way to create an instance of String object −
```
new [String.new(str = "")]
```
This will return a new string object containing a copy of str. Now, using str object, we can all use any available instance methods. For example −

```
#!/usr/bin/ruby

myStr = String.new("THIS IS TEST")
foo = myStr.downcase

puts "#{foo}"
```
This will produce the following result −
```
this is test
```

Following are the public String methods ( Assuming str is a String object ) −

str % arg

Formats a string using a format specification. arg must be an array if it contains more than one substitution. For information on the format specification, see sprintf under "Kernel Module."

str * integer

Returns a new string containing integer times str. In other words, str is repeated integer imes.

str &plus; other_str

Concatenates other_str to str.

str &lt;&lt; obj

Concatenates an object to str. If the object is a Fixnum in the range 0.255, it is converted to a character. Compare it with concat.

str &lt;=&gt; other_str

Compares str with other_str, returning -1 (less than), 0 (equal), or 1 (greater than). The comparison is case-sensitive.

str == obj

Tests str and obj for equality. If obj is not a String, returns false; returns true if str &lt;=&gt; obj returns 0.

str =~ obj

Matches str against a regular expression pattern obj. Returns the position where the match starts; otherwise, false.

str.capitalize

Capitalizes a string.

str.capitalize!

Same as capitalize, but changes are made in place.

str.casecmp

Makes a case-insensitive comparison of strings.

str.center

Centers a string.

str.chomp

Removes the record separator ($/), usually \n, from the end of a string. If no record separator exists, does nothing.

str.chomp!

Same as chomp, but changes are made in place.

str.chop

Removes the last character in str.

str.chop!

Same as chop, but changes are made in place.

str.concat(other_str)

Concatenates other_str to str.

str.count(str, ...)

Counts one or more sets of characters. If there is more than one set of characters, counts the intersection of those sets

str.crypt(other_str)

Applies a one-way cryptographic hash to str. The argument is the salt string, which should be two characters long, each character in the range a.z, A.Z, 0.9, . or /.

str.delete(other_str, ...)

Returns a copy of str with all characters in the intersection of its arguments deleted.

str.delete!(other_str, ...)

Same as delete, but changes are made in place.

str.downcase

Returns a copy of str with all uppercase letters replaced with lowercase.

str.downcase!

Same as downcase, but changes are made in place.

str.dump

Returns a version of str with all nonprinting characters replaced by \nnn notation and all special characters escaped.

str.each(separator = &dollar;/) { |substr| block }

Splits str using argument as the record separator ($/ by default), passing each substring to the supplied block.

str.each_byte { |fixnum| block }

Passes each byte from str to the block, returning each byte as a decimal representation of the byte.

str.each_line(separator=$/) { |substr| block }

Splits str using argument as the record separator ($/ by default), passing each substring to the supplied block.

str.empty?

Returns true if str is empty (has a zero length).

str.eql?(other)

Two strings are equal if they have the same length and content.

str.gsub(pattern, replacement) [or]

str.gsub(pattern) { |match| block }

Returns a copy of str with all occurrences of pattern replaced with either replacement or the value of the block. The pattern will typically be a Regexp; if it is a String then no regular expression metacharacters will be interpreted (that is, /\d/ will match a digit, but '\d' will match a backslash followed by a 'd')

str[fixnum] [or] str[fixnum,fixnum] [or] str[range] [or] str[regexp] [or] str[regexp, fixnum] [or] str[other_str]

References str, using the following arguments: one Fixnum, returns a character code at fixnum; two Fixnums, returns a substring starting at an offset (first fixnum) to length (second fixnum); range, returns a substring in the range; regexp returns portion of matched string; regexp with fixnum, returns matched data at fixnum; other_str returns substring matching other_str. A negative Fixnum starts at end of string with -1.

str[fixnum] = fixnum [or] str[fixnum] = new_str [or] str[fixnum, fixnum] = new_str [or] str[range] = aString [or] str[regexp] = new_str [or] str[regexp, fixnum] = new_str [or] str[other_str] = new_str ]

Replace (assign) all or part of a string. Synonym of slice!.

str.gsub!(pattern, replacement) [or] str.gsub!(pattern) { |match|block }

Performs the substitutions of String#gsub in place, returning str, or nil if no substitutions were performed.

str.hash

Returns a hash based on the string's length and content.

str.hex

Treats leading characters from str as a string of hexadecimal digits (with an optional sign and an optional 0x) and returns the corresponding number. Zero is returned on error.

str.include? other_str [or] str.include? fixnum

Returns true if str contains the given string or character.

str.index(substring [, offset]) [or]

str.index(fixnum [, offset]) [or]

str.index(regexp [, offset])

Returns the index of the first occurrence of the given substring, character (fixnum), or pattern (regexp) in str. Returns nil if not found. If the second parameter is present, it specifies the position in the string to begin the search.

str.insert(index, other_str)

Inserts other_str before the character at the given index, modifying str. Negative indices count from the end of the string, and insert after the given character. The intent is to insert a string so that it starts at the given index.

str.inspect

Returns a printable version of str, with special characters escaped.

str.intern [or] str.to_sym

Returns the Symbol corresponding to str, creating the symbol if it did not previously exist.

str.length

Returns the length of str. Compare size.

str.ljust(integer, padstr = ' ')

If integer is greater than the length of str, returns a new String of length integer with str left-justified and padded with padstr; otherwise, returns str.

str.lstrip

Returns a copy of str with leading whitespace removed.

str.lstrip!

Removes leading whitespace from str, returning nil if no change was made.

str.match(pattern)

Converts pattern to a Regexp (if it isn't already one), then invokes its match method on str.

str.oct

Treats leading characters of str as a string of octal digits (with an optional sign) and returns the corresponding number. Returns 0 if the conversion fails.

str.replace(other_str)

Replaces the contents and taintedness of str with the corresponding values in other_str.

str.reverse

Returns a new string with the characters from str in reverse order.

str.reverse!

Reverses str in place.

str.rindex(substring [, fixnum]) [or]

str.rindex(fixnum [, fixnum]) [or]

str.rindex(regexp [, fixnum])

Returns the index of the last occurrence of the given substring, character (fixnum), or pattern (regexp) in str. Returns nil if not found. If the second parameter is present, it specifies the position in the string to end the search.characters beyond this point won't be considered.

str.rjust(integer, padstr = ' ')

If integer is greater than the length of str, returns a new String of length integer with str right-justified and padded with padstr; otherwise, returns str.

str.rstrip

Returns a copy of str with trailing whitespace removed.

str.rstrip!

Removes trailing whitespace from str, returning nil if no change was made.

str.scan(pattern) [or]

str.scan(pattern) { |match, ...| block }

Both forms iterate through str, matching the pattern (which may be a Regexp or a String). For each match, a result is generated and either added to the result array or passed to the block. If the pattern contains no groups, each individual result consists of the matched string, $&. If the pattern contains groups, each individual result is itself an array containing one entry per group.

str.slice(fixnum) [or] str.slice(fixnum, fixnum) [or]

str.slice(range) [or] str.slice(regexp) [or]

str.slice(regexp, fixnum) [or] str.slice(other_str)

See str[fixnum], etc.

str.slice!(fixnum) [or] str.slice!(fixnum, fixnum) [or]

str.slice!(range) [or] str.slice!(regexp) [or]

str.slice!(other_str)

Deletes the specified portion from str, and returns the portion deleted. The forms that take a Fixnum will raise an IndexError if the value is out of range; the Range form will raise a RangeError, and the Regexp and String forms will silently ignore the assignment.

str.split(pattern = &dollar;, [limit])

Divides str into substrings based on a delimiter, returning an array of these substrings.

If pattern is a String, then its contents are used as the delimiter when splitting str. If pattern is a single space, str is split on whitespace, with leading whitespace and runs of contiguous whitespace characters ignored.

If pattern is a Regexp, str is divided where the pattern matches. Whenever the pattern matches a zero-length string, str is split into individual characters.

If pattern is omitted, the value of $; is used. If $; is nil (which is the default), str is split on whitespace as if ` ` were specified.

If the limit parameter is omitted, trailing null fields are suppressed. If limit is a positive number, at most that number of fields will be returned (if limit is 1, the entire string is returned as the only entry in an array). If negative, there is no limit to the number of fields returned, and trailing null fields are not suppressed.

str.squeeze([other_str]*)

Builds a set of characters from the other_str parameter(s) using the procedure described for String#count. Returns a new string where runs of the same character that occur in this set are replaced by a single character. If no arguments are given, all runs of identical characters are replaced by a single character.

str.squeeze!([other_str]*)

Squeezes str in place, returning either str, or nil if no changes were made.

str.strip

Returns a copy of str with leading and trailing whitespace removed.

str.strip!

Removes leading and trailing whitespace from str. Returns nil if str was not altered.

str.sub(pattern, replacement) [or]

str.sub(pattern) { |match| block }

Returns a copy of str with the first occurrence of pattern replaced with either replacement or the value of the block. The pattern will typically be a Regexp; if it is a String then no regular expression metacharacters will be interpreted.

str.sub!(pattern, replacement) [or]

str.sub!(pattern) { |match| block }

Performs the substitutions of String#sub in place, returning str, or nil if no substitutions were performed.

str.succ [or] str.next

Returns the successor to str.

str.succ! [or] str.next!

Equivalent to String#succ, but modifies the receiver in place.

str.sum(n = 16)

Returns a basic n-bit checksum of the characters in str, where n is the optional Fixnum parameter, defaulting to 16. The result is simply the sum of the binary value of each character in str modulo 2n - 1. This is not a particularly good checksum.

str.swapcase

Returns a copy of str with uppercase alphabetic characters converted to lowercase and lowercase characters converted to uppercase.

str.swapcase!

Equivalent to String#swapcase, but modifies the receiver in place, returning str, or nil if no changes were made.

str.to_f

&gt;Returns the result of interpreting leading characters in str as a floating-point number. Extraneous characters past the end of a valid number are ignored. If there is not a valid number at the start of str, 0.0 is returned. This method never raises an exception.

str.to_i(base = 10)

Returns the result of interpreting leading characters in str as an integer base (base 2, 8, 10, or 16). Extraneous characters past the end of a valid number are ignored. If there is not a valid number at the start of str, 0 is returned. This method never raises an exception.

str.to_s [or] str.to_str

Returns the receiver.

str.tr(from_str, to_str)

Returns a copy of str with the characters in from_str replaced by the corresponding characters in to_str. If to_str is shorter than from_str, it is padded with its last character. Both strings may use the c1.c2 notation to denote ranges of characters, and from_str may start with a ^, which denotes all characters except those listed.

str.tr!(from_str, to_str)

Translates str in place, using the same rules as String#tr. Returns str, or nil if no changes were made.

str.tr_s(from_str, to_str)

Processes a copy of str as described under String#tr, then removes duplicate characters in regions that were affected by the translation.

str.tr_s!(from_str, to_str)

Performs String#tr_s processing on str in place, returning str, or nil if no changes were made.

str.unpack(format)

&gt;Decodes str (which may contain binary data) according to the format string, returning an array of each value extracted. The format string consists of a sequence of single-character directives, summarized in Table 18. Each directive may be followed by a number, indicating the number of times to repeat with this directive. An asterisk (*) will use up all remaining elements. The directives sSiIlL may each be followed by an underscore (_) to use the underlying platform's native size for the specified type; otherwise, it uses a platform-independent consistent size. Spaces are ignored in the format string.

str.upcase

Returns a copy of str with all lowercase letters replaced with their uppercase counterparts. The operation is locale insensitive. Only characters a to z are affected.

str.upcase!

Changes the contents of str to uppercase, returning nil if no changes are made.

str.upto(other_str) { |s| block }

Iterates through successive values, starting at str and ending at other_str inclusive, passing each value in turn to the block. The String#succ method is used to generate each value.

# References
https://www.tutorialspoint.com/ruby/ruby_strings.htm
