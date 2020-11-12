#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Full Name: ";
    getline(cin, name);         //Prompt and input name, using getline for multiple names.

    int grade;
    cout << "Grade: ";          //Prompt and input integer grade.
    cin >> grade;

    if (grade > 100 || grade < 0) cout << "Invalid Grade";
    else {
        cout << name << " - ";
        grade /= 10;           //This is due to the ranges and dividing them, and grade being var type 'int' would round it to nearest whole.
        switch (grade) {
            case 0: case 1: case 2: case 3: cout << "F"; break;     //This makes the ranges from 0-39
            case 4: cout << "E"; break;                             //Range of 40-49
            case 5: cout << "D"; break;                             //Range of 50-59
            case 6: cout << "C"; break;                             //Range of 60-69
            case 7: cout << "B"; break;                             //Range of 70-79
            case 8: case 9: case 10: cout << "A"; break;            //This makes the range from 80-100 (up to 109 but anything above 100 is rejected)
        }
    }

    system("pause>0");
    return 0;
}
