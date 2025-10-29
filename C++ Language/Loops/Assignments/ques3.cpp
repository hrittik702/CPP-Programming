#include <iostream>

using namespace std;

// This program prints a right-angled triangle of characters.
// Example for rows 4:
// A
// A B
// A B C
// A B C D
int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int row = 1; row <= rows; row++) {
        for (int col = 1; col <= row; col++) {
            // Print characters by adding to the ASCII value of 'A' - 1.
            cout << (char)(col + 64) << " ";
        }
        cout << endl;
    }
    return 0;
}