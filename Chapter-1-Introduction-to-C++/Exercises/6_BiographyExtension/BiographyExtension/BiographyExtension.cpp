#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    // Initialising and declaring variables without hardcoding the details.
    string name, hometown;
    int age;

    // Output prompts and ask for an input.
    cout << "What is your name? ";
    getline(cin, name); // Using getline allows for the user to input multiple names. (First name, surname, etc.)

    cout << "Where are you from? ";
    getline(cin, hometown); // Similarly, getline here allows the user to input their hometown with 'City' or any other secondary word.

    cout << "How old are you? ";
    cin >> age;
    // While loop to run in the occasion that the user inputs a non-integer value, until the input is an integer.
    while (cin.fail()) { // The condition here detects whether the input fits the type, in this case when it isnt an integer.
        cout << "Please enter only an integer.\nHow old are you? ";
        cin.clear(); // At this stage, cin has an error. This line clears the error flag.
        cin.ignore(128, '\n'); // This line skips 128 characters from the buffer or upon encountering a new line.
        cin >> age; // Ask for an input once again.
    }

    // Print the acquired inputs with corresponding labels.
    cout << endl
        << "Name: " << name << endl
        << "Hometown: " << hometown << endl
        << "Age: " << age << endl;

    system("pause > 0");
    return 0;
}