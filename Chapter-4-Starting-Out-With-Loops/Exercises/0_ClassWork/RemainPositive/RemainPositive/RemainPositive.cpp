#include <iostream>
using namespace std;

int main()
{
    float myNum = 20;

    while (myNum > 0) {
        cout << myNum << endl;
        myNum -= 0.5;
    }

    return 0;
}