#include <iostream>
using namespace std;

int main()
{
    // For loop to print each value between 20 to 24.
    for (int count = 20; count <= 24; count++) {
        cout << count << " - ";
        // Even checker within the loop so it checks for every iteration.
        if (count % 2 == 0) {
            cout << "even" << endl;
        }
        else {
            cout << "odd" << endl;
        }
    }
    system("pause>0");
    return 0;
}

