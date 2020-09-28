# Chapter 2 Exercises

Exercises with a tick mark :ballot_box_with_check: represent exercises that must be submitted as part of your Programming Skills Portfolio as a minimum expectation. Completing more exercises provides the opportunity to attain higher marks. For each exercise you should create a _**new project**_ with the name of the exercise and save it to this exercises folder in your local repository.

Once you have completed your solution you should make sure you commit and push your solutions to your remote repository on GitHub. You can commit and push as many changes to your solutions as you wish, only those pushed before the chapter deadlines will be marked for the Programming Skills Portfolio.  

---
&nbsp;

## Exercise 1: Good Morning :ballot_box_with_check:

Write a programme that tells the user whether it is AM or PM. For the purposes of this programme we are using a 24 hour clock.

Declare a variable called currentTime and initialise it with the value 3.
Write an if-else statement that compares the currentTime to the value, 12.
If currentTime is greater than or equal to 12 then print “it is PM” to the console.
If currentTime is less than 12 then print “it is AM” to the console.

Use the starter code below to complete this exercise, filling in the gaps to complete the solution

```C++
#include <iostream>
using ___________ std;

int main() {
    ___________ = 3; //declare and initialise variable for time
    if(____________){ //check if 'currentTime' is greater than 12
        cout << "It's PM" << endl; //output PM message
    }else{ //else 'currentTime' must be less than 12
        _____________________ //output AM message
    }
    return 0;
}
```

*Extension Problem (Optional)*

Extend the program to include greetings similar to the example in the “Checking multiple conditions with ELSE-IF” section above

* “Good Morning” for times before 12
* “Good Afternoon” for times before 18
* “Good Evening” for times before 21
* “Good Night” for time before 24
* “Time not Valid” for all other times

&nbsp;
&nbsp;

## Exercise 2: Can I Vote :ballot_box_with_check:

Write a programme that tells the user whether or not they are eligible to vote.

The programme should declare an appropriate variable with the value of 16.
It should use an if-else statement to compare this value to the UK voting age, which is 18.
The programme should print a response to the user for each possible outcome.


```C++
________________
________________

int main() {
    _________ //declare and initialise age variable
    if(________){ //check if age is greater than or equal to 18
        _______________ //output can vote message
    }else{ //age must be less that 18
        ______________ //output can vote message
    }
    cin.get(); //keeps console window open on Visual Studio
    ________
}
```

&nbsp;
&nbsp;

## Exercise 3: Splashing out :ballot_box_with_check:

Write a programme that decides whether or not you can afford to buy the latest computer game. The programme should include:

* An if-else statements that executes the TRUE code block if the amount of money you have is equal to or above 25.
* The TRUE code block should print “Buy computer game” to the console, and decrement your money variable by 25.
* The ELSE code block should print “I need to save up more cash!”.
* Once the if-else is completed, your programme should print the amount of money you have left over.


*Extension Problem (optional)*

Allow the user to input how much money they have initially.  Hint: you can utilise ```cin``` to get user input

&nbsp;
&nbsp;

## Exercise 4: Odd or Even :ballot_box_with_check:

Write a program that works out if a number is odd or even

*Extension Problem (optional)*

Assign the values of the variable via user input.
Include appropriate input error checking

&nbsp;
&nbsp;

## Exercise 5: Number Checker

Write a program to check whether a number is positive, negative or zero.

&nbsp;
&nbsp;

## Exercise 6: Profit or Loss

Write a program to calculate profit or loss. The program should ask the user for the purchase price and sale price then calculate whether profit or loss was made on the sale. For example:

>Purchase Price: £1250  
>Sale Price: £1000  
>Loss = £250  

&nbsp;
&nbsp;

## Exercise 7: Name that Shape
Write a program that determines the name of a shape from its number of sides. Read the number of sides from the user and then report the appropriate name as part of a meaningful message. Your program should support shapes with anywhere from 3 up to (and including) 10 sides. If a number of sides outside of this range is entered then your program should display an appropriate error message.

&nbsp;
&nbsp;

## Exercise 8: Temperature			
In chapter 1 you wrote a program to convert temperature in Fahrenheit to Celsius.
Make sure that your program asks the user for the temperature (in Fahrenheit) and prints the correct temperature in Celsius (verify results using an online calculator).
Extend your program by having the computer ask the user the question shown below (with correct formatting!) and then complete the necessary steps:

```
Hello, please enter an option:     
'1': To convert from Fahrenheit to Celsius   
'2': To convert from Celsius to Fahrenheit  
```

Your program should display an appropriate warning message if the user does not enter a valid integer.

&nbsp;
&nbsp;

## Exercise 9: Theme Park

At a Theme Park there is a ride that has both a height restriction and an age restriction. To gain admission to the ride you have to be above 0.6 metres tall AND age 5 and above. Write a program that deals with this situation.

You will need a compound condition and the && logical operator to solve this, e.g:

```
if( first-condition && second-condition ){
       //output can ride message
}else{
       //output can't ride message
}
```

&nbsp;
&nbsp;

## Exercise 10: Primitive Quiz :ballot_box_with_check:

You have been asked to write a simple question and answer programme. There is only one question to answer: “What is the capital of France”.

* The programme should ask the user this question, then prompt for a response.
* The user then types in an answer.
* If the answer is correct, the programme should tell the user that their answer was correct.
* If the answer is incorrect, the programme should tell the user that their answer was wrong.

*Extension Problem (Optional)*

* What about capital letters? (e.g. paris vs. Paris)
* Add additional questions.  (e.g. 10 Capitals Cities of Europe Quiz)

&nbsp;
&nbsp;

## Exercise 11: Dog Days

It is commonly said that one human year is equivalent to 7 dog years. However this simple conversion fails to recognize that dogs reach adulthood in approximately two years. As a result, some people believe that it is better to count each of the first two human years as 10.5 dog years, and then count each additional human year as 4 dog years.

Write a program that implements the conversion from human years to dog years described in the previous paragraph. Ensure that your program works correctly for conversions of less than two human years and for conversions of two or more human years. Your program should display an appropriate error message if the user enters a negative number.

&nbsp;
&nbsp;

## Exercise 12: Letter Checker

In this exercise you will create a program that reads a letter of the alphabet from the user. If the user enters a, e, i, o or u then your program should display a message indicating that the entered letter is a vowel. Any other letter should display a message indicating the entered letter is a consonant

*Extension Problem (Optional)*

Have your program handle other character inputs - e.g. provide appropriate messages for numbers or special characters like @, !, # etc. *Hint look up “isalpha c++” and “isdigit c++” on google.*

&nbsp;
&nbsp;

## Exercise 13: Mark my Words :ballot_box_with_check:

You are marking test papers for a local college, and need help keeping track of grade boundaries. For example, you need to be reminded whether 50 - 59% is a C or a D, or if 60 - 69% is a B or an A.
Write a program that does this job for you. Grade Boundaries are as follows:

>A - Above 70%  
>B - 60 - 69%  
>C - 50 - 59%  
>D - 40 - 49%  
>F - Below 40%  

&nbsp;
&nbsp;

## Exercise 14: Starting a Band

You want to start a two-piece band, but first you need a friend to join it. If you have a musical friend, you next need to check (using a nested if statement) that they actually play an instrument you want in the band. You decide that they need to play either guitar or drums to join.

Write a program that checks to see if you can start a band! You should use the following variables to write your program:

```C++
bool musicalFriend = true;
string friendPlays = "guitar";
```

Note: You will need to compare Strings to make this work, remember there are two ways you can do this.

*Method 1*
```C++
string s1 = "Carrot";
string s2 = "Cake"
if (s1  == s2) {
    cout << "Strings match" << endl;
} else {
    cout << "Strings do not match" << endl;
}
```

*Method 2*
```C++
string s1 = "Carrot";
string s2 = "Cake"
if (s1.compare(s2) == 0) {
    cout << "Strings match" << endl;
} else {
    cout << "Strings do not match" << endl;
}
```

You will also need to make sure you have included the strings class header at the top of your source file:
```C++
#include <string>
```

Use the following psuedo-code as a guide to structure your program:
```
START
    bool variable
    string variable
    IF(have musical friend)
          //this if is nested inside the first
          IF(friend plays an instrument)
              output message                  
          ELSE
              output message
    ELSE
        output message
END
```

&nbsp;
&nbsp;

## Exercise 15: Killing Time :ballot_box_with_check:

You are killing time in the middle of Bath city centre, waiting for your friend who is always late. You receive a text telling you how late they are going to be.

Write a program that follows the below rules:

> Scenario 1: Your friend is going to be another 15 minutes or more
> Result:     If you have more than 3 pounds in change, go buy a coffee, otherwise go for a walk around the town

>Scenario 2:  Your friend is going to with you in less than 15 minutes  
>Result:      Sit in the park and wait (probably grumbling).

You will need to use a nested if-else statement to complete this task. Please print appropriate text to the console to describe the result of each scenario.

&nbsp;
&nbsp;

## Exercise 16: Earthquake :ballot_box_with_check:

The table below contains earthquake magnitude ranges on the Richter scale and their descriptors. Write a program that reads a magnitude from the user and displays the appropriate descriptor as part of a meaningful message. For example, if the user enters 5.5 then your program should indicate that a magnitude 5.5 earthquake is considered to be a moderate earthquake.

| Magnitude             | Descriptor |
| ----------------------| -----------|
| Less than 2.0         | Mirco      |
| 2.0 to less than 3.0  | Very Minor |
| 3.0 to less than 4.0  | Minor      |
| 4.0 to less than 5.0  | Light      |
| 5.0 to less than 6.0  | Moderate   |
| 6.0 to less than 7.0  | Strong     |
| 7.0 to less than 8.0  | Major      |
| 8.0 to less than 10.0 | Great      |
| More than 10.0        | Meteoric   |

&nbsp;
&nbsp;

## Exercise 17: Triangles

Write a program that asks the user to enter the lengths of the three sides of a triangle.

Use the triangle inequality to determine if we have a triangle: In mathematics, the triangle inequality states that for any triangle, the sum of the lengths of any two sides must be greater than or equal to the length of the remaining side ([see here](https://en.wikipedia.org/wiki/Triangle_inequality))

If valid, have the program correctly classify the type of triangle as either: Equilateral, Isosceles or Scalene ([see here](https://www.mathsisfun.com/triangle.html)).

&nbsp;
&nbsp;

## Exercise 18: Chessboard Checker

  <img src="https://jakehobbs.co.uk/markdown_images/chessboard.png">

Positions on a chess board are identified by a letter and a number. The letter identifies the column, while the number identifies the row, as shown above

Write a program that reads a position from the user. Use an if statement to determine if the column begins with a black square or a white square. Then use modular arithmetic to report the color of the square in that row. For example, if the user enters a1 then your program should report that the square is black. If the user enters d5 then your program should report that the square is white. Your program may assume that a valid position will always be entered. It does not need to perform any error checking.

&nbsp;
&nbsp;

## Exercise 19: Note Calculator

Write a program that calculates the minimum number of notes required for a given amount of money. Available notes are 500, 100, 50, 20, 10, 5, 2, & 1.

The program should ask the user to enter the amount then calculate the number of notes. For example:

**Input**
```
Input amount: 575
```


**Output**
```
Total number of notes

500: 1
100: 0
50: 1
20: 1
10: 0
5: 1
2: 0
1: 0
```
