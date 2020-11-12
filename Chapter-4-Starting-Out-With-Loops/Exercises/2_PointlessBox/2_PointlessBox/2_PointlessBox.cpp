#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    
    while (num == 1 || num == 2) {
        cout << "Enter number: ";
        cin >> num;
        if (num != 1 && num != 2) { //Logical and to exclude this error message for when it IS 1 or 2.
            cout << "Number entered is neither 1 or 2.";
            break;                  //Break for when the input is NEITHER 1 or 2.
        }
        cout << "You have entered: " << num << endl;
        cin.clear();                //Clearing the cin to allow for a new cin.
        cin.ignore(128, '\n');
    }
}
