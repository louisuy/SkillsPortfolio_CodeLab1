#include <iostream>
using namespace std;

int main()
{
	// Initialising of the variables as float.
	float f, c, fcAddend, fcDivisor;
	// Declaring the constants.
	fcAddend = 32;
	fcDivisor = 1 / 1.8; // Using a fraction to have a higher degree of accuracy, and still using the expression provided.
	// Prompts for input.
	cout << "Enter temperature in fahrenheit: ";
	cin >> f;

	c = (f - fcAddend) * fcDivisor; // An expression using the declared constants and the value input.

	cout << f << "\370F is equal to " << c << "\370C." << endl; //"\370" is used to display the degree symbol.

	system("pause>0");
	return 0;
}