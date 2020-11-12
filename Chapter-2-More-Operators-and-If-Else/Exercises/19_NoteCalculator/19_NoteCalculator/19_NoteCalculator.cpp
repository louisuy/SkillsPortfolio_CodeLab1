#include <iostream>
using namespace std;

void calculator(int amt)
{
    int notes[8] = { 500, 100, 50, 20, 10, 5, 2, 1 };
    int numberOfNotes[8] = { 0 };

    for (int i = 0; i < 8; i++) {                   //Iteration through each denomination of currency.
        if (amt >= notes[i]) {                      //Checking whether the total amount is bigger than each note.
            numberOfNotes[i] = amt / notes[i];      //Checking the number of the notes for the total amount.
            amt -= (numberOfNotes[i] * notes[i]);   //Decreasing the amount by the previous denomination.
        }
    }
    for (int i = 0; i < 8; i++) {                   //Display to be run after the divisions.
        cout << notes[i] << ": "<< numberOfNotes[i] << endl; //Printing every element and corresponding count.
    }
}

int main() {
    int money;
    cout << "How much? ";                           //Prompt and input the initial amount.
    cin >> money;

    calculator(money);                              //Feeding the input value into the arguments of the function.

    system("pause>0");
    return 0;
}
