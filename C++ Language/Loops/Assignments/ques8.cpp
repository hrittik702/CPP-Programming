#include <iostream>

using namespace std;

// This program prints a right-angled triangle of numbers.
// Example for rows 4:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int row = 1; row <= rows; row++) {
        for (int col = 1; col <= row; col++) {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}