#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    double addend = 32.00;
    double multiplier = 1.800;
    char choice;
    cout << "What would you like to convert?\nc: Celsius to Fahrenheit\nf: Fahrenheit to Celsius\n\nChoice: ";
    cin >> choice;                      //Prompt and input for the user's choice.
    cout << "Enter initial value:";

    switch (tolower(choice)) {          //Lowercase the user's input so it will be a unified case.
    case 'c':
        cin >> celsius;
        fahrenheit = celsius * multiplier + addend;
        cout << celsius << "\370C is equal to " << fahrenheit << "\370F." << endl;  //'\370' used for the degree symbol.
        break;
    case 'f':
        cin >> fahrenheit;
        celsius = (fahrenheit - addend) / multiplier;
        cout << fahrenheit << "\370F is equal to " << celsius << "\370C." << endl;
        break;
    default:                            //Default case utilised for errors.
        cout << "Incorrect choice. Please enter either 'c' or 'f'.";
    }
    
    system("pause>0");
    return 0;
}