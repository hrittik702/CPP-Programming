#include <iostream>
#include <cmath> // For log10()

using namespace std;

// This program counts the number of digits in a given integer.
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number == 0) {
        cout << "The number of digits is 1." << endl;
    } else {
        // The number of digits in an integer N is floor(log10(abs(N))) + 1.
        int digitCount = floor(log10(abs(number))) + 1;
        cout << "The number of digits is: " << digitCount << endl;
    }

    return 0;
}