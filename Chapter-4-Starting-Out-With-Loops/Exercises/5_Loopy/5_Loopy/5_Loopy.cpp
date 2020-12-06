#include <iostream>
using namespace std;

int main()
{
    int myInt, start, odd, even;
    // Ask the user for the starting number of the sequence.
    cout << "Count from? ";
    cin >> start; // Assign to non dynamic starting variable.
    cout << "Count to? ";
    cin >> myInt; // Assignation to assignment specified var name.
    int total = myInt - start + 1; // Alg for total numbers in sequence.
    odd = (myInt - start) / 2; // Number of odd would presumably be half.
    // Unless if it started or ended with an odd number then add one.
    if (myInt % 2 != 0 || start % 2 != 0)
        odd += 1;
    even = total - odd; // Evens will naturally be the leftovers.

    cout << "There are " << odd << " odd numbers." << endl;
    cout << "There are " << even << " even numbers." << endl;

    bool countdown = false; // Initialise boolean to specify order.
    int counter = start; // Initialise counter to be initial value.
    cout << "Forwards:  ";
    while (true) {
        if (countdown == false) {
            // Print in one line separated by commas.
            cout << counter << ", ";
            counter++;
            // Change bool to countdown true to reverse order.
            if (counter == myInt) {
                // Terminate with full stop and a new line.
                cout << counter << ".\n";
                countdown = true;
                cout << "Backwards: ";
            }
        }
        else if (countdown == true) {
            cout << counter << ", ";
            counter--;
            if (counter == start) {
                cout << counter << ".\n";
                break; // Break to exit the loop.
            }
        }
    }

    system("pause>0");
    return 0;
}
