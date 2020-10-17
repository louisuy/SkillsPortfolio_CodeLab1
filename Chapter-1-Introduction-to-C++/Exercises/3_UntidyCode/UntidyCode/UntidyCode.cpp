#include <iostream>
#include <string>
using namespace std;

int main() {
    // Moved the initialisation of the variable to the top.
    int number = 6;

    cout << "This is untidy code." << endl;
    cout << "I'm surprised it works." << endl; //Removal of excess spaces.
    cout << "It has " << number << " lines of code - each more hideous than the last." << endl; //Reduction of lines.
    cout << "You probably should add some line breaks in the text too" << endl; //Indentation fix.

    return 0;
}