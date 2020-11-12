#include <iostream>
using namespace std;

int main() {
    int num = 108; //declare and initalise variable

    while (num > 0) { //while conditional check
        //code to output then decrease number
        cout << num << endl;
        num -= 9;
    }
    cin.get(); //keeps console window open in Visual Studio
    return 0;
}