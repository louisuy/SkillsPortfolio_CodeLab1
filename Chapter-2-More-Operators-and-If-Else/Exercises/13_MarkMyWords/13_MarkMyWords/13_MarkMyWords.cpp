#include <iostream>
using namespace std;

//Callable function to allow for continuous grade evaluation.
void evaluator(int grade) {
    if (grade < 0 || grade > 100) {                 //The concept of early exits is used here to exclude any invalid entries earlier.
        cout << "Grade entered invalid." << endl;
    }
    else if (grade >= 70 && grade <= 100) {         //Grade boundaries are specified in the if conditions.
        cout << grade << "% is an A." << endl;      //And the expected output follows each.
    }
    else if (grade >= 60 && grade < 70) {
        cout << grade << "% is a B." << endl;
    }
    else if (grade >= 50 && grade < 60) {
        cout << grade << "% is a C." << endl;
    }
    else if (grade >= 40 && grade < 50) {
        cout << grade << "% is a D." << endl;
    }
    else if (grade < 40) {
        cout << grade << "% is an F." << endl;
    }
}
    
int main() {
    int grade;
    char proceed = 'Y';
    
    //While loop to continually run the program until said otherwise.
    while (proceed == 'Y' || proceed == 'y') {
        cout << "Enter grade percentage: "; //Prompt the user to enter the grade.
        cin >> grade;                       //Assign to variable which is then,
        evaluator(grade);                   //Fed into the function as an argument.
        cout << "Evaluate another grade? (y/n) ";
        cin >> proceed;                     //Continue query.
        system("cls");
    }

    if (proceed != 'y' && proceed != 'Y') {
        cout << "Thank you for using this program! (c) Anthony Bon Louis Uy Cubillas, 2020." << endl;
    }

    system("pause>0");
    return 0;
}