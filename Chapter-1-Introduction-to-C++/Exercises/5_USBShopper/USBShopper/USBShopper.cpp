#include <iostream>
using namespace std;

int main() 
{
    float cash, cost, totalCost;
    int qty;
    cash = 50;
    cost = 6;
    qty = cash / cost;
    totalCost = qty * cost;


    cout << "She is able to buy " << qty << " USB sticks." << endl;
    cout << "She has spent \x9C" << totalCost << endl;
    cout << "She has a change of \x9C" << cash - totalCost << endl;

    system("pause>0");
}