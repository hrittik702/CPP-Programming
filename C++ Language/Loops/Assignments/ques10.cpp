#include <iostream>

using namespace std;

// This program prints a triangle pattern with descending numbers in each row.
// Example for rows 4:
// 1
// 2 1
// 3 2 1
// 4 3 2 1
int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int row = 1; row <= rows; row++) {
        for (int col = row; col >= 1; col--) {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}