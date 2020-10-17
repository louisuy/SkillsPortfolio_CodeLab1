#include <iostream>
using namespace std;

int main()
{
    // Initialising and declaring variables without hardcoding the details.
    string name, hometown;
    int age;

    // Output prompts and ask for an input.
    cout<< "What is your name? ";
    cin >> name;

    cout<< "Where are you from? ";
    cin >> hometown;

    cout<< "How old are you? ";
    cin >> age;
    
    // Print the acquired inputs with corresponding labels.
    cout<< endl 
        << "Name: " << name << endl
        << "Hometown: " << hometown << endl
        << "Age: " << age << endl;

    system("pause > 0");
    return 0;
}