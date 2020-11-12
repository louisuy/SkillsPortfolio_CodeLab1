#include <iostream>
#include <string>
using namespace std;

int main() {
    string ansOne, reply;
    ansOne = "Paris";

    cout << "What is the capital of France?" << endl;   //Prompt for quiz answer.
    cin >> reply;

    if (reply == ansOne) {                              //Condition check if it is equal to correct answer.
        cout << "Your answer is correct. Well done!" << endl;
    }
    else {
        cout << "That answer is incorrect." << endl;
    }

    return 0;
}