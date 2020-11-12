#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    double addend = 32.00;
    double multiplier = 1.800;
    int choice;
    cout << "Hello, please enter an option:\n'1': To convert from Fahrenheit to Celsius\n'2': To convert from Celsius to Fahrenheit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    while ((choice != 1) && (choice != 2)) { 
        cout << "Please enter either '1' or '2'.\nEnter choice: ";
        cin >> choice;          // Ask for an input once again.
    }

    if (choice == 1) {
        cout << "Enter initial value:";
        cin >> celsius;
        fahrenheit = celsius * multiplier + addend;
        cout << celsius << "\370C is equal to " << fahrenheit << "\370F." << endl;
    }
    else if (choice == 2) {
        cout << "Enter initial value:";
        cin >> fahrenheit;
        celsius = (fahrenheit - addend) / multiplier;
        cout << fahrenheit << "\370F is equal to " << celsius << "\370C.";
    }

    system("pause>0");
    return 0;
}