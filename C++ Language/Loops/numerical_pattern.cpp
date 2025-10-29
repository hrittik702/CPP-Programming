#include <iostream>

using namespace std;

// This program prints a numerical pattern in a square grid.
int main() {
    int size;
    cout << "Enter the size of the grid: ";
    cin >> size;

    // Loop for each row.
    for (int row = 1; row <= size; row++) {
        // Loop for each column in the current row.
        for (int col = 1; col <= size; col++) {
            // The value to print is the sum of the current row and column, minus 1.
            // This creates a simple, cascading numerical pattern.
            cout << row + col - 1 << " ";
        }
        cout << endl;
    }

    return 0;
}