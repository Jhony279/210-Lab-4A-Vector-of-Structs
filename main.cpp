// COMSC-210 | Lab 4A | Johnathan Perez Baltazar

#include <iostream>
#include <vector>
using namespace std;

struct Color{
    float red;
    float green;
    float blue;
};

vector<Color> savedColors;

Color createColorInst();
void output(Color);
void vectorOutput(vector<Color>);

// <description>
// arguments: 
// returns: 
int main() {
    Color newC = createColorInst();

    savedColors.insert(savedColors.begin(), newC);
    vectorOutput(savedColors);

    // output(newC);
    return 0;
}

/**
 * @brief Creates a `Color` struct and prompts user to enter the RGB values of
 * the color they wish to save
 * @return `Color` data type with saved RGB values
*/
Color createColorInst(){
    Color color;

    cout << "---- Color Saver Program ----\n";
    cout << "Enter the red Value of your color (0 - 255): ";
    // loop will check if a 0-255 number is entered if not it will reprompt user
    while (!(cin >> color.red) || color.red > 255 || color.red < 0){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << " - Inproper data type! please enter a number: ";
    }

    cout << "Enter the green Value of of your (0 - 255): ";
    // loop will check if a 0-255 number is entered if not it will reprompt user
    while (!(cin >> color.green) || color.green > 255 || color.green < 0){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << " - Inproper data type! please enter a number: ";
    }

    cout << "Enter the blue Value of your color (0 - 255):";
    // loop will check if a 0-255 number is entered if not it will reprompt user
    while (!(cin >> color.blue) || color.blue > 255 || color.blue < 0){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << " - Inproper data type! please enter a number: ";
    }
    cout << "\n";

    return color;
}

/**
 * @brief Outputs the members of a `Color` data type
 * @param `Color` data type
 * @return Nothing
*/
void output(Color savedColor){

    cout << "---- Saved Color (RGB values) ----";
    cout << "\nRed: "<< savedColor.red;
    cout << "\nGreen: "<< savedColor.green;
    cout << "\nBlue: "<< savedColor.blue;
}

/**
 * @brief Outputs the member values of all `Color` data types inside a vector
 * @param Vector of `Color` data types
 * @return Nothing
*/
void vectorOutput(vector<Color> savedColors){
    for (int i = 0; i < savedColors.size(); i++){
        cout << "\n---- Saved Color (RGB values) ----";
        cout << "\n - Red Value: " << savedColors[i].red << " ";
        cout << "\n - Green Value: " << savedColors[i].green << " ";
        cout << "\n - Blue Value: " << savedColors[i].blue << " ";
    }
}