#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //An array and a for loop to print each letter of the alphabet.
    char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    for (int i = 0; i <= 25; i++) {
        cout << alphabet[i];
    }
    cout << endl;
 
    //Prints only the second half of the alphabet.
    for (int i = 0; i <= 12; i++) {
        cout << alphabet[i];
    }
    cout << endl;
    //A for loop to print the following array in reverse order 1, 3, 5, 7, 9.
    int odd[5] = { 1, 3, 5, 7, 9 };
    for (int i = 4; i >= 0; i--) {
        cout << odd[i];
    }
    cout << endl;

    //10, 15, 25, 35, 50, 75. Use a for loop and some maths to calculate the average of these values.
    int tenSeventyFive[6] = { 10, 15, 25, 35, 50, 75 };
    int arrLength = sizeof tenSeventyFive / sizeof tenSeventyFive[0];
    int sum{};
    for (int i = 0; i <= 5; i++) {
        sum += tenSeventyFive[i];
    }
    int avg = sum / arrLength;
    cout << avg << endl;

    //Calculates the average temperature for the past 7 days, these temperatures should be entered by the user.
    float temp[7];
    float tempSum{};
    for (int i = 1; i <= 7; i++) {
        cout << "Temperature for Day " << i << " (in \370C): ";
        cin >> temp[i - 1];
        tempSum += temp[i - 1];
    }
    float tempAvg = tempSum / 7;
    cout << tempAvg << "\370C" << endl;

    //Prints out the highest value of a following array values : 6.5, 1.3, 10.9, 7.5, 8.1, 9.9, 9.3
    float upperBound[7] = { 6.5, 1.3, 10.9, 7.5, 8.1, 9.9, 9.3 };
    cout << *max_element(upperBound, upperBound + 6) << endl;

    //Prints out the lowest value of a following array values : 10, 88, 4, 21, 345, 99, 17
    int lowerBound[7] = { 10, 88, 4, 21, 345, 99, 17 };
    cout << *min_element(lowerBound, lowerBound + 6) << endl;

    //Assigns all numbers between 0 and 100 to an array using a for loop.
    int firstHundred[101];
    for (int i = 0; i <= 100; i++) {
        firstHundred[i] = i;
    }
    //Then using another for loop, iterates through the array and print only the odd numbers.
    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) {}
        else {
            cout << i << ' ';
        }
    }
    system("pause>0");
    return 0;
}