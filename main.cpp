// COMSC-210 | Lab 4A | Johnathan Perez Baltazar

#include <iostream>
#include <vector>
#include <random>
using namespace std;

// How many characters to ignore when clearing the input buffer
const int IGNORE_VALUE = 1000;
// Max and min values for RGB values
const int MAX_RGB_VALUE = 255;
const int MIN_RGB_VALUE = 0;
// Max and Min values for random color generation
const int MAX_RANDOM_COLOR_VALUE = 50;
const int MIN_RANDOM_COLOR_VALUE = 25;

// Struct to store RGB values of a color
struct Color{
    float red;
    float green;
    float blue;
};

// Vector to store all the Color data types created by the user
vector<Color> savedColors;

random_device colorAmount;

Color createColorInst();
void output(Color);
void vectorOutput(vector<Color>);

/**
 * @brief 
 * @return 
*/
int main() {
    Color newC = createColorInst();
    srand(time(0));

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
    while (!(cin >> color.red) || color.red > MAX_RGB_VALUE || color.red < MIN_RGB_VALUE){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << " - Inproper data type! please enter a number: ";
    }

    cout << "Enter the green Value of of your (0 - 255): ";
    // loop will check if a 0-255 number is entered if not it will reprompt user
    while (!(cin >> color.green) || color.green > MAX_RGB_VALUE || color.green < MIN_RGB_VALUE){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << " - Inproper data type! please enter a number: ";
    }

    cout << "Enter the blue Value of your color (0 - 255):";
    // loop will check if a 0-255 number is entered if not it will reprompt user
    while (!(cin >> color.blue) || color.blue > MAX_RGB_VALUE || color.blue < MIN_RGB_VALUE){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << " - Inproper data type! please enter a number: ";
    }
    cout << "\n";

    return color;
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