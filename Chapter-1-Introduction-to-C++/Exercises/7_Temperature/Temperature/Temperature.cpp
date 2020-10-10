#include <iostream>
using namespace std;

int main()
{
	float f, c, fcAddend, fcDivisor;
	fcAddend = 32;
	fcDivisor = 1 / 1.8;

	cout << "Enter temperature in fahrenheit: ";
	cin >> f;

	c = (f - fcAddend) * fcDivisor;

	cout << f << "\370F is equal to " << c << "\370C." << endl;

	system("pause>0");
}