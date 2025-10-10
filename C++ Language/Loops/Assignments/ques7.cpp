#include <iostream>

using namespace std;

// This program prints a solid square of stars.
// Example for size 4:
// * * * *
// * * * *
// * * * *
// * * * *
int main() {
    int size;
    cout << "Enter the size of the square: ";
    cin >> size;

    for (int row = 1; row <= size; row++) {
        for (int col = 1; col <= size; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}