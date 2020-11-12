#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter an character: "; //Prompt user to input an alphabet.
    cin >> c;

    if (isalpha(c)) { //isalpha allows the program to distinguish if the input is an alphabet
        c = tolower(c);  //tolower makes the alphabet lowercase to allow for only one set of conditions
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') { //Condition for all vowels first to exclude a smaller number.
            cout << c << " is a vowel.";
        }
        else {
            cout << c << " is a consonant.";
        }
    }
    else if (isdigit(c)) { //isdigit distinguishes numbers
        cout << c << " is a number.";
    }
    else { //if not isalphanum can be used here but logically anything that's not a number or alphabet is a special character.
        cout << c << " is a special character.";
    }

    system("pause>0");
    return 0;
}
