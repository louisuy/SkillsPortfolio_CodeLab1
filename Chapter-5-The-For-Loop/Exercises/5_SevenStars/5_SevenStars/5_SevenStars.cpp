#include <iostream>
using namespace std;

int main()
{
    // Two loops, one to set up a new line.
    for (int i = 1; i <= 7; i++) {
        // Another for each row printing 7 stars.
        for (int j = 1; j <= 7; j++) {
            cout << "*";
        }
        cout << endl;
    }
    system("pause>0");
    return 0;
}
