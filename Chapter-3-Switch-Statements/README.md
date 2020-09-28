# Chapter 3 - Switch Statements

* [The Switch Statement](#the-switch-statement)
  * [The Switch Statement Components](#the-switch-statement-components)
  * [Grouping Cases Together](#grouping-cases-together)
  * [Why use a switch instead of an IF statement?](#why-use-a-switch-instead=of-an-if-statement)

## The Switch Statement

Sometimes we have so many different options in our if-else statements that we need a different approach. This is where the switch statement comes in.

In pseudocode:

```
switch ( expression ) {
    case 1:
	  do something;
	  break;
    case 2:
	  do something;
	  break;
    default: 	
	  if other cases aren't true - do this;
}
```

&nbsp;
&nbsp;

### The switch statement components:

The expression: This is the variable you are testing against, can be an int or char
Case:           What to do for each possible value of the variable tested
Break:          To show where a case ends
Default:        The case that executes if no other cases match the variable value

Switch statements offer similar functionality to the if else conditional. The switch statement runs through a series of cases and if one of the cases matches the expression then the code block is executed until a break is reached.

Be aware that if a case does not include a break the following case statements will also be executed until a break is reached.

A default case can be included that executes a statement(s) if no case is met (similar to a terminating else). The default usually does not contain a break as this is the last case encountered so it’s not required.

The switch statement is limited in that it can only take a single exact value such as int and char values. It cannot take a conditional expression (e.g. x >= 10), or string values.


Take a look at the following example to see the switch statement in action

#### Example: Sugar

```C++
cout << “Would you like sugar?” << endl;
char input;
cin >> input;

switch (input) {
    case 'Y':
        cout << "Adding sugar..." << endl;
	   break;
    case 'N':
	   cout << "No sugar requested..." << endl;
	   break;
    default:
         cout << "That input was not recognised" << endl;
}
```

&nbsp;
&nbsp;

### Grouping Cases Together

If multiple options in your switch statement need to execute the same code, rather than duplicating the lines of code you can group cases together by leaving out the break. For example, if we wanted to account for both upper and lower case inputs in our sugar example we can group together the cases for the upper and lower case letters:

```C++
cout << “Would you like sugar?” << endl;
char input;
cin >> input;

switch (input) {
    case 'Y':
    case 'y':
        cout << "Adding sugar..." << endl;
	   break;
    case 'N':
    case 'n':
	   cout << "No sugar requested..." << endl;
	   break;
    default:
         cout << "That input was not recognised" << endl;
}
```

&nbsp;
&nbsp;

### Why use a switch instead of an IF statement?

When you have many options you need to check the switch statement can provide greater clarity and readability of code. It can also offer some minor performance improvements compared to a long IF-ELSE statement.

However, as the switch statement can only accept single exact values in the expression there will be instances where you will have to use an IF-ELSE statement instead (e.g. for evaluating ranges).
