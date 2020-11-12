#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";             //Promput for user input.
    cin >> x;                               //Assignation to 'x'.
    while (cin.fail()) {                    //Check whether input fits the var type.
        cout << "Please enter only an integer.\nEnter a number: ";
        cin.clear();                        //This line clears the error flag.
        cin.ignore(128, '\n');              //Ignore 128 chars from the buffer or upon encountering a new line.
        cin >> x;                           //Ask for an input once again.
    }

    if (x % 2 == 0)                         //Using mod of division with 2 to evaluate if it is even.
        cout << x << " is an even number.";
    else
        cout << x << " is an odd number.";

    system("pause>0");
    return 0;
}
