#include <iostream>

using namespace std;

// This program prints a hollow square pattern of numbers.
int main() {
    int size;
    cout << "Enter the size of the square: ";
    cin >> size;

    // Loop through each row.
    for (int row = 1; row <= size; row++) {
        // Loop through each column.
        for (int col = 1; col <= size; col++) {
            // Print a number if it's on the border (first row, last row, first col, or last col).
            if (row == 1 || row == size || col == 1 || col == size) {
                cout << col << " "; // Using 'col' for variety, could be 'row' or other patterns.
            } else {
                // Print spaces for the hollow inside.
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}

