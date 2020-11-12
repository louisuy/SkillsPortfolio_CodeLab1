#include <iostream>
using namespace std;

void evaluator(int money) //Callable function.
{
    int gamesBuyable, shortage; //Initialise the variables to be used.
    if (money >= 25) { //Condition for when money CAN buy a game (minimum of 25)
        cout << "Buy computer game." << endl;
        money -= 25; //Decrementing the money of the price of one game.
        cout << "You have " << money << " money left." << endl;
        if (money >= 25) { //Recheck for change whether it CAN afford a game.
            gamesBuyable = money/25; //Division to check the number of games buyable with the change.
            cout << "You can buy " << gamesBuyable << " more games." << endl;
            money -= (gamesBuyable * 25); //Operation for the money left if user would spend the change all on games.
            cout << "You would have " << money << " money left." << endl;
        }
        else {
            shortage = 25 - money; //Operation to specify the remaining money needed to buy one more game.
            cout << "You need to save up at least " << shortage << " to buy another game." << endl;
        }
    }
    else {
        shortage = 25 - money; //Operation to specify the remaining money needed to buy one more game.
        cout << "You need to save up at least " << shortage << " to buy another game." << endl;
    }
}

int main()
{
    int money;
    cout << "How much money do you have? "; //Prompt the user to input the value of how much money the user has.
    cin >> money; //User input value.
    
    evaluator(money); //Call function with the user input value.

    system("pause>0");
    return 0;
}
