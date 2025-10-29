#include <iostream>

using namespace std;

// This program prints a right-angled triangle of stars.
// Example for rows 4:
// *
// * *
// * * *
// * * * *
int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int row = 1; row <= rows; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}