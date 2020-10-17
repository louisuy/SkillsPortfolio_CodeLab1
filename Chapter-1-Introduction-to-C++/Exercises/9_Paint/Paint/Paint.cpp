#include <iostream>
#include <string>
#include <math.h> 
using namespace std;

// Simple function to avoid redundancy for enforcing input validation.
int entryForm(string promptText) {
    int measurement;
    cout << promptText;
    cin >> measurement;
    while (cin.fail()) {        // In the ocassion that the user enters a non-integer the cin will fail.
        cout << "Please enter only an integer.\n" << promptText;
        cin.clear();            // This line will clear the error flag from the non-integer input.
        cin.ignore(128, '\n');  // This line will ignore 128 characters or upon encountering a new line.
        cin >> measurement;     // Casting the input to measurement.
    }
    return measurement;         // Return the measurement.
}

// Calculator as a separate callable function so it can be re called.
void calculator() {
    //Consts are variables whose value cannot be modified later.
    const int COVERAGE = 350;                   // Paint covers 350 sq. ft per gallon.
    const int doorArea = 20;                    // Declare a constant for the door area.
    const int windowArea = 15;                  // Declare a constant for the window area.
    int length, width, height, doors, windows, totalDoorArea, totalWindowArea; // Declare variables in integer.
    double totalSqFt, paintNeeded;              // Declare double totalSqFt, paintNeeded.
    length = entryForm("Length (in ft): ");     // Prompt for and read in the length of the room.
    width = entryForm("Width  (in ft): ");      // Prompt for and read in the width of the room.
    height = entryForm("Height (in ft): ");     // Prompt for and read in the height of the room.
    doors = entryForm("Number of doors: ");     // Prompt for the number of doors.
    totalDoorArea = doors*doorArea;             // Calculate the total door area.
    windows = entryForm("Number of windows: "); // Prompt for the number of windows.
    totalWindowArea = windows*windowArea;       // Calculate the total window area.

    totalSqFt = (2 * (length + width) * height) - (totalWindowArea + totalDoorArea);// Compute the total square feet to be painted.
    paintNeeded = totalSqFt / COVERAGE;         // Compute the amount of paint needed.

    // Print the length, width, and height of the room, the total square feet and number of gallons of paint required.
    cout << "\nFor a room with:\n"
        << "Length: " << length << " ft" << endl
        << "Width:  " << width << " ft" << endl
        << "Height: " << height << " ft" << endl
        << "Wall Area: " << totalSqFt << " sq ft" << endl
        << "\nYou need,\n" << ceil(paintNeeded) << " gallons of paint.\n" << endl;
}

int main()
{
    // Declare a character which will be used to determine whether the user would want to rerun the program.
    char repeat = 'Y';
    // While looop for when user would want to rerun a calculation.
    while (repeat == 'y' || repeat == 'Y') {
        calculator();
        cout << "Calculate again? (Y/N) ";
        cin >> repeat;
        system("cls"); // Clearing the screen so that the user does not get confused with the previous calculations.
    }
    // If the user enters 'n' the program will not call the calculator function and show a message.
    if (repeat == 'n' || repeat == 'N') {
        cout << "Thank you for using this program! (c) Anthony Bon Louis Uy Cubillas, 2020." << endl;
    }
    system("pause>0");
    return 0;
}