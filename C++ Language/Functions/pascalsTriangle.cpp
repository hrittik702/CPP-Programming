#include <iostream>

using namespace std;

// Calculates the factorial of a non-negative integer.
long long factorial(int n) {
    if (n < 0) return -1;
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Calculates the number of combinations (nCr) for Pascal's Triangle.
long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Prints Pascal's Triangle with proper spacing to center it.
void printPascalTriangle(int numRows) {
    for (int row = 0; row < numRows; row++) {
        // Print leading spaces for alignment.
        for (int space = 0; space < numRows - row - 1; space++) {
            cout << "  ";
        }

        // Print the numbers for the current row.
        for (int col = 0; col <= row; col++) {
            cout << nCr(row, col) << "   ";
        }
        cout << endl;
    }
}

int main() {
    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    if (numRows < 0) {
        cout << "Number of rows cannot be negative." << endl;
        return 1;
    }

    printPascalTriangle(numRows);

    return 0;
}