#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r, A, C, pi;
    pi = 3.14;
    cout << "Enter radius: "; //Display prompt to user.
    cin >> r; //Assign the input data to variable 'r'.

    A = pi * r * r; //Calculation of area: pi*r^2. Note: C++ does not have an exponent operator.
    C = 2 * pi * r; //Calculation of circumference: 2pi*r.

    cout << "The circle of radius " << r << " has an:\n"
        << "Area of: " << A << endl
        << "Circumference of: " << C << endl;

    system("pause>0");
    system("pause>0");
}
