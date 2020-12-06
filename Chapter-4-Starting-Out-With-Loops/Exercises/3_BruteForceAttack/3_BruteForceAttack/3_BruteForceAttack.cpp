#include <iostream>
using namespace std;

int main()
{
    int passcode = 246;
    int userpass;
    cout << "Enter 3-digit passcode: ";
    cin >> userpass;
    while (true) {
        if (userpass != passcode) {
            cout << "Incorrect passcode.\nEnter 3-digit passcode: ";
            cin >> userpass;
        }
        else if (userpass == passcode) {
            cout << "Passcode match found!";
            break;
        }
    }
    return 0;
}