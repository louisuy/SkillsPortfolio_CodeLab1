#include <iostream>
using namespace std;

int main()
{
    int man, wives, sacks, cats, kits;
    man = 1;
    wives = 7;
    sacks = 7;
    cats = 7;
    kits = 7;

    cout << "As I was going to St. Ives, I met " << man << " man with " << wives << " wives" << endl;
    cout << "Each wife had " << sacks << " sacks, each sack had " << cats << " cats, each cat had " << kits << " kits" << endl;
    cout << "Kits, cats, sacks and wives," << endl;
    cout << "How many were going to St. Ives?\n" << endl;

    int totalSacks, totalCats, totalKits;
    totalSacks = wives * sacks;
    totalCats = wives * sacks * cats;
    totalKits = wives * sacks * cats * kits;


    cout << "There was a total of " << man << " man" << endl;
    cout << "There were a total of " << wives << " wives." << endl;
    cout << "There were a total of " << totalSacks << " sacks." << endl;
    cout << "There were a total of " << totalCats << " cats." << endl;
    cout << "There were a total of " << totalKits << " kits.\n" << endl;

    cout << "However, there is only 1 person going to St. Ives, the narrator.";

    system("pause>0");

}