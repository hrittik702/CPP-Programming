#include <iostream>

using namespace std;

// This program checks if a given character is an alphabet (either uppercase or lowercase).
int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;

    // Convert the character to its integer ASCII value.
    int asciiValue = (int)character;

    // Check if the ASCII value falls within the range for uppercase letters (A-Z: 65-90)
    // or lowercase letters (a-z: 97-122).
    if ((asciiValue >= 65 && asciiValue <= 90) || (asciiValue >= 97 && asciiValue <= 122)) {
        cout << "The character '" << character << "' is an alphabet." << endl;
    } else {
        cout << "The character '" << character << "' is not an alphabet." << endl;
    }

    return 0;
}