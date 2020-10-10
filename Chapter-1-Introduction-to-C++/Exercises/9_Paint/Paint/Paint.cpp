#include <iostream>
#include <string>
#include <math.h> 
using namespace std;

// Simple function to avoid redundancy for enforcing input validation.
int entryForm(string promptText) {
    int measurement;
    cout << promptText;
    cin >> measurement;
    while (cin.fail()) {
        cout << "Please enter only an integer.\n" << promptText;
        cin.clear();
        cin.ignore(128, '\n');
        cin >> measurement;
    }
    return measurement;
}

int main()
{
    //Consts are variables whose value cannot be modified later.
    const int COVERAGE = 350; // Paint covers 350 sq. ft per gallon.
    int length{}, width{}, height{}, doors{}, windows{}, doorArea, windowArea; // Declare integers length, width, and height.
    float totalSqFt, paintNeeded; // Declare double totalSqFt, paintNeeded.

    doorArea = 20;
    windowArea = 15;


    length = entryForm("Length (in ft): "); // Prompt for and read in the length of the room.
    width = entryForm("Width  (in ft): "); // Prompt for and read in the width of the room.
    height = entryForm("Height (in ft): "); // Prompt for and read in the height of the room.
    doors = entryForm("Number of doors: ");
    doorArea *= doors;
    windows = entryForm("Number of windows: ");
    windowArea *= windows;

    totalSqFt = (2 * (length + width) * height) - (windowArea + doorArea);// Compute the total square feet to be painted.
    paintNeeded = totalSqFt / COVERAGE;// Compute the amount of paint needed.

    // Print the length, width, and height of the room, the total square feet and number of gallons of paint required.
    cout << "\nFor a room with:\n"
        << "Length: " << length << " ft\n"
        << "Width:  " << width << " ft\n"
        << "Height: " << height << " ft\n"
        << "Wall Area: " << totalSqFt << " sq ft\n"
        << "\nYou need,\n" << ceil(paintNeeded) << " gallons of paint.";

    system("pause>0");
    return 0;
}