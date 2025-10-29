#include <iostream>

using namespace std;

// This program prints a number pyramid pattern.
int main() {
    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    for (int row = 1; row <= numRows; row++) {
        // 1. Print leading spaces.
        for (int space = 1; space <= numRows - row; space++) {
            cout << " ";
        }

        // 2. Print the ascending part of the numbers.
        for (int col = 1; col <= row; col++) {
            cout << col;
        }

        // 3. Print the descending part of the numbers (from row-1 down to 1).
        for (int col = row - 1; col >= 1; col--) {
            cout << col;
        }

        cout << endl;
    }

    return 0;
}