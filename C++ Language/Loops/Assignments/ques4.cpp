#include <iostream>

using namespace std;

// This program prints a triangle where odd rows contain numbers and even rows contain characters.
// Example for rows 4:
// 1
// A B
// 1 2 3
// A B C D
int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int row = 1; row <= rows; row++) {
        for (int col = 1; col <= row; col++) {
            if (row % 2 == 0) {
                // Even rows print characters.
                cout << (char)(col + 64) << " ";
            } else {
                // Odd rows print numbers.
                cout << col << " ";
            }
        }
        cout << endl;
    }
    return 0;
}