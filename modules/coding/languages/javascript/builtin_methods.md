# Predefined Functions

## Number Methods
The Number object contains only the default methods that are part of every object's definition.

Sr.No.	Method & Description
1	constructor()
Returns the function that created this object's instance. By default this is the Number object.

2	toExponential()
Forces a number to display in exponential notation, even if the number is in the range in which JavaScript normally uses standard notation.

3	toFixed()
Formats a number with a specific number of digits to the right of the decimal.

4	toLocaleString()
Returns a string value version of the current number in a format that may vary according to a browser's locale settings.

5	toPrecision()
Defines how many total digits (including digits to the left and right of the decimal) to display of a number.

6	toString()
Returns the string representation of the number's value.

7	valueOf()
Returns the number's value.

Boolean Methods
Here is a list of each method and its description.

Sr.No.	Method & Description
1	toSource()
Returns a string containing the source of the Boolean object; you can use this string to create an equivalent object.

2	toString()
Returns a string of either "true" or "false" depending upon the value of the object.

3	valueOf()
Returns the primitive value of the Boolean object.

String Methods
Here is a list of each method and its description.

Sr.No.	Method & Description
1	charAt()
Returns the character at the specified index.

2	charCodeAt()
Returns a number indicating the Unicode value of the character at the given index.

3	concat()
Combines the text of two strings and returns a new string.

4	indexOf()
Returns the index within the calling String object of the first occurrence of the specified value, or -1 if not found.

5	lastIndexOf()
Returns the index within the calling String object of the last occurrence of the specified value, or -1 if not found.

6	localeCompare()
Returns a number indicating whether a reference string comes before or after or is the same as the given string in sort order.

7	length()
Returns the length of the string.

8	match()
Used to match a regular expression against a string.

9	replace()
Used to find a match between a regular expression and a string, and to replace the matched substring with a new substring.

10	search()
Executes the search for a match between a regular expression and a specified string.

11	slice()
Extracts a section of a string and returns a new string.

12	split()
Splits a String object into an array of strings by separating the string into substrings.

13	substr()
Returns the characters in a string beginning at the specified location through the specified number of characters.

14	substring()
Returns the characters in a string between two indexes into the string.

15	toLocaleLowerCase()
The characters within a string are converted to lower case while respecting the current locale.

16	toLocaleUpperCase()
The characters within a string are converted to upper case while respecting the current locale.

17	toLowerCase()
Returns the calling string value converted to lower case.

18	toString()
Returns a string representing the specified object.

19	toUpperCase()
Returns the calling string value converted to uppercase.

20	valueOf()
Returns the primitive value of the specified object.

String HTML wrappers
Here is a list of each method which returns a copy of the string wrapped inside the appropriate HTML tag.

Sr.No.	Method & Description
1	anchor()
Creates an HTML anchor that is used as a hypertext target.

2	big()
Creates a string to be displayed in a big font as if it were in a <big> tag.

3	blink()
Creates a string to blink as if it were in a <blink> tag.

4	bold()
Creates a string to be displayed as bold as if it were in a <b> tag.

5	fixed()
Causes a string to be displayed in fixed-pitch font as if it were in a <tt> tag

6	fontcolor()
Causes a string to be displayed in the specified color as if it were in a <font color="color"> tag.

7	fontsize()
Causes a string to be displayed in the specified font size as if it were in a <font size="size"> tag.

8	italics()
Causes a string to be italic, as if it were in an <i> tag.

9	link()
Creates an HTML hypertext link that requests another URL.

10	small()
Causes a string to be displayed in a small font, as if it were in a <small> tag.

11	strike()
Causes a string to be displayed as struck-out text, as if it were in a <strike> tag.

12	sub()
Causes a string to be displayed as a subscript, as if it were in a <sub> tag

13	sup()
Causes a string to be displayed as a superscript, as if it were in a <sup> tag

Array Methods
Here is a list of each method and its description.

Sr.No.	Method & Description
1	concat()
Returns a new array comprised of this array joined with other array(s) and/or value(s).

2	every()
Returns true if every element in this array satisfies the provided testing function.

3	filter()
Creates a new array with all of the elements of this array for which the provided filtering function returns true.

4	forEach()
Calls a function for each element in the array.

5	indexOf()
Returns the first (least) index of an element within the array equal to the specified value, or -1 if none is found.

6	join()
Joins all elements of an array into a string.

7	lastIndexOf()
Returns the last (greatest) index of an element within the array equal to the specified value, or -1 if none is found.

8	map()
Creates a new array with the results of calling a provided function on every element in this array.

9	pop()
Removes the last element from an array and returns that element.

10	push()
Adds one or more elements to the end of an array and returns the new length of the array.

11	reduce()
Apply a function simultaneously against two values of the array (from left-to-right) as to reduce it to a single value.

12	reduceRight()
Apply a function simultaneously against two values of the array (from right-to-left) as to reduce it to a single value.

13	reverse()
Reverses the order of the elements of an array -- the first becomes the last, and the last becomes the first.

14	shift()
Removes the first element from an array and returns that element.

15	slice()
Extracts a section of an array and returns a new array.

16	some()
Returns true if at least one element in this array satisfies the provided testing function.

17	toSource()
Represents the source code of an object

18	sort()
Sorts the elements of an array.

19	splice()
Adds and/or removes elements from an array.

20	toString()
Returns a string representing the array and its elements.

21	unshift()
Adds one or more elements to the front of an array and returns the new length of the array.

Date Methods
Here is a list of each method and its description.

Sr.No.	Method & Description
1	Date()
Returns today's date and time

2	getDate()
Returns the day of the month for the specified date according to local time.

3	getDay()
Returns the day of the week for the specified date according to local time.

4	getFullYear()
Returns the year of the specified date according to local time.

5	getHours()
Returns the hour in the specified date according to local time.

6	getMilliseconds()
Returns the milliseconds in the specified date according to local time.

7	getMinutes()
Returns the minutes in the specified date according to local time.

8	getMonth()
Returns the month in the specified date according to local time.

9	getSeconds()
Returns the seconds in the specified date according to local time.

10	getTime()
Returns the numeric value of the specified date as the number of milliseconds since January 1, 1970, 00:00:00 UTC.

11	getTimezoneOffset()
Returns the time-zone offset in minutes for the current locale.

12	getUTCDate()
Returns the day (date) of the month in the specified date according to universal time.

13	getUTCDay()
Returns the day of the week in the specified date according to universal time.

14	getUTCFullYear()
Returns the year in the specified date according to universal time.

15	getUTCHours()
Returns the hours in the specified date according to universal time.

16	getUTCMilliseconds()
Returns the milliseconds in the specified date according to universal time.

17	getUTCMinutes()
Returns the minutes in the specified date according to universal time.

18	getUTCMonth()
Returns the month in the specified date according to universal time.

19	getUTCSeconds()
Returns the seconds in the specified date according to universal time.

20	getYear()
Deprecated - Returns the year in the specified date according to local time. Use getFullYear instead.

21	setDate()
Sets the day of the month for a specified date according to local time.

22	setFullYear()
Sets the full year for a specified date according to local time.

23	setHours()
Sets the hours for a specified date according to local time.

24	setMilliseconds()
Sets the milliseconds for a specified date according to local time.

25	setMinutes()
Sets the minutes for a specified date according to local time.

26	setMonth()
Sets the month for a specified date according to local time.

27	setSeconds()
Sets the seconds for a specified date according to local time.

28	setTime()
Sets the Date object to the time represented by a number of milliseconds since January 1, 1970, 00:00:00 UTC.

29	setUTCDate()
Sets the day of the month for a specified date according to universal time.

30	setUTCFullYear()
Sets the full year for a specified date according to universal time.

31	setUTCHours()
Sets the hour for a specified date according to universal time.

32	setUTCMilliseconds()
Sets the milliseconds for a specified date according to universal time.

33	setUTCMinutes()
Sets the minutes for a specified date according to universal time.

34	setUTCMonth()
Sets the month for a specified date according to universal time.

35	setUTCSeconds()
Sets the seconds for a specified date according to universal time.

36	setYear()
Deprecated - Sets the year for a specified date according to local time. Use setFullYear instead.

37	toDateString()
Returns the "date" portion of the Date as a human-readable string.

38	toGMTString()
Deprecated - Converts a date to a string, using the Internet GMT conventions. Use toUTCString instead.

39	toLocaleDateString()
Returns the "date" portion of the Date as a string, using the current locale's conventions.

40	toLocaleFormat()
Converts a date to a string, using a format string.

41	toLocaleString()
Converts a date to a string, using the current locale's conventions.

42	toLocaleTimeString()
Returns the "time" portion of the Date as a string, using the current locale's conventions.

43	toSource()
Returns a string representing the source for an equivalent Date object; you can use this value to create a new object.

44	toString()
Returns a string representing the specified Date object.

45	toTimeString()
Returns the "time" portion of the Date as a human-readable string.

46	toUTCString()
Converts a date to a string, using the universal time convention.

47	valueOf()
Returns the primitive value of a Date object.

Date Static Methods
In addition to the many instance methods listed previously, the Date object also defines two static methods. These methods are invoked through the Date( ) constructor itself −

Sr.No.	Method & Description
1	Date.parse( )
Parses a string representation of a date and time and returns the internal millisecond representation of that date.

2	Date.UTC( )
Returns the millisecond representation of the specified UTC date and time.

Math Methods
Here is a list of each method and its description.

Sr.No.	Method & Description
1	abs()
Returns the absolute value of a number.

2	acos()
Returns the arccosine (in radians) of a number.

3	asin()
Returns the arcsine (in radians) of a number.

4	atan()
Returns the arctangent (in radians) of a number.

5	atan2()
Returns the arctangent of the quotient of its arguments.

6	ceil()
Returns the smallest integer greater than or equal to a number.

7	cos()
Returns the cosine of a number.

8	exp()
Returns EN, where N is the argument, and E is Euler's constant, the base of the natural logarithm.

9	floor()
Returns the largest integer less than or equal to a number.

10	log()
Returns the natural logarithm (base E) of a number.

11	max()
Returns the largest of zero or more numbers.

12	min()
Returns the smallest of zero or more numbers.

13	pow()
Returns base to the exponent power, that is, base exponent.

14	random()
Returns a pseudo-random number between 0 and 1.

15	round()
Returns the value of a number rounded to the nearest integer.

16	sin()
Returns the sine of a number.

17	sqrt()
Returns the square root of a number.

18	tan()
Returns the tangent of a number.

19	toSource()
Returns the string "Math".

RegExp Methods
Here is a list of each method and its description.

Sr.No.	Method & Description
1	exec()
Executes a search for a match in its string parameter.

2	test()
Tests for a match in its string parameter.

3	toSource()
Returns an object literal representing the specified object; you can use this value to create a new object.

4	toString()
Returns a string representing the specified object.

# References
https://www.tutorialspoint.com/javascript/javascript_builtin_functions.htm
