# Chapter 4 Exercises

Exercises with a tick mark :ballot_box_with_check: represent exercises that must be submitted as part of your Programming Skills Portfolio as a minimum expectation. Completing more exercises provides the opportunity to attain higher marks. For each exercise you should create a _**new project**_ with the name of the exercise and save it to this exercises folder in your local repository.

Once you have completed your solution you should make sure you commit and push your solutions to your remote repository on GitHub. You can commit and push as many changes to your solutions as you wish, only those pushed before the chapter deadlines will be marked for the Programming Skills Portfolio.  

---
&nbsp;

## Exercise 1: Reverse 9 times table :ballot_box_with_check:

Using a while loop, and appropriate increment/decrement operators. Write a while loop that prints to console all values of the 9 times table from 108 to 9.

```
Expected result:
108
99
90
81
72
63
54
45
36
27
18
9
```

Use the starter code below to complete this exercise, filling in the gaps to complete the solution

```C++
#include <iostream>
using namespace std;

int main(){
    int num = 108; //declare and initalise variable

    while(______){ //while conditional check
        //code to output then decrease number
        __________________________________
        _____________
    }
    cin.get(); //keeps console window open in Visual Studio
    return 0;
}
```

&nbsp;
&nbsp;

## Exercise 2: The Pointless Box

You are tasked to make an (almost) useless contraption that tells the user when they have entered either the number 1 or 2 to console.

When the user enters 1 the message “you have entered the number 1” should print to console, and when the user enters 2 the message “you have entered the number 2” should print to console. If the user enters any other number the program should end.  

*Hint:* This can be solved by having two conditions in the while loop. You will also need an if statement within the loop. 	

&nbsp;
&nbsp;

## Exercise 3: Brute Force Attack :ballot_box_with_check:

You are an inexperienced hacker trying to find the correct passcode to enter a safe. Write a programme that defines the correct passcode of 246, and allows users to enter passcode attempts until they reach the correct number.

Your programme should use a while loop to allow the user to keep entering passcode attempts until correct, and should use a break statement to exit the loop once the correct pass code is entered.

*Hint:* the condition of your while loop should be true.

&nbsp;
&nbsp;

## Exercise 4: Brute Force Attack II :ballot_box_with_check:

Modify the solution to Brute-Force Attack to include a maximum of 5 passcode attempts. Each time the user enters an incorrect passcode, they should be prompted of how many passcode attempts remain. If there are 5 failed passcode attempts the while loop should break and inform the user that the authorities have been alerted!

&nbsp;
&nbsp;

## Exercise 5: Loopy

A - Starting with the code below, write a program that counts from zero up to a user specified number. For example, if the user enters the number 5, your program should display the numbers: 0, 1, 2, 3, 4, 5. You cannot use an if-statement for this part!

```C++
#include <iostream>
using namespace std;
int main() {
    int myInt;
    int counter;

    return 0;
}
```

B - Now have the program start counting from a number input by the user.

C - Use an if-else statement to count the number of even and odd numbers between the first and final value, e.g: start = 1 end = 11 Number of even numbers: 5 Number of odd numbers: 6

D - Write a program that counts and displays numbers starting from the user's first value to their second value (as before), and then count downwards again to the initial value. You can only use one while loop.

&nbsp;
&nbsp;

## Exercise 6: Are you Gullible? :ballot_box_with_check:

Write a program that continues to asks the user to enter any number other than 5 until the user enters the number 5. If the user enters 5 display the message "Hey! you weren't supposed to enter 5!" and exit the program.

*Extension Problem (Optional)*

* If the user still hasn't entered the number 5 after 10 iterations display the message "Wow, you're more patient than I am, you win." and exit.

* Instead of always asking the user to enter any number other than 5, instead ask the user to enter any number other than the number equal to the number of times they've been asked to enter a number. (i.e on the first iteration "Please enter any number other than 0" and on the second iteration "Please enter any number other than 1" etc...) The program must still behave accordingly exiting when the user enters the number they were asked not to.

&nbsp;
&nbsp;

## Exercise 7: Fuel Extended

Complete the fuel exercise from Chapter 4 ensuring you have used a switch statement and feel free to add other fuel types!

Now extend the program to use a do-while loop that keeps the program running until the user enters a valid fuel type and asks for an appropriate amount of fuel.

&nbsp;
&nbsp;

## Exercises 8: Age Checker :ballot_box_with_check:

Write a program that asks the user to input their age. If the user enters incorrect data (e.g. a letter) the program should keep asking them for their age until acceptable data is entered.

*Extension Problem (Optional):*  
Also reject unrealistic ages (e.g. under 0 and over 120).

&nbsp;
&nbsp;

## Exercise 9: Sum until fail

Write a program that allows the user to quickly sum a bunch of integers and then displays the result if a digit is not entered. For example:

*User enters in console:*
```
5
6
3
eggs
```

*Program displays:*
```
14
```

Notice that the program ignored "eggs".

&nbsp;
&nbsp;

## Exercise 10: Prime number

Create a program that gets a number from the user then checks if the number is a prime number

&nbsp;
&nbsp;

## Exercise 11: Exponent

Use a while loop to exponentiate a number. So, for example, 24 = 2×2×2×2 = 16. The number 2 is called the base and the number 4 is called the exponent. Your program should compute the result given positive integers for the base and exponent.

&nbsp;
&nbsp;

## Exercise 12: Text-based Game

Copy & paste the code below for this exercise. This is a treasure search game where the user goes through a series of chambers and must find the treasure that is protected by a dragon.

First, follow the flow of the game. It might look difficult to start with but you will soon make sense of it. Try drawing a block diagram of the game to make it easier for you to understand.

Once you understand the operation of the game extend it so that it includes the following features:

Add one more chamber to the game after the user meets the dragon.
Add more items available for pick up for the user.
Add a control that the user can press and get a report of their inventory.

E.g.
6 (is pressed)
You have: sword, gloves, lamp etc.

Extension problem (Optional):

How might you use your own creativity to expand the game further.

```C++
#include <iostream>
using namespace std;

int main() {

    cout << "Welcome to the dragon slay game! You will go through a series of chambers and must slay the dragon!" << endl;
    cout << "Available controls are:\n1: go up\n2: go down\n3: go left\n4: go right\n0: pick up items\n5: to slay the dragon.\n6: to view inventory." << endl;
    cout <<"You are in a hallway. There is a door to the left of you." << endl;

    int pickup = 0;
    int up = 1;
    int down = 2;
    int left = 3;
    int right = 4;
    int slay = 5;
    int inventory = 6;
    string inventoryList = "You have the following items:";

    int userInput;

    bool firstValidMove = false;

    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == left) {
            cout << "You go left." << endl;
            firstValidMove = true;
        }else if(userInput == inventory){
            cout << inventoryList << endl;
        } else {
            cout << "You can't go that way. Try again." << endl;
        }
    } while (!firstValidMove);

    cout << "You are at a grandiose staircase. There is an ajar armor cabinet with a sword in it. The staircase is blocked going down." << endl;

    bool secondValidMove = false;
    bool hasSword = false;

    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == pickup) {
            cout << "You pick up a sword" << endl;
            inventoryList += " sword, ";
            hasSword = true;
        } else if (userInput == up) {
            cout << "You go up." << endl;
            secondValidMove = true;
        } else if(userInput == inventory){
            cout << inventoryList << endl;
        }else {
            cout << "You can't do that. Try again." << endl;
        }
    } while (!secondValidMove);

    cout << "At the top of the staircase your way is blocked by a dragon!!!" << endl;

    bool thirdValidMove = false;

    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == slay) {
            if (hasSword == true) {
                cout << "You use your mighty sword and slay the dragon! You open the door behind the dragon and find the castle treasure!" << endl;
                inventoryList += "treasure, ";
            } else {
                cout << "You use your bare hands to slay the dragon but don't succeed! Try the game again. Perhaps pickup a weapon or two?" << endl;
            }
            thirdValidMove = true;
        }else if(userInput == inventory){
            cout << inventoryList << endl;
        } else {
            cout << "Quick! Slay the dragon! Use the slay command (press 5)!" << endl;
        }
    } while (!thirdValidMove);

    bool fourthValidMove = false;

    cout << "You may have the treasure but that's not the end, you hear the screams of the princess in the dungeon " << endl;

    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == down) {
            cout << "You head down the stairs quickly, on your way you pick carefully pick up a bottle of poison" << endl;
            inventoryList += "poison, ";
            fourthValidMove = true;
        }else if(userInput == inventory){
            cout << inventoryList << endl;
        } else {
            cout << "You can't do that! Try again." << endl;
        }
    } while (!fourthValidMove);


    cout << "Where could this adventure lead next..." << endl;


    return 0;
}
```
