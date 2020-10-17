#include <iostream>
using namespace std;

int main()
{
    // Initialising and declaring all of the variables in the story.
    int man, wives, sacks, cats, kits;
    man = 1;
    wives = 7;
    sacks = 7;
    cats = 7;
    kits = 7;


    // Output statements utilising the variables declared, to print the riddle in the console.
    cout << "As I was going to St. Ives, I met " << man << " man with " << wives << " wives" << endl;
    cout << "Each wife had " << sacks << " sacks, each sack had " << cats << " cats, each cat had " << kits << " kits" << endl;
    cout << "Kits, cats, sacks and wives," << endl;
    cout << "How many were going to St. Ives?\n" << endl;

    //-------------------- Part 2 -------------------- 

    // Initialising new total variables.
    int totalSacks, totalCats, totalKits;
    // Mathematical expressions utilising the variables from Part 1.
    totalSacks = wives * sacks;
    totalCats = wives * sacks * cats;
    totalKits = wives * sacks * cats * kits;

    // Output statements to display every single total.
    cout << "There was a total of " << man << " man" << endl;
    cout << "There were a total of " << wives << " wives." << endl;
    cout << "There were a total of " << totalSacks << " sacks." << endl;
    cout << "There were a total of " << totalCats << " cats." << endl;
    cout << "There were a total of " << totalKits << " kits.\n" << endl;

    // Additional statement for the actual answer of the riddle.
    cout << "However, there is only 1 person going to St. Ives, the narrator.";

    system("pause>0");
    return 0;
}