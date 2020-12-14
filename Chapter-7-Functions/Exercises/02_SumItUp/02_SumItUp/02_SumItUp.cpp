#include <iostream>
using namespace std;

int sumitup(int a, int b, int c) {
    return (a + b + c);
}

int main()
{
    int a, b, c;
    cout << "Sum It Up!\nEnter your first number: ";
    cin >> a;
    cout << "Enter your second number: ";
    cin >> b;
    cout << "Enter your third number: ";
    cin >> c;
    int sum = sumitup(a, b, c);
    cout << "The sum of those three numbers are: " << sum << endl;
    system("pause>0");
    return 0;
}