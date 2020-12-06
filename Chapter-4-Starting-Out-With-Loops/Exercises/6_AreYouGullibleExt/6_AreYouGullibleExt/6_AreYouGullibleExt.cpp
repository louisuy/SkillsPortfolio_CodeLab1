#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int num = 0;

    while (true) {
        cout << "Enter any number other than " << count << ": ";
        cin >> num;
        if (num == count) {
            cout << "Hey! you weren't supposed to enter " << count << "!";
            break;
        }
        else if ((count == 10) && (num != count)) {
            cout << "Wow, you're more patient than I am, you win.";
            break;
        }
        count++;
    }
    return 0;
}
