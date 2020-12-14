#include <iostream>
using namespace std;

int main()
{
    string vehicles[5] = { "Car", "Train", "Tractor", "Skiff", "Tank" };

    //Print index 3 to console
    cout << vehicles[3] << endl;
    //Print index 0 to console
    cout << vehicles[0] << endl;
    //Print “Tractor Tank” to console using array indexes
    cout << vehicles[2] << " " << vehicles[4] << endl;
    //Print “Car Skiff Train” to console using array indexes
    cout << vehicles[0] << " " << vehicles[3] << " " << vehicles[1] << endl;

    system("pause>0");
    return 0;
}
