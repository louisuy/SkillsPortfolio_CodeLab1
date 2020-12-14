#include <iostream>
using namespace std;

int main()
{
    //Declaration of an:
    //array of characters with 26 elements
    char alphabet[26];
    //array of integers with 10 elements
    int integers[10];
    //array of strings with 4 elements
    string words[4];
    //array of decimal numbers with 18 elements
    float decimals[18];
    //Declare and initialise (not using the shorthand)
    //1, 2, 3, 4, 5, 6, 7, 8
    int firstEight[8];
    firstEight[0] = 1;
    firstEight[1] = 2;
    firstEight[2] = 3;
    firstEight[3] = 4;
    firstEight[4] = 5;
    firstEight[5] = 6;
    firstEight[6] = 7;
    firstEight[7] = 8;
    //“Hello”, “Bye”
    string greetings[2];
    greetings[0] = "Hello";
    greetings[1] = "Bye";
    //‘A’, ‘B’, ‘C’
    char letters[3];
    letters[0] = 'A';
    letters[1] = 'B';
    letters[2] = 'C';
    //1.0, 2.0, 3.0, 4.0, 5.0
    float five[5];
    five[0] = 1.0;
    five[1] = 2.0;
    five[2] = 3.0;
    five[3] = 4.0;
    five[4] = 5.0;
    //10, 20, 30, 40, 50, 60
    int tens[6];
    tens[0] = 10;
    tens[1] = 20;
    tens[2] = 30;
    tens[3] = 40;
    tens[4] = 50;
    tens[5] = 60;
    //Using shorthand.
    //“”, “a”, “aa”, “aaa”
    string ace[4] = { "", "a", "aa", "aaa" };
    //1, 10, 100, 1000, 10000
    int baseTen[5] = { 1, 10, 100, 1000, 10000 };
    //true, false, false, true
    bool alternate[4] = { true, false, false, true };
    //5.6, 1.8, 4.34, 7.65
    float randomDecimals[4] = { 5.6, 1.8, 4.34, 7.65 };

    system("pause>0");
    return 0;
}