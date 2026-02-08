// COMSC-210 | Lab 4A | Johnathan Perez Baltazar

#include <iostream>
using namespace std;

struct Color{
    float red;
    float green;
    float blue;
};

// Function Prototypes:
Color createColorInst();
void output(Color);

// <description>
// arguments: 
// returns: 
int main() {
    Color newC = createColorInst();

    output(newC);
    return 0;
}

// Function Definitions:
Color createColorInst(){
    Color color;

    cout << "---- Color Saver Program ----\n";
    cout << "Enter the red Value of your color (0 - 255): ";
    cin >> color.red;
    cout << "Enter the green Value of of your (0 - 255): ";
    cin >> color.green;
    cout << "Enter the blue Value of your color (0 - 255):";
    cin >> color.blue;
    cout << "\n";

    return color;
}

void output(Color savedColor){
    cout << "Red: "<< savedColor.red;
    cout << "\nGreen: "<< savedColor.green;
    cout << "\nBlue: "<< savedColor.blue;
}

// Reminder lines must be 80 characters or less, no more than one empty line, no magic numbers,
// and Reminder to comment code where neccessary.