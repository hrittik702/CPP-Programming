#include <iostream>

using namespace std;

// This program prints a square of numbers where each row consists of the row number repeated.
// Example for size 4:
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
int main() {
    int size;
    cout << "Enter the size of the square: ";
    cin >> size;

    for (int row = 1; row <= size; row++) {
        for (int col = 1; col <= size; col++) {
            cout << row << " ";
        }
        cout << endl;
    }
    return 0;
}