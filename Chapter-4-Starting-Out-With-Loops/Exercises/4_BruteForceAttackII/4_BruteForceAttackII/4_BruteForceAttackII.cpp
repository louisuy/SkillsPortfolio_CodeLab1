#include <iostream>
using namespace std;

int main()
{
    int passcode = 246;
    int count = 1;
    int userpass;
    cout << "Enter 3-digit passcode: ";
    cin >> userpass;
    while (userpass != passcode) {
        cout << "Incorrect passcode. You have " << 5-count << " attempts remaining.\nEnter 3-digit passcode: ";
        cin >> userpass;
        count++;
        if (userpass == passcode) {
            cout << "Passcode match found!";
            break;
        }
        else if (count == 5) {
            cout << "You have exceeded 5 attempts.\nAuthorities have been alerted.";
            break;
        }
    }
}