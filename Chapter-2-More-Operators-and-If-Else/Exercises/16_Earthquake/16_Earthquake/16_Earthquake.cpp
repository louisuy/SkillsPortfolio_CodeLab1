#include <iostream>
using namespace std;

int main() {
    float magnitude;
    cout << "Enter the earthquake magnitude: " ; // User input the magnitude ranges on the Richter scale.
    cin >> magnitude;

    if (magnitude < 2.0f) { cout << "Micro earthquake." << endl; }
    else if (magnitude >= 2.0f && magnitude < 3.0f)  { cout << "Very minor earthquake." << endl; }
    else if (magnitude >= 3.0f && magnitude < 4.0f)  { cout << "Minor earthquake."      << endl; }
    else if (magnitude >= 4.0f && magnitude < 5.0f)  { cout << "Light earthquake."      << endl; }
    else if (magnitude >= 5.0f && magnitude < 6.0f)  { cout << "Moderate earthquake."   << endl; }
    else if (magnitude >= 6.0f && magnitude < 7.0f)  { cout << "Strong earthquake."     << endl; }
    else if (magnitude >= 7.0f && magnitude < 8.0f)  { cout << "Major earthquake."      << endl; }
    else if (magnitude >= 8.0f && magnitude < 10.0f) { cout << "Great earthquake."      << endl; }
    else { cout << "Meteoric earthquake." << endl; }

    system("pause>0");
    return 0;
}