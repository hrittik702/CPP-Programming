#include <iostream>

using namespace std;

// This function finds the first and last digit of an integer.
// It takes a pointer to the number as an argument.
// Note: This function modifies the original number in main because it operates on a pointer.
void findFirstAndLastDigit(int* numberPtr) {
    if (numberPtr == nullptr) return; // Safety check

    int number = *numberPtr;
    int lastDigit = number % 10;
    int firstDigit = number;

    // To find the first digit, repeatedly divide by 10 until only one digit is left.
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    cout << "First digit: " << firstDigit << endl;
    cout << "Last digit: " << lastDigit << endl;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    cout << "Original number: " << number << endl;

    // Pass the address of the 'number' variable to the function.
    findFirstAndLastDigit(&number);

    // The value of 'number' in main is not changed in this refactored version,
    // but the original implementation did change it.
    // cout << "Number after function call: " << number << endl;

    return 0;
}