#include <iostream>
using namespace std;

int max_two(int x, int y) {
    if (x > y) {
        return x;
    }
    else if (y > x) {
        return y;
    }
    else {
        cout << "Max could not be defined, as the two values are equal.";
        return 0;
    }
}

int main()
{
    int x, y;
    cout << "Find The Max!\nEnter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    int max = max_two(x, y);
    while (max != 0) {
        cout << "Max: " << max << endl;
    }
    system("pause>0");
    return 0;
}
