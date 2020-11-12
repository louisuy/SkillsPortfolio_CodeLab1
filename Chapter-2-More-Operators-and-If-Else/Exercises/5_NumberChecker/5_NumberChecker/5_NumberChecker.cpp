#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number to be checked: "; //Prompt user to enter a number.
    cin >> num;                                 //Assignation to num.
    if (num > 0) {                              //Condition for non-zero positive nums.
        cout << num << " is a positive number.";
    }
    else if (num < 0) {                         //Condition for negative nums.
        cout << num << " is a negative number.";
    }
    else {                                      //Else number would have been 0.
        cout << num << " is a zero.";
    }
    system("pause>0");
    return 0;
}
