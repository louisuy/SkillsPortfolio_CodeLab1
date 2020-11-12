#include <iostream>
using namespace std;

int main()
{
    int purchPrice, salePrice, diff;            //Initialise integer variables.
    cout << "Purchase Price: ";                 //Prompt and assign user values.
    cin >> purchPrice;
    cout << "Sale Price:     ";
    cin >> salePrice;

    if (salePrice < purchPrice) {               //Compare to know whether loss or gain before calculation.
        diff = purchPrice - salePrice;          //Difference after evaluation so no negatives.
        cout << "Loss =         \x9C" << diff;  //'\x9C' to output '£' symbol to console.
    }
    else if (salePrice >= purchPrice) {         //Equal included as "Profit of £0" sounds better than the counterpart.
        diff = salePrice - purchPrice;
        cout << "Profit =       \x9C" << diff;
    }


    system("pause>0");
    return 0;
}
