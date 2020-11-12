#include <iostream>
using namespace std;

int main()
{
    int currentTime;
    cout << "What time is it? ";                            //Output a prompt into the console.
    cin >> currentTime;

    if (currentTime < 12) {                                 //If condition for mornings (preceding 12)
        cout << "Good Morning." << endl;
    }
    else if ((currentTime >= 12) && (currentTime < 18)) {   //Else if condition for afternoons (12 and succeeding 12)
        cout << "Good Afternoon." << endl;
    }
    else if ((currentTime >= 18) && (currentTime < 21)) {   //Else if condition for evenings (18 and succeeding 18)
        cout << "Good Evening." << endl;
    }
    else if ((currentTime >= 21) && (currentTime <= 24)) {  //Else if condition for nights (succeeding 21 up to 24)
        cout << "Good Night." << endl;
    }
    else {
        cout << "Time not valid." << endl;
    }

    system("pause>0");
    return 0;
}