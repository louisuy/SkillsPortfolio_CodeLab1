#include <iostream>
#include <string>
using namespace std;

// Simple function to avoid redundancy for enforcing input validation.
double entryForm(string promptText) {
    double number;
    cout << promptText;
    cin >> number;
    while (cin.fail()) {        // In the ocassion that the user enters a non-integer the cin will fail.
        cout << "Please enter only numbers.\n" << promptText;
        cin.clear();            // This line will clear the error flag from the non-integer input.
        cin.ignore(128, '\n');  // This line will ignore 128 characters or upon encountering a new line.
        cin >> number;          // Casting the input to measurement.
    }
    return number;
}

double add(double a, double b) {
    return (a + b);
}

double subtract(double a, double b) {
    return (a - b);
}

double multiply(double a, double b) {
    return (a * b);
}

double divide(double a, double b) {
    return (a / b);
}

// Calculator as a separate callable function so it can be re called.
void calculator() {
    int operation;
    cout << "Select operation:" << endl;
    cout << "1: Addition (+)" << endl;
    cout << "2: Subtraction (-)" << endl;
    cout << "3: Multiplication (*)" << endl;
    cout << "4: Division (/)" << endl;
    cout << "Enter choice: ";
    cin >> operation;

    if (operation >= 1 && operation <= 4) {
        double a = entryForm("Enter number 1: ");
        double b = entryForm("Enter number 2: ");

        cout << endl;
        switch (operation) {
            case 1:
                cout << a << " + " << b << " = " << add(a, b) << endl;
                break;
            case 2:
                cout << a << " - " << b << " = " << subtract(a, b) << endl;
                break;
            case 3:
                cout << a << " * " << b << " = " << multiply(a, b) << endl;
                break;
            case 4:
                cout << a << " / " << b << " = " << divide(a, b) << endl;
                break;
        }
    }
    else {
        cout << "The chosen operation is invalid, please try again." << endl;
    }
}

int main()
{
    // Declare a character which will be used to determine whether the user would want to rerun the program.
    char repeat = 'Y';
    // While looop for when user would want to rerun a calculation.
    while (repeat == 'y' || repeat == 'Y') {
        calculator();
        cout << "\nCalculate again? (Y/N) ";
        cin >> repeat;
        system("cls"); // Clearing the screen so that the user does not get confused with the previous calculations.
    }
    // If the user enters 'n' the program will not call the calculator function and show a message.
    if (repeat != 'y' && repeat != 'Y') {
        cout << "Thank you for using this program! (c) Anthony Bon Louis Uy Cubillas, 2020." << endl;
    }
    system("pause>0");
    return 0;
}