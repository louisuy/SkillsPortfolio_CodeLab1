#include <iostream>
using namespace std;

int main()
{
    int lateMins, cash;
    cout << "How long would your friend be late? ";                 //Prompt user input for late time.
    cin >> lateMins;

    if (lateMins >= 15) {                                           //Condition for past 15 mins.
        cout << "How much money do you have? ";                     //Prompt user for cash query.
        cin >> cash;
        if (cash > 3) {
            cout << "Go buy a coffee!";                             //Condition if able to buy coffee.
        }
        else {
            cout << "Go take a walk around town!";
        }
    }
    else {
        cout << " Sit in the park and wait (probably grumbling).";
    }
    system("pause>0");
    return 0;
}
