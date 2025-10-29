#include <iostream>
#include <cmath> // For pow() function, though we implement it manually

using namespace std;

// This program calculates the value of a number raised to a given power.
int main() {
    int base, exponent;
    long long result = 1;

    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    bool isExponentNegative = false;
    int positiveExponent = exponent;

    // Handle negative exponents.
    if (exponent < 0) {
        isExponentNegative = true;
        positiveExponent = -exponent;
    }

    // Calculate the power using a loop.
    for (int i = 1; i <= positiveExponent; i++) {
        result *= base;
    }

    // Display the result.
    if (isExponentNegative) {
        // For a negative exponent, the result is 1 / (base^|exponent|)
        double finalResult = 1.0 / result;
        cout << base << " ^ " << exponent << " = " << finalResult << endl;
    } else {
        cout << base << " ^ " << exponent << " = " << result << endl;
    }

    return 0;
}