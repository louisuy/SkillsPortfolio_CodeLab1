#include <iostream>
using namespace std;

int main()
{
    /*string arrname = "firstEight";
    int length = 7;

    for (int count = 0; count <= length; count++) {
        cout << arrname <<'['<< count << "] = " << count+1 << ";" << endl;
    }

    string arrname = "five";
    int length = 5;

    for (int count = 0; count <= length; count++) {
        cout << arrname << '[' << count << "] = " << count + 1 << ";" << endl;
    }*/

    string arrname = "tens";
    int length = 5;
    int first = 10;

    for (int count = 0; count <= length; count++) {
        cout << arrname << '[' << count << "] = " << first << ";" << endl;
        first += 10;
    }

    system("pause>0");
    return 0;
}
