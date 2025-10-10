#include <iostream>

using namespace std;

// This program calculates the absolute value of an integer.
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // If the number is non-negative, its absolute value is the number itself.
    if (number >= 0) {
        cout << "The absolute value is " << number << endl;
    } else {
        // If the number is negative, its absolute value is its negation.
        cout << "The absolute value is " << -number << endl;
    }

    return 0;
}