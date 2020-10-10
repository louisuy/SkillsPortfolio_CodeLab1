#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string name, hometown;
    int age;

    cout << "What is your name? ";
    getline(cin, name);

    cout << "Where are you from? ";
    getline(cin, hometown);

    cout << "How old are you? ";
    cin >> age;
    while (cin.fail()) {
        cout << "Please enter only an integer." << endl;
        cin.clear();
        cin.ignore(128, '\n');
        cin >> age;
    }

    cout << endl
        << "Name: " << name << endl
        << "Hometown: " << hometown << endl
        << "Age: " << age << endl;

    system("pause > 0");

}