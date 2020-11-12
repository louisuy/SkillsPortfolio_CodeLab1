#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter an alphabet: ";                                  //Prompt user to input an alphabet.
    cin >> c;

    c = tolower(c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') { //Condition for all vowels first to exclude a smaller number.
        cout << c << " is a vowel";
    }
    else {                                                          //Else the letter would be a consonant.
        cout << c << " is a consonant";
    }

    system("pause>0");
    return 0;
}
