#include <iostream>
using namespace std;

int main()
{
    int passcode = 246;
    int userpass;
    cout << "Enter 3-digit passcode: ";
    cin >> userpass;
    while (userpass != passcode) {
        cout << "Incorrect passcode.\nEnter 3-digit passcode: ";
        cin >> userpass;
        if (userpass == passcode) {
            cout << "Passcode match found!";
            break;
        }
    }
}