#include <iostream>
using namespace std;

int main() 
{
    // Initialising of most of the variables as float.
    float cash, cost, totalCost;
    // By using int for qty, we disregard the decimal value.
    int qty;
    cash = 50;
    cost = 6;
    qty = cash / cost;
    totalCost = qty * cost;

    // Output statements.
    cout << "She is able to buy " << qty << " USB sticks." << endl;
    // The use of the hexadecimal 9C is to output a character with code 156, which is the GBP Symbol.
    cout << "She has spent \x9C" << totalCost << endl;
    cout << "She has a change of \x9C" << cash - totalCost << endl;

    system("pause>0");
    return 0;
}