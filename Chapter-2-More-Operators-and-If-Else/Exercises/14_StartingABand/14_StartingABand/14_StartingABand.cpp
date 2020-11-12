#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool musicalFriend = true;
    string friendPlays = "guitar";

    if (musicalFriend == true) {                                //Condition if the bool value for if a friend is musical.
        if (friendPlays == "guitar") {                          //If they specifically play guitar.
            cout << "Your friend can join the band as a guitarist.";
        }
        else if (friendPlays == "drums") {                      //If they specifically play drums.
            cout << "Your friend can join the band as a drummer.";
        }
        else {
            cout << "Your friend can't join the band";
        }
    }
    else {
        cout << "Your friend can't join the band";
    }
    system("pause>0");
    return 0;
}
