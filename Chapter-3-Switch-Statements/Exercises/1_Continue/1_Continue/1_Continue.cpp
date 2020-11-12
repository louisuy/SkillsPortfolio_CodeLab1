#include <iostream>
using namespace std;

int main() {
    cout << "Would you like to continue? (Y/N): ";  //ask for input
    char choice;                                    //variable for user answer;
    cin >> choice;                                  //get user input

    switch (toupper(choice)) {                      //evaluate expression
        case 'Y':                                   //case for Y
            cout << "Resuming game...";             //cout message if user enters Y
            break;                                  //break to end case
        case 'N':                                   //case for N
            cout << "Game over.";                   //cout message if user enters N
            break;
        default:                                    //default case
            cout << "Choice unrecognised.";         //default message if neither Y or N entered
    }
    return 0;
}