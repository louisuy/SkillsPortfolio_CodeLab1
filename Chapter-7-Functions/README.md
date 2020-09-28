# Chapter 7 - Functions

* [What is a Function](#what-is-a-function)
* [Function Structure](#function-structure)
* [Writing a Simple Function](#writing-a-simple-function)
* [Invoking Functions](#invoking-functions)
* [Where do we Write Functions](#where-do-we-write-functions)
  * [Declare vs Define](#declare-vs-define)
* [Passing in Values](#passing-in-values)
* [Invoking Functions with Arguments](#invoking-functions-with-arguments)
* [Returning Values from a Function](#returning-values-from-a-function)
* [Passing by Value vs Passing by Reference](#passing-by-value-vs-passing-by-reference)
* [Passing by Value](#passing-by-value)
* [Passing by Reference](#passing-by-reference)
* [Default Parameters](#default-parameters)
* [Function Overloading](#function-overloading)

## What is a Function?

A function is a group of statements that can be bunched together to perform a particular operation. The function can be called again and again as needed.

Say we wanted to perform the following calculation several times in our program (e.g. it might form part of a maths game)

* Take some integer, inputted by the user
* Multiply it by 2
* Add 8
* Print the result to console

It would be inefficient to write the entire calculation each time we needed to use it. Instead we could create a little algorithm or function that can be called each time we need to execute the calculation.

In pseudocode, the function might look like this:

```
myCalculation(pass in the user's number){  	
    Multiply the number by 2
    Add 8
    Print to console
}
```

Don’t worry about the various components for now - we will get to them soon.

&nbsp;
&nbsp;

### We've Seen Functions Before

In CodeLab I we have referred to and used a few functions already. We just may not have realised it. Take a look at the following functions that we use in most workshop sessions:

* the main function: int main()
* the compare function from the string class: compare()
* cin.fail( ) to carry out simple error checking.

&nbsp;
&nbsp;

## Function Structure

The structure of a function is as follows

```
return_type function_name( parameter list ) {
   //body of the function
}
```

* **Return type:** specifies the type of data the function should return (e.g. int, bool, double, string etc) back to the main program. If the function does not return anything void can be used as the return type

* **Function name:** Name of the function, this can be anything but usually we specify a name that relates to the task the function performs. E.g. a function named displayMenu would be sensible for a function that displays a menu of options to the user.

* **Parameter list:** When calling a function you can pass it some values that the function can then use to perform its task. We define the parameters a function can be passed in the parameter list. We can specify multiple parameters for use in a function in a comma separated list. For each one we must specify its data type (e.g. int, double, string etc). Parameters are optional, they can be left blank.

* **Function body:** The function body is where we include our set of statements that define the functions task.

The elements of the function structure will become clearer in the forthcoming examples.

&nbsp;
&nbsp;

## Writing a Simple Function

Let’s imagine we need to write a function that helps us tune a guitar. We want to know what note each string of the guitar should be tuned to (standard tuning). In this case, it is likely that we will need to print this message a number of times throughout the program.

*Expected console output:*

```
String 6: E
String 5: A
String 4: D
String 3: G
String 2: B
String 1: E
```

Our function will contain 6 ```cout``` statements

```C++
void stringGuide(){
	cout << "String 6: E" << endl;
	cout << "String 5: A" << endl;
	cout << "String 4: D" << endl;
	cout << "String 3: G" << endl;
	cout << "String 2: B" << endl;
	cout << "String 1: E" << endl;
}
```

In this example the structure of our function is as follows

* **Return type:** we specify void as our function doesn’t return a value

* **Function name:** Name of the function, this can be anything but usually we specify a name that relates to the task the function performs. So in this example we use stringGuide(). For a function that displays a menu we might use the name displayMenu();

* **Parameter list:** When calling a function you can pass it some values that the function can then use to perform its task. In this basic example aren’t passing in any values so we leave this parameter list blank.

* **Function body:** The function body is where we include our set of statements that define the functions task. So here we have 6 output statements in order to get the expected console output

&nbsp;
&nbsp;

## Invoking Functions

Now that we have written a function for printing the note names associated with each guitar string, we need a way of invoking it. Invoking simply means that we tell the function to run. We might also refer to this as calling the function

We do this by writing the function name with ( ) next to it. So for out string guide function we’d simply write stringGuide(); in our main function to invoke the function

```C++
int main(){
	stringGuide(); // invoke the function
      return 0;
}
```

&nbsp;
&nbsp;

## Where do we Write Functions?

We need to write our function outside of the main() function. If you have multiple functions, you should place them underneath one another in a logical order.

The main function needs to know that a function exists before it is called, otherwise it will throw an error. Therefore you should place functions before the program's main function. You can however declare your function then define it later, this can help keep your code organised and keep your main function towards the top.

&nbsp;
&nbsp;

### Declare vs Define

Declaring a function refers to letting the compiler know that a function exists within the program. When declaring a function we let the compiler know the return type, the name of the function and any parameters the function takes when being invoked / called.

We can then fully define the function later on. Defining a function means we specify the full task the function will perform, so we include the function body with the code statements required for our function to perform its task.

In the stringGuide(); example above we both declared and defined our function at the same time. Below however, is an example of how we might declare our function ahead of the main, then define the function later on.

```C++
void stringGuide(); //function declaration

int main(){
	stringGuide(); //function call
      return 0;
}

void stringGuide(){ //function definition
	cout << "String 6: E" << endl;
	cout << "String 5: A" << endl;
	cout << "String 4: D" << endl;
	cout << "String 3: G" << endl;
	cout << "String 2: B" << endl;
	cout << "String 1: E" << endl;
}
```

&nbsp;
&nbsp;

## Passing in Values

To really make use of functions, we need to pass values into them. Remember our earlier myCalculation() example. For this function to perform its task we want to pass in an integer number. We can specify the values that a function can take within the parentheses of the function declaration. These are known as the function parameters. These can be named anything you like as long as it’s meaningful.

```C++
void myCalculation(int num){ //function with parameters
	num *= 2;
	num += 8;
	cout << num << endl;
}
```

Note that you have to declare them with an appropriate data type (in this example an int). You can pass as many parameters into your function as you like. Each must be delineated (separated) by a comma.

&nbsp;
&nbsp;

## Invoking Functions with Arguments

When invoking functions with parameters we can pass in the required data in the parentheses of the function call. With our ```myCalculation()``` example in the main function I ask the user to enter a number which I then assign to a variable called ```userNum```. When invoking the ```myCalculation()``` function I can pass this ```userNum``` variable to the function within the parentheses of the function invocation. This number then gets copied into the num variable of the function to perform the calculation.

```C++
void myCalculation(int num){ //function with parameters
	num *= 2;
	num += 8;
	cout << num << endl;
}
int main() {
    int userNum; // create integer variable
    cout << "Enter A Number: "; // ask user to enter a number
    cin >> userNum; //assign users input to our num variable
    myCalculation(userNum); //invoke the function and pass in userNum     
    return 0;
}
```

In this second example we have a function that multiplies two numbers and outputs the result. To do this It uses two numbers that are passed in as the function parameters (note the two integers specified in the function declaration). When invoking this function from the main program I can therefore specify the two numbers I want to multiply when invoking the function from the main program.

```C++
void multiply(int num1, int num2){
	int total = num1 * num2; // use passed in parameters
	cout << total << endl; // output the multiplication result
}

int main() {
    multiply(12, 16); //call the function and pass in two numbers
    return 0;
}
```

&nbsp;
&nbsp;

## Returning values from a function

When invoking functions, we may want to return a value back to the main() function. We return values if we want to do something with the returned value.

Let’s first of all start with a really simple example. This function returns the current year to the main() function and prints it to console from there:  

```C++
int getYear(){
    int currentYear = 2017;
    return currentYear; // function returns 2017
}

int main() {
    int returnedValue = getYear(); // invoke getYear function
    cout << returnedValue; //output the returned value   
    return 0;
}
```

There are few things to note here:

* ```void``` has been replaced by ```int``` in the ```getYear()``` function. Remember this component of a function is called the return type. When we don’t return a value from a function we use  void, however in this example we want to return an integer, so we replace void with int.

* The returned value is stored as an integer called ```returnedValue```. As normal, we need to declare this variable. You can see that ```getYear()``` is essentially replaced by the value returned by the function - so ```getYear()``` becomes 2016

&nbsp;
&nbsp;

### A More Complex Example

In this example we have a function that sums the price of two items. The items have the prices: 25.99, 11.50.

We store the price of the two items as double variables called shoes and tshirt.

The function returns the total value of the items to the main() function. The main function then compares the total to the amount of money we have - 40.00 stored in the variable myMoney - and then prints whether we can afford to buy all three items or not.

```C++
double sumItems(double item1, double item2); //declare function

int main(){
   double myMoney = 40.00;
   double shoes = 25.99;
   double tshirt = 11.50;

   double returnedTotal = sumItems(shoes, tshirt);//invoke function and pass in values

   if (returnedTotal <= myMoney){ //determine whether can afford items
       cout << "you can afford these items" << endl;
   } else {
       cout << "keep saving up" << endl;
   }
}

double sumItems(double item1, double item2){ //define function
   double total = item1 + item2; //calculate cost of items
   return total; //return total cost back to main program
}
```

Observe here that the return type of the function is a double. Also note that the total returned from the function sumItems() is stored in the variable returnedTotal which is then compared to myMoney in the if statement.

&nbsp;
&nbsp;
