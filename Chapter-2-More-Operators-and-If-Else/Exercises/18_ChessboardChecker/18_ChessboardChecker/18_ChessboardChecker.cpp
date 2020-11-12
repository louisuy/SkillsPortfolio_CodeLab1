#include <iostream>
using namespace std;

int main()
{
	char position[3];
	cout << "Enter the coordinates: ";//Categorise the 'odd' letters by specifying them in the conditions.
	cin.getline(position, 3);

	//Categorise the 'odd' letters by specifying them in the conditions.
	if (position[0] == 'a' || position[0] == 'c' || position[0] == 'e' || position[0] == 'g') {
		if (position[1] == '1' || position[1] == '3' || position[1] == '5' || position[1] == '7')
			cout << "Black square";	//Odd numbers and odd letters would get black squares.
		else
			cout << "White square";
	}
	else { //A reverse of the previous code.
		if (position[1] == '1' || position[1] == '3' || position[1] == '5' || position[1] == '7')
			cout << "White square";
		else
			cout << "Black square";
	}
    system("pause>0");
    return 0;
}