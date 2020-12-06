#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    
    while (true) {
        cout << "Enter any number other than 5: ";
        cin >> num;
        if (num == 5) {
            cout << "Hey! you weren't supposed to enter 5!";
            break;
        }
    }
    return 0;
}
