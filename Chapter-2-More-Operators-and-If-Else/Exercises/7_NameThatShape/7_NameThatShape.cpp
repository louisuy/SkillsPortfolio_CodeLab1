#include <iostream>
using namespace std;

int main() {
    int sides;
    cout << "How many sides are in the shape? (3-10:) ";
    cin >> sides;

    //Establish if and elseif for every side case.
    if (sides == 3)         cout << "That is a triangle.";
    else if (sides == 4)  { cout << "That is a quadrilateral."; }
    else if (sides == 5)  { cout << "That is a pentagon."; }
    else if (sides == 6)  { cout << "That is a hexagon."; }
    else if (sides == 7)  { cout << "That is a heptagon."; }
    else if (sides == 8)  { cout << "That is a ocatagon."; }
    else if (sides == 9)  { cout << "That is a nonagon."; }
    else if (sides == 10) { cout << "That is a decagon."; }
    else { cout << "Error. Number of sides outside (3-10) range."; } //Error for input out of range.

    system("pause>0");
    return 0;
}
