#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    cout << "Pick a calculation" << endl;
    cout << "1: Addition\n2: Subtraction\n3: Multiplication\n4: Division " << endl;
    int input;
    cin >> input;
    switch (input) {
    case 1:
        cout << (a + b) << endl;
        break;
    case 2:
        cout << (a - b) << endl;
        break;
    case 3:
        cout << (a * b) << endl;
        break;
    case 4:
        cout << (a / b) << endl;
        break;
    default:
        cout << "Invalid Input" << endl;
    }

    system("pause>0");
    return 0;
}
