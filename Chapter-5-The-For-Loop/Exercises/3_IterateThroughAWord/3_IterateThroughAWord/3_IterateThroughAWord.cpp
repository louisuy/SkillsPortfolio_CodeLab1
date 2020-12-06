#include <iostream>
using namespace std;

int main()
{
    // Initialise the string to be sliced.
    string myWord = "Joe"; 
    // Use the for loop index as the slicing index.
    for (int i = 0; i < 3; i++) {
        cout << myWord.at(i) << endl;
    }
    system("pause>0");
    return 0;
}
