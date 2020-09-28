# Chapter 7 Exercises

Exercises with a tick mark :ballot_box_with_check: represent exercises that must be submitted as part of your Programming Skills Portfolio as a minimum expectation. Completing more exercises provides the opportunity to attain higher marks. For each exercise you should create a _**new project**_ with the name of the exercise and save it to this exercises folder in your local repository.

Once you have completed your solution you should make sure you commit and push your solutions to your remote repository on GitHub. You can commit and push as many changes to your solutions as you wish, only those pushed before the chapter deadlines will be marked for the Programming Skills Portfolio.  

---
&nbsp;

## Exercise 1: You say hello, I say goodbye

Write a program that contains and invokes two functions. One that outputs a welcome message that reads “Welcome to my program” and a second that outputs a goodbye message that reads “End of program”.

When completing this exercise first try declaring and defining each function at the same time. Then modify the solution so the functions are declared and defined separately.

&nbsp;
&nbsp;

## Exercise 2: Sum it up :ballot_box_with_check:

Write a function that sums (adds together) three integers. Note that you will need to declare three parameters with the function declaration and invoke the function using three arguments.

&nbsp;
&nbsp;

## Exercise 3: Find average

Write a function that finds the average of three doubles. You will need to pass three doubles into your function, which should sum them and then divide the total by 3.

&nbsp;
&nbsp;

## Exercise 4: Greetings :ballot_box_with_check:

Write a program that ask for a name and a greeting, then greets the person. Your function should take two arguments - name and greeting, which will both be strings and then return the new string back to the main program

&nbsp;
&nbsp;

## Exercise 5: Can I vote Function

Write a program that asks for the user’s name and age, before passing that information into a function called canVote. This function should test if the user is 18 years old or older.

If the user’s age is greater than or equal to 18, the function should ask the user for their name.
The function should then return the String “xxx can vote” to the main function, where xxx is the name inputted by the user. If the user’s age is less than 18, the function should return “Too young to vote” to the main function. Finally, print the returned String from the main function.

&nbsp;
&nbsp;

## Exercise 6: Go Compare

Write a program that passes two Strings into a function called compareStrings. This function should test whether or not the two Strings have the same value. If the Strings are equal, the function should return the boolean value true to the main function, otherwise it should return the boolean value false. Finally, print the returned value from the main function.

&nbsp;
&nbsp;

## Exercise 7: Find the Max :ballot_box_with_check:

Declare a function called max_two that compares the numbers passed as arguments and returns the maximum.

&nbsp;
&nbsp;

## Exercise 8: Function Fixer

The following code should calculate and display the mean of two variables of type double. Can you fix the function to make this work?

```C++
#include <iostream>
using namespace std;

void mean (void a, void b) {
    return (a + b) / 2.0;
}
int main() {
    double numberA = 5;
    double numberB = 6;
    double result = mean(numberA, numberB);
    cout << "a is " << numberA;
    cout << "b is " << numberB;
    cout << "The mean of a and b is " << result;
    return 0;
}
```

&nbsp;
&nbsp;

## Exercise 9: Say Hello

Write a function titled say_hello() that outputs to the screen "Hello". Modify the function so that it takes an integer argument and says hello the number of times equal to the value passed to it.

&nbsp;
&nbsp;

## Exercise 10: Return the product

Write a function that takes two integer arguments and returns an integer that is the product of the two integers. (e.g., integer1: 4, Integer2: 5 returns: 20)

&nbsp;
&nbsp;

## Exercise 11: Biography Selection

Write a program that outputs the menu below and gets input from the user before returning the information from a function. You should display the menu via one function called displayMenu() and return the information via another function called bio(). The program should continue to ask the user for input until they select exit.

```
Pick an option
1. Show Name
2. Show Age
3. Show Hometown
4. Exit
```

&nbsp;
&nbsp;

## Exercise 12: Calculator :ballot_box_with_check: 

Write a program that allows the user to add, subtract, multiply and divide two numbers.
The calculations should be performed by function(s) outside of the programs main function. You should present the user with a console menu that allows them to select which calculation they would like to make, then allow them to enter the two numbers before passing these numbers as function arguments to the requested calculation and display the result.

*Extension Problem (Optional)*

* Allow the user to perform different calculations until they decide to quit the program
* Provide error messages if the user enters invalid data (e.g. letters not numbers).

&nbsp;
&nbsp;

## Exercise 13: Power to the Function

Write a function that calculates powers (for example, 42 or 65). It should ask for a base and an exponent, then return the result to be printed.

&nbsp;
&nbsp;

## Exercise 14: Highest Odd

Write a function that returns the highest odd number from a given array. The array is 15, 2, 6, 11, 12, 13, 9

&nbsp;
&nbsp;

## Exercise 15: Playing with Strings

Write a program that asks for a user's first name and last name separately. The program should pass these strings to a function which returns the users full name as a single string.

Next create another function that replaces every a, e, i , o, u with the letter z and returns the converted string

Create a final function that reverses the user's name and returns the reversed string.
