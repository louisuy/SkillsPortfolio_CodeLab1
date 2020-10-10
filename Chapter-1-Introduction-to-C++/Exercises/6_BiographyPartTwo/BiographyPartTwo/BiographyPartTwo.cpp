#include <iostream>
using namespace std;

int main()
{
    string name, hometown;
    int age;

    cout<< "What is your name? ";
    cin >> name;

    cout<< "Where are you from? ";
    cin >> hometown;

    cout<< "How old are you? ";
    cin >> age;

    cout<< endl 
        << "Name: " << name << endl
        << "Hometown: " << hometown << endl
        << "Age: " << age << endl;

    system("pause > 0");

}