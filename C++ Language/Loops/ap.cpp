#include <iostream>
#include <cmath> // For pow() function

using namespace std;

// This program prints the first n powers of 2 (2^0, 2^1, 2^2, ...).
int main() {
    int limit;
    cout << "Enter the number of terms to print: ";
    cin >> limit;

    for (int i = 0; i < limit; i++) {
        // Calculate 2 raised to the power of i.
        cout << pow(2, i) << " ";
    }
    cout << endl;

    return 0;
}

