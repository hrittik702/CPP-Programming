// Write a function to print squares of first n natural numbers, taking n as argument to the function.
#include <iostream>

using namespace std;

// This function prints the number and its square for the first 'limit' natural numbers.
void printSquares(int limit) {
    // Natural numbers start from 1.
    for (int i = 1; i <= limit; i++) {
        cout << i << ": " << i * i << endl;
    }
}

int main() {
    int n;
    cout << "Enter the limit (n): ";
    cin >> n;
    printSquares(n);
    return 0;
}

