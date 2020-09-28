# Chapter 2 - More Operators and IF ELSE

* [Increment and Decrement Operators](#increment-and-decrement-operators)
* [Relational Operators](#relational-operators)
* [Control Flow - IF ELSE statements](#control-flow---if-else-statements)
  * [The Importance of IF ELSE statements](#the-importance-of-if-else-statements)
  * [Building blocks of an IF ELSE statement](#building-blocks-of-an-if-else-statement)
  * [Checking Multiple Conditions with ELSE IF](#checking-multiple-conditions-with-else-if)
* [Compound Conditions](#compound-conditions)
  * [Logical AND](#logical-and)
  * [Logical OR](#logical-or)
  * [Logical NOT](#logical-NOT)
* [Nested IF ELSE Statements](#nested-if-else-statements)

## Increment and Decrement Operators

The last chapter introduced some basic operators which can be used to assign values to variables (=) or perform mathematical operations (+, -, /, \*, %). There are two further mathematical operators. The increment and decrement operators. These operators increase or decrease the value of a variable for a particular amount.

Here are some examples:

```C++

++      //two ‘plus’ signs = increase the value by 1
--      //two ‘minus’ signs = decrease the value by 1
+= 2    //‘plus’ sign then ‘equals’ sign then the number 2 = increase the value by 2
-= 2    //minus’ sign then ‘equals’ sign then the number 2 = decrease the value by 2

```

In code, increment and decrement operators may be used like this:

```C++
This code block will print the value 10 to console.
int time = 9;
time ++ ;
cout << time;
```

&nbsp;
&nbsp;

```C++
//This code block will print the value 18 to console.
int temperature = 15;
temperature +=3;
cout << temperature;

```

&nbsp;
&nbsp;

```C++
//This prints to console the first part of the nursery rhyme ’10 green bottles’
//using the decrement operator and cout statements.
int greenBottles = 10;
cout << greenBottles + "green bottles sitting on the wall" << endl;
cout << "But if one green bottle should accidentally fall" << endl;
greenBottles--;
cout << "They'll be " + greenBottles + " green bottles sitting on the wall" << endl;
```

&nbsp;
&nbsp;

## Relational Operators

In addition to these mathematical and assignment operators we have relational operators which compare two things and either evaluate to TRUE (1) or FALSE (0). This means relational operators can be used to make decisions in computer programs, e.g. if something is true do this, otherwise if its false do that

The following example illustrates the use of the less than relational operator:

```C++
7 < 10
```

This expression in words is saying “7 is smaller than 10”. This is a TRUE statement.

There are a number of relational operators:

```C++
<	//less than
> 	//greater than
>= 	//greater than or equal to
<=	//less than or equal to
== 	//equality - is the same as
!= 	//inequality - is not the same as
```

Here are some examples of relational operators in action. Note the use of variables here.  

```C
//This program will print 0 to console.
int numberOne = 6;
int numberTwo = 11;
cout << (numberOne == numberTwo);
```

&nbsp;
&nbsp;

```C
//This program will print 1 to console.
int numberOne = 6;
int numberTwo = 11;
cout << (numberOne != numberTwo);
```

&nbsp;
&nbsp;

> **Advaced Note** - Why doesn’t the console print true or false? In C++ the value of true and false is represented numerically with the values 1 and 0 respectively. Hence why in our first example above 0 (false) is printed to the console, as 6 is equal to 11 is a false statement.
>
>Then in the second example our relational operator asks if the variables are not the same, so 1 (true) is printed to the console, as 6 is not equal to 11 is a true statement.
>
>If you want to print the word rather than 0 or 1 include this line at the top of your main function:
>```C++
>cout << boolalpha;
>```

&nbsp;
&nbsp;

## Control Flow - IF ELSE Statements

### The Importance of IF ELSE statements

if-else statements are a cornerstone technique in computer programming. They enable us to write ‘decisions’ into our programmes.

It is very possible to make quite complex programmes using just variables, operators and if-else statements.

This is a flowchart diagram for an if-else statement:

<p align="center">
  <img src="https://jakehobbs.co.uk/markdown_images/IF-ELSE-Flowchart.png">
</p>

&nbsp;
&nbsp;

#### Real World example

This following example evaluates if it is raining. If it is raining, the programme will print “Take an umbrella”, otherwise it will print “Leave the umbrella”.

<p align="center">
  <img src="https://jakehobbs.co.uk/markdown_images/is-raining.png">
</p>

The **condition** here is ```isRaining == true```
The **code block** in green will execute if ```isRaining == true``` is a TRUE statement
else (otherwise) the code block in orange will execute.

In this example we can see that the boolean variable ```isRaining``` is initialised as false at the beginning of the programme. So, is the condition ```isRaining == true``` a TRUE or FALSE statement?

It is FALSE. Therefore the programme will execute the code block in orange and print “Leave the umbrella” to console.

&nbsp;
&nbsp;

### Building blocks of an IF ELSE statement

We can write an if-else statement in pseudocode like this:

```
IF (condition)
   code block to be executed if the condition is true
ELSE
   code block to be executed if the condition is false
END IF
```

The building blocks are therefore:

* A condition: this evaluates as either TRUE or FALSE
* True code block: the code that executes if the condition evaluate to TRUE
* Else code block: the code that executes if the condition evaluates to FALSE

Our real world umbrella example code would therefore look like:


```C++
#include <iostream>
using namespace std;

int main() {
	bool isRaining = false;

	if(isRaining == true){
		cout << "Take an Umbrella" << endl;
	}else{
		cout << "Leave the Umbrella" << endl;
	}

      return 0;
}
```

Note that the else section is optional and if you only want to run some code if the IF condition is true and do nothing if it is false then you can leave it out.

__*Important Note: remember code within blocks should be ‘indented’ to make the if-else statement easier to read.*__

&nbsp;
&nbsp;

## Checking Multiple Conditions with ELSE IF

In the previous examples we have used the else keyword to begin a block of code that will run if our IF condition is false. But what if we wanted to do some additional conditional checks if the first one is false? In this instance we can use the ELSE-IF keyword to create additional conditions.

Take a look at the following example. In this program we want to output a greeting depending on the time of day. If it’s before 12 (noon) we want to say “Good Morning”. However, we then want more than one other greeting for time after 12 to handle the afternoon and evening. This means we can’t just use an ELSE block.

Therefore, we can create a second condition to check if the time is before 6pm (18:00) to handle the afternoon greeting and have a final terminating ELSE block for the evening greeting for all times after 6pm.

An IF statement can have multiple conditional checks by continuing to add ELSE-IF blocks. The program will evaluate the conditions in order and execute the block of code relating to the first condition that evaluates as TRUE, all other blocks will be ignored. If none of the conditions evaluate to TRUE the else block will run, or if no ELSE block is included nothing will happen.

```C++
#include <iostream>
#include <string>
using namespace std;


int main(){
    int time = 8;
    string greeting;

    if (time < 12) {
        greeting = "Good morning";
    } else if (time < 18) {
       greeting = "Good afternoon";
    } else {
       greeting = "Good evening";
    }
    cout << greeting << endl;
}
```

&nbsp;
&nbsp;

## Compound Conditions

Sometimes an if-else statement needs more than one condition. For example, if two things have to be TRUE for some code to run.

For example, what about the scenario where we want to make a cheese sandwich. We need to have both bread and cheese to do this. Without one of the other, it isn’t a sandwich.

### Logical AND

If we want to programme this scenario, we need a Logical AND operator (&&). Here, we have two conditions in the if-else statement. Both have to evaluate to TRUE for the instruction in the code block to run. In pseudocode, a Logical AND compound condition looks like this:

```
if ( condition1 && condition2 ) {
	do something;
}
```

#### Example: Goldilocks

This Composite If-else Statement is checking for the perfect temperature of porridge: 40 degrees is too cold, and 60 degrees is too hot. The programme prints “That’s just right!” when the porridge is more than 40 degrees, but less than 60 degrees.

```C++
int porridgeTemperature = 56;

if (porridgeTemperature > 40 && porridgeTemperature < 60 ) {
   cout << "That's just right!" << endl;
}
```

&nbsp;
&nbsp;

### Logical OR

What about if we want an instruction to execute if one condition OR another is TRUE. Well to do this we need a Logical OR operator. We use two ‘pipes’ for this operator ```||```

#### Example: The Bouncer

A nightclub only accepts two forms of ID: A passport OR a Driving Licence. A student who wishes to enter the club has a passport but no driving licence.

```C++
bool hasPassport = false;
bool hasDrivingLicense = true;

if ( (hasPassport == true) || (hasDrivingLicense == true) ) {
	cout << "You may enter the club" << endl;
} else {
	cout << "Sorry, I can't let you in" << endl;
}
```

You could rewrite this slightly differently. Note the conditions of the IF statement below. You don’t need to write hasPassport == true. Instead you can simply write hasPassport.

```C++
bool hasPassport = false;
bool hasDrivingLicense = true;

if ( (hasPassport) || (hasDrivingLicense) ) {
	cout << "You may enter the club" << endl;
} else {
	cout << "Sorry, I can't let you in" << endl;
}
```

&nbsp;
&nbsp;

### Logical NOT

The Logical NOT inverts the result of a condition. For example, if you put an exclamation mark in front of TRUE, it becomes FALSE.

#### Example: Brothers

This example compares the ages of two brothers. If ‘brotherA’ is younger then the system will print “Brother A is older” to the console. Note that the comparison asks whether ‘brotherA’ is younger than ‘brotherB’, and then inverts the answer (i.e. here FALSE becomes TRUE).

```C++
int brotherA = 15;
int brotherB = 12;
if ( ! (brotherA < brotherB) ) {
	cout << "Brother A is older" << endl;
}
```

&nbsp;
&nbsp;

## Nested IF ELSE statements

A nested if-else statement is one if-else statement wrapped around another. This is useful for when you want to make two decisions in a row, where the second decision relies on the first. In pseudocode the nested if-else statement looks like this:

```
if ( condition1 ) {
	if ( condition 2 ) { //This if statement is nested inside another
		do something;
	} else {
		do something;
	}
} else {
	do something;
}
```

#### Example: Zombie Attack!

The world is crumbling following a recent outbreak of the DX TYPE-2 virus. The dead are rising and you must decide whether to fight or flee. You are sheltered in a small cabin in the woods when you hear a knock on the door. You approach the door…

First Question:   	Is there a zombie at the door?
Result: 		        There is a either a zombie at the door or a civilian in need of help.
Second Question: 	  If there is a zombie at the door you must decide to fight or flee. If
			              there is not you let the civilian in.

We can write the above situation using a nested if-else statement.

```C++
bool zombieAtDoor = true;
bool decideToFight = false;
// This is the nested if-else statement that governs the decisions
if (zombieAtDoor == true) {
	if (decideToFight == true) {
		cout << "Grab a weapon and fight for your life!" << endl;
	} else {
		cout << "Run away, as fast as you can!" << endl;
	}
} else {
	cout << "Let the civilian in" << endl;
}
```

But remember where a condition == true, we can remove the == true bit to make the code easier to read. So we could rewrite this as:

```C++
bool zombieAtDoor = true;
bool decideToFight = false;
// This is the nested if-else statement that governs the decisions
if (zombieAtDoor) {
	if (decideToFight) {
		cout << "Grab a weapon and fight for your life!" << endl;
	} else {
		cout << "Run away, as fast as you can!" << endl;
	}
} else {
	cout << "Let the civilian in" << endl;
}
```
