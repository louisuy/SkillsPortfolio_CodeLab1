# Chapter 3 Exercises

Exercises with a tick mark :ballot_box_with_check: represent exercises that must be submitted as part of your Programming Skills Portfolio as a minimum expectation. Completing more exercises provides the opportunity to attain higher marks. For each exercise you should create a _**new project**_ with the name of the exercise and save it to this exercises folder in your local repository.

Once you have completed your solution you should make sure you commit and push your solutions to your remote repository on GitHub. You can commit and push as many changes to your solutions as you wish, only those pushed before the chapter deadlines will be marked for the Programming Skills Portfolio.  

---
&nbsp;

## Exercise 1: Continue? :ballot_box_with_check:

Write a simple program that asks if the user would like to continue playing the game. The program should use a switch statement and accept the values Y (continue) and N (quit). Can you make the program handle both upper and lower case values?

*Use the starter code below to complete this exercise, filling in the gaps to complete the solution*

```C++
#include <iostream>
using namespace std;
int main() {
    cout << "Would you like to continue? (Y/N): "; //ask for input
    ____________ //variable for user answer;
    cin ____________//get user input

    switch (___________) { //evaluate expression
        case 'Y': //case for Y
            ____________ //cout message if user enters Y
            _________ //break to end case
        case ____: //case for N
             ___________ //cout message if user enters N
            break;
        _______: //default case
            ____________ //default message if neither Y or N entered
    }
    return 0;
}
```

&nbsp;
&nbsp;

## Exercise 2: Days of the Month :ballot_box_with_check:

You are a freelance calendar maker. Unfortunately, like me, you are useless are remembering how many days there are in each month of the year.

Write a program that uses a switch statement to tell a user how many days there are in a month.

Your cases should test a number corresponding to the months (e.g. 1 = January, 12 = December), and true cases should print out how many days there are in a month.

&nbsp;
&nbsp;

## Exercise 3: Fuel me up :ballot_box_with_check:

Write a program for an automatic fuel filling service. The program should ask the user for the fuel type using a char (e.g. ‘p’ for petrol or ‘d’ for diesel) and the number of litres needed (int), and finally display the price of the charge.

The program should have the following constraints:  

* It should be case sensitive to user input, e.g. "P" and "p" are treated equivalently.
* The program should only display the price if a valid fuel type has been entered and fuel is actually needed!
* You can only use one if-statement and one switch statement.
* If you haven't already, demonstrate how the two statements can be nested without impacting the solution.

&nbsp;
&nbsp;

## Exercise 4: Switching Temperature

You should now have a complete working program that converts a given temperature from Fahrenheit to Celsius and vice versa, depending on which option (integer) the user enters.

Revise your temperature converter to use a switch statement. The switch should test a char variable holding the characters entered by the user, e.g: Enter "f" to convert from Fahrenheit to Celsius Enter "c" to convert from Celsius to Fahrenheit

You should provide an appropriate default statement.

&nbsp;
&nbsp;

## Exercise 5: Switch Grade Calculator

Using a switch statement write a program that evaluates a student's mark (0-100) to the respective grade. Grade boundaries are defined below

* Less than 40: F
* Between 40 and 50:  E
* Between 50 and 60:  D
* Between 60 and 70:  C
* Between 70 and 80:  B
* Greater than 80: A

Your program should ask the user to input the student's full name and mark (between 0 - 100) and then output the student's name and grade (A - F). You should also handle invalid grade values.

*Hint:* Remember switch statements in C++ can only take constant whole values - e.g. int’s and char’s. You will need a way of dealing with the numbers between the ranges so they can equal a whole value to use in the switch cases. Think of what the different data types can store.
