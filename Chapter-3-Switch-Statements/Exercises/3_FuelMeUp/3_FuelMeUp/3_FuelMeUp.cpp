#include <iostream>
using namespace std;

int main()
{
    char choice;
    int litres;
    double charge, dPrice, pPrice;
    //Prices sourced from local rates.
    dPrice = 2.06;
    pPrice = 1.80;

    cout << "Fuel type:\nP: Petrol\nD: Diesel\n\nChoice: " ;    //Prompt and input the user's choice.
    cin >> choice;
    choice = toupper(choice);                                   //Toupper to unify the input value.

    cout << "Quantity (in litres): ";                           //Prompt and input the user's value.
    cin >> litres;

    if (litres <= 0) {
        cout << "Fuel not needed." << endl;
    }
    else {
        switch (choice) {
        case 'P':
            charge = litres * pPrice;
            cout << "The total price for petrol is " << charge << "AED." << endl;
            break;
        case 'D':
            charge = litres * dPrice;
            cout << "The total price for diesel is " << charge << "AED." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    }

    system("pause>0");
    return 0;
}