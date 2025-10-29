#include <iostream>

using namespace std;

// This program prints a diamond shape made of stars.
// Example for size 4:
// *
// * *
// * * *
// * * * *
// * * *
// * *
// *
int main() {
    int size;
    cout << "Enter the size for the widest part of the diamond: ";
    cin >> size;

    // Print the top half of the diamond (including the middle row).
    for (int row = 1; row <= size; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Print the bottom half of the diamond.
    for (int row = size - 1; row >= 1; row--) {
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}