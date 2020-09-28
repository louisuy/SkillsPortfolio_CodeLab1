# Chapter 5 - The For Loop

* [The For Loop](#the-for-loop)
  * [While Loops vs For Loops](#while-loops-vs=for-loops)
* [Nested For Loops](#nested-for-loops)
  * [Example 1: Simple Pattern](#example-1-simple-pattern)
  * [Example 2: A More Complex Pattern](#example-2-a-more-complex-pattern)


## The For Loop

A for loop is very similar to a while loop. The difference is subtle.

You tend to use while loops when you don’t know how many iterations of the loop there is going to be. For example, if you are writing a quiz program you might not know how many times a player will get a question wrong.

You use for loops when you do know how many iterations of the loop there need to be. For example, if you are writing a program that prints every character in the word “Computing”, you know that you will need to execute the loop 9 times.

&nbsp;
&nbsp;

### While Loops vs For Loops

The following code snippets show how a while loop that counts from 0 to 10 compares to a for loop that counts from 0 to 10.  

*While Loop*
```C++
int count = 0;
while(count <= 10){
  cout << count << endl;
  count++
}
```

*For Loop*
```C++
for(int count = 0; count <= 10; count++){
  cout << count << endl;
}
```

You can see that the while loop and the for loop (in this case) have very similar components. They both contain:

* *Initialisation:* A variable to store the current count. This is the starting point of the loop  
  ```int count = 0```

* *Condition:* The condition in which the loop will keep iterating                                                 
  ```count <= 10```

* *Incrementation:* How much the variable count will increase on each iteration of the loop                          
  ```count++```   

The difference is that the for loop places all these components within the loops header. These three components are separated by a semicolon when writing the for loop.

&nbsp;
&nbsp;

## Nested For loops

A nested loop is a (inner) loop that appears in the loop body of another (outer) loop, much like nested IF statements that we saw in chapter 2.

&nbsp;
&nbsp;

### Example 1: Simple Pattern

The below program prints the following pattern to console:

```
*****
*****
*****
*****
*****
```

```C++
for (int i=1; i<=5; i++) {  //execute the inner loop 5 times  
    for (int j=1; j<=5; j++) {
        cout << "\*" << endl;   //print 5 stars
    }
    cout << endl; //print to a new console line
}
```

Above we have one for loop nested within another for loop.

The inner loop prints to the console 5 stars in a row. The outer loop executes the inner loop 5 times, each time printing to a new console line.

Note that we have used the letters ```i``` and ```j``` to keep track of what each loops current ‘count’ is. It is not crucial that you use ```i``` and ```j```, however these variables are typically used in loops.

&nbsp;
&nbsp;

### Example 2: A More Complex Pattern

We can modify the above example so that the following pattern is printed:

```
*****
****
***
**
*
```

```C++
for (int i=1; i<=5; i++) {  //execute the inner loop 5 times  
    for (int j=i; j<=5; j++) {
        cout << "\*" << endl;   //print 5 stars
    }
    cout << endl; //print to a new console line
}
```

The difference between this program and the one seen in Example 1 is subtle. Look at the inner for loop and you will see that the initialisation component is not ```int j = 1;``` but instead ```int j = i;```  It utilises the ```i``` variable from the outer loop. This means that on the first iteration of the loop the inner loop begins at ```int j = 1;``` but on the second iteration ```int j = 2;``` and on the third iteration ```int j = 3``` and so on. Because the starting point for the inner for loop increases by ```+1``` on each iteration of the outer while loop, the number of printed stars will also decrease by ```-1``` on each iteration.
