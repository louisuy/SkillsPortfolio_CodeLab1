#include <iostream>
using namespace std;

int main()
{
    float age, newAge;

    cout << "Please enter your age: ";                          //Prompt and input for user age.
    cin >> age;

    if (age <= 0) {                                             //Invalidate zero and negative inputs.
        cout << "Invalid Input." << endl;
    }
    else if (age <= 2) {
        newAge = 5.25 * age;                                    //If first two years are 10.5 a year would be 5.25.
        cout << "Your age in dog years is: " << newAge << endl;
    }
    else {
        newAge = 10.5 + ((age-2) * 4);                          //Add 10.5 to account for the first 2 years and multiply the rest by 4
        cout << "Your age in dog years is: " << newAge << endl;
    }

    system("pause > 0");
    return 0;
}