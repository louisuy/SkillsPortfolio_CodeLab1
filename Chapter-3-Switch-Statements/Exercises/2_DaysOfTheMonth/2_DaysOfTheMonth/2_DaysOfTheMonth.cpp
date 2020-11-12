#include <iostream>
using namespace std;

int main() {
    int choice, year;
    cout << "Choose a month." << endl
        << "1:  January\n"
        << "2:  February\n"
        << "3:  March\n"
        << "4:  April\n"
        << "5:  May\n"
        << "6:  June\n"
        << "7:  July\n"
        << "8:  August\n"
        << "9:  September\n"
        << "10: October\n"
        << "11: November\n"
        << "12: December\n"
        << "\nChoice: ";
    cin >> choice;

    switch (choice) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        cout << "There are 31 days in this month.";
        break;
    case 4: case 6: case 9: case 11:
        cout << "There are 30 days in this month.";
        break;
    case 2:
        cout << "For which year? ";
        cin >> year;
        year %= 4;
        switch (year) {
        case 0:
            cout << "There are 29 days in this month.";
            break;
        default:
            cout << "There are 28 days in this month.";
        }
        break;
    default:
        cout << "Invalid choice.";
    }
    system("pause>0");
    return 0;
}