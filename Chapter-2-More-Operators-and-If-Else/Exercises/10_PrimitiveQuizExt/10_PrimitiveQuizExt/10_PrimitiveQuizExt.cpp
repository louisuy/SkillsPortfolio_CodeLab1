#include <iostream>
#include <string>
using namespace std;

int quiz(string country, string capital) {                          //Callable function to reduce redundancy. (args: Country, Capital)
    string answer;

    cout << "What is the capital of " << country << "? " << endl;   //Prompt user input.
    cin >> answer;                                                  //Assign input to a variable.
    answer[0] = toupper(answer[0]);                                 //Capitalise the initial letter

    if (answer == capital) {                                        //If input equals the capital arg this answer is correct.
        cout << "Your answer is correct. Well done!" << endl;
        return 1;                                                   //Return value is the increment to the score.
    }
    else {
        cout << "That answer is incorrect. The correct answer is: "<< capital << endl;
        return 0;                                                   //Return value would add 0 to the score.
    }
}

int main() {
    int score = 0;                                                  //Initialise score. Every function call is added to the value of score.
    score += quiz("France", "Paris");
    score += quiz("Greece", "Athens");
    score += quiz("Germany", "Berlin");
    score += quiz("Finland", "Helsinki");
    score += quiz("Ireland", "Dublin");
    score += quiz("United Kingdom", "London");
    score += quiz("Russia", "Moscow");
    score += quiz("Sweden", "Stockholm");
    score += quiz("Portugal", "Lisbon");
    score += quiz("Spain", "Madrid");

    cout << "You scored: " << score << " out of 10!";

    system("pause>0");
    return 0;
}