#include <iostream>
using namespace std;

int main()
{
    for (int count = 0; count <= 50; count++) {
        cout << count << endl;
    }
    for (int count = 50; count >= 0; count--) {
        cout << count << endl;
    }
    for (int count = 30; count <= 50; count++) {
        cout << count << endl;
    }
    for (int count = 50; count >= 10; count -= 2) {
        cout << count << endl;
    }
    for (int count = 100; count <= 200; count += 5) {
        cout << count << endl;
    }
    system("pause>0");
    return 0;
}
