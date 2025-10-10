#include <iostream>

using namespace std;

// This program checks if a given integer is even or odd.
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // An even number is perfectly divisible by 2 (remainder is 0).
    if (number % 2 == 0) {
        cout << number << " is an even number." << endl;
    } else {
        // If the remainder is not 0, the number is odd.
        cout << number << " is an odd number." << endl;
    }

    return 0;
}