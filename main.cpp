// COMSC-210 | Lab 4A | Johnathan Perez Baltazar

#include <iostream>
using namespace std;

struct Color{
    float red;
    float green;
    float blue;
};

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

/**
 * @brief Creates a `Color` struct and prompts user to enter the RGB values of-
 * the color they wish to save
 * @return `Color` data type with saved RGB values
*/
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

/**
 * @brief Outputs the members of a `Color` data type
 * @param `Color` data type
 * @return Nothing
*/
void output(Color savedColor){
    cout << "Red: "<< savedColor.red;
    cout << "\nGreen: "<< savedColor.green;
    cout << "\nBlue: "<< savedColor.blue;
}