#include <iostream>
using namespace std;

int main()
{
    float sideA, sideB, sideC;
    //Prompt and input each side of the triangle.
    cout << "Enter length of Side A: ";
    cin >> sideA;
    cout << "Enter length of Side B: ";
    cin >> sideB;
    cout << "Enter length of Side C: ";
    cin >> sideC;

    //Evaluate whether shape IS a triangle in the first place.
    if ((sideA + sideB) > sideC && (sideA + sideC) > sideB && (sideB + sideC) > sideA) {
        //Check for all equal sides. (Hence, the use of logical and)
        if (sideA == sideB && sideB == sideC && sideA == sideC) {
            cout << "This is an equilateral triangle.";
        }
        //Check for equal pairs. (Hence, the use of logical or)
        else if (sideA == sideB || sideB == sideC || sideA == sideC) {
            cout << "This is an isosceles triangle.";
        }
        else {
            cout << "This is a scalene triangle.";
        }
    }
    //Special condition of when two other sides are equal to the third side.
    else if ((sideA + sideB) == sideC || (sideA + sideC) == sideB || (sideB + sideC) == sideA) {
        cout << "This is a straight line.";
    }
    else {
        cout << "This is an invalid triangle.";
    }

    system("pause>0");
    return 0;
}
