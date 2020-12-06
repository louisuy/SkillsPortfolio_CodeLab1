#include <iostream>
using namespace std;

int main()
{
    int myInt, start, counter, odd, even;

    cout << "Count from? ";
    cin >> start;
    counter = start;
    cout << "Count to? ";
    cin >> myInt;
    int total = myInt - counter + 1;
    odd = (myInt - counter) / 2;
    if (myInt % 2 != 0 || counter % 2 != 0)
        odd += 1;
    even = total - odd;

    cout << "There are " << odd << " odd numbers and," << endl;
    cout << "there are " << even << " even numbers." << endl;

    while (counter <= myInt) {
        cout << counter << endl;
        counter++;
    }
    counter--;
    while (counter >= start) {
        cout << counter << endl;
        counter--;
    }
    
    cout << endl;
    

    system("pause>0");
    return 0;
}
