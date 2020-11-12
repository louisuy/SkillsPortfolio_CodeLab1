#include <iostream>
using namespace std;

int main()
{
   int currentTime = 3;                 //declare and initialise variable for time
    if (currentTime > 12) {             //check if 'currentTime' is greater than 12
        cout << "It's PM." << endl;     //output PM message
    }
    else {                              //else 'currentTime' must be less than 12
        cout << "It's AM." << endl;     //output AM message
    }

    system("pause>0");
    return 0;
}
