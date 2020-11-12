#include <iostream>
using namespace std;

int main()
{
    int money = 25;                                             //Initialise hard-coded initial cash.
    if (money >= 25) {                                          //Check for when money is 25 or more.
        cout << "Buy computer game." << endl;
        money -= 25;
        cout << "You would have " << money << " money left.";   //Operation for money left over.
    }
    else {
        cout << "“I need to save up more cash!";                //Output for if money is NOT 25 or more.
    }
    system("pause>0");
    return 0;
}
