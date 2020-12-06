#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 12; i++) {
        cout << i << " times table:\n---------------" << endl;
        for (int j = 1; j <= 12; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    system("pause>0");
    return 0;
}
