# Javascript Numbers

The Number object represents numerical date, either integers or floating-point numbers. In general, you do not need to worry about Number objects because the browser automatically converts number literals to instances of the number class.

Syntax
The syntax for creating a number object is as follows −

var val = new Number(number);
In the place of number, if you provide any non-number argument, then the argument cannot be converted into a number, it returns NaN (Not-a-Number).

Number Properties
Here is a list of each property and their description.

Sr.No.	Property & Description
1	MAX_VALUE
The largest possible value a number in JavaScript can have 1.7976931348623157E+308

2	MIN_VALUE
The smallest possible value a number in JavaScript can have 5E-324

3	NaN
Equal to a value that is not a number.

4	NEGATIVE_INFINITY
A value that is less than MIN_VALUE.

5	POSITIVE_INFINITY
A value that is greater than MAX_VALUE

6	prototype
A static property of the Number object. Use the prototype property to assign new properties and methods to the Number object in the current document

7	constructor
Returns the function that created this object's instance. By default this is the Number object.

In the following sections, we will take a few examples to demonstrate the properties of Number.

Number Methods
The Number object contains only the default methods that are a part of every object's definition.

Sr.No.	Method & Description
1	toExponential()
Forces a number to display in exponential notation, even if the number is in the range in which JavaScript normally uses standard notation.

2	toFixed()
Formats a number with a specific number of digits to the right of the decimal.

3	toLocaleString()
Returns a string value version of the current number in a format that may vary according to a browser's local settings.

4	toPrecision()
Defines how many total digits (including digits to the left and right of the decimal) to display of a number.

5	toString()
Returns the string representation of the number's value.

6	valueOf()
Returns the number's value.

In the following sections, we will have a few examples to explain the methods of Number.

# References
https://www.tutorialspoint.com/javascript/javascript_number_object.htm
