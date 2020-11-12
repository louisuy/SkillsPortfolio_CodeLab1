#include <iostream>
using namespace std;

int main()
{
    float height;
    int age;
    cout << "Enter your height (in cm): ";          //Prompt user to input height in cm.
    cin >> height;
    height /= 100;
    cout << "How old are you?:          ";          //Prompt user to input age.
    cin >> age;

    if (height > 0.6 && age >= 5) {                 //Evaluate both data whether user is viable.
        cout << "You may ride this attraction.";
    }
    else {
        cout << "You may NOT ride this attraction."; 
    }

    system("pause>0");
    return 0;
}
