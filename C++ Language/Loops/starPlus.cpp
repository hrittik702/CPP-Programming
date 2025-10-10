#include <iostream>

using namespace std;

// This program prints a plus (+) shape made of stars (*) in a grid.
int main() {
    int size;
    cout << "Enter an odd size for the grid: ";
    cin >> size;

    // The plus shape pattern only works correctly for grids with an odd size.
    if (size % 2 != 0) {
        int middle = (size / 2) + 1;
        // Loop for each row.
        for (int row = 1; row <= size; row++) {
            // Loop for each column.
            for (int col = 1; col <= size; col++) {
                // Print a star if the current cell is in the middle row or middle column.
                if (col == middle || row == middle) {
                    cout << "* ";
                } else {
                    cout << "  "; // Print a space otherwise.
                }
            }
            cout << endl;
        }
    } else {
        cout << "Please enter an odd size to create a symmetrical plus shape." << endl;
    }

    return 0;
}