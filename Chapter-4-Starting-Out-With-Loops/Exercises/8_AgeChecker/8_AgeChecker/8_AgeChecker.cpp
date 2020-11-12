#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "How old are you? ";
    cin >> age;
    // While loop to run in the occasion that the user inputs a non-integer value, until the input is an integer.
    while (cin.fail() || age > 120 || age <0) { // The condition here detects whether the input fits the type, in this case when it isnt an integer.
        cout << "Please enter a valid age.\nHow old are you? ";
        cin.clear(); // At this stage, cin has an error. This line clears the error flag.
        cin.ignore(128, '\n'); // This line skips 128 characters from the buffer or upon encountering a new line.
        cin >> age; // Ask for an input once again.
    }
    cout << "You are " << age << " years old.";
}