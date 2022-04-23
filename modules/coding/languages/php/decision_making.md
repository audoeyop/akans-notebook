# PHP Decision Making

The if, elseif ...else and switch statements are used to take decision based on the different condition.

You can use conditional statements in your code to make your decisions. PHP supports following three decision making statements -

![Decision making statements in PHP](https://www.tutorialspoint.com/php/images/decision_making.jpg)

-   if...else statement - use this statement if you want to execute a set of code when a condition is true and another if the condition is not true

-   elseif statement - is used with the if...else statement to execute a set of code if one of the several condition is true

-   switch statement - is used if you want to select one of many blocks of code to be executed, use the Switch statement. The switch statement is used to avoid long blocks of if..elseif..else code.

The If...Else Statement
-----------------------

If you want to execute some code if a condition is true and another code if a condition is false, use the if....else statement.

### Syntax

if (*condition*)
   *code to be executed if condition is true;*
else
   *code to be executed if condition is false;*

### Example

The following example will output "Have a nice weekend!" if the current day is Friday, Otherwise, it will output "Have a nice day!":

[Live Demo](http://tpcg.io/NKqFAU)

<html>  <body>  <?php
         $d = date("D");  if  ($d ==  "Fri") echo "Have a nice weekend!";  else echo "Have a nice day!";  ?>  </body>  </html>

It will produce the following result -

Have a nice weekend!

The ElseIf Statement
--------------------

If you want to execute some code if one of the several conditions are true use the elseif statement

### Syntax

if (*condition*)
   *code to be executed if condition is true;*
elseif (*condition*)
   *code to be executed if condition is true;*
else
   *code to be executed if condition is false;*

### Example

The following example will output "Have a nice weekend!" if the current day is Friday, and "Have a nice Sunday!" if the current day is Sunday. Otherwise, it will output "Have a nice day!" -

[Live Demo](http://tpcg.io/YoZkua)

<html>  <body>  <?php
         $d = date("D");  if  ($d ==  "Fri") echo "Have a nice weekend!"; elseif ($d ==  "Sun") echo "Have a nice Sunday!";  else echo "Have a nice day!";  ?>  </body>  </html>

It will produce the following result -

Have a nice Weekend!

The Switch Statement
--------------------

If you want to select one of many blocks of code to be executed, use the Switch statement.

The switch statement is used to avoid long blocks of if..elseif..else code.

### Syntax

switch (*expression*){
   case *label1:*
      *code to be executed if expression = label1;*
      break;

   case *label2:*
      *code to be executed if expression = label2;*
      break;
      default:

   *code to be executed
   if expression is different
   from both label1 and label2;*
}

### Example

The *switch* statement works in an unusual way. First it evaluates given expression then seeks a lable to match the resulting value. If a matching value is found then the code associated with the matching label will be executed or if none of the lable matches then statement will execute any specified default code.

[Live Demo](http://tpcg.io/MpShPB)

<html>  <body>  <?php
         $d = date("D");  switch  ($d){  case  "Mon": echo "Today is Monday";  break;  case  "Tue": echo "Today is Tuesday";  break;  case  "Wed": echo "Today is Wednesday";  break;  case  "Thu": echo "Today is Thursday";  break;  case  "Fri": echo "Today is Friday";  break;  case  "Sat": echo "Today is Saturday";  break;  case  "Sun": echo "Today is Sunday";  break;  default: echo "Wonder which day is this ?";  }  ?>  </body>  </html>

It will produce the following result -

Today is Monday

# References
https://www.tutorialspoint.com/php/php_decision_making.htm
