#include <iostream>
using namespace std;

// Function takes one integer argument called "times" to define the times it loops.
void say_hello(int times) {
    for (int i = 1; i <= times; i++) {
        cout << "Hello" << endl;
    }
}

int main()
{
    // The integer 'repeats' is the variable to be input by the user;
    int repeats;
    cout << "Hello, how many times? ";
    cin >> repeats;
    // This integer is fed into the function as the one necessary argument.
    say_hello(repeats);

    system("pause>0");
    return 0;
}
