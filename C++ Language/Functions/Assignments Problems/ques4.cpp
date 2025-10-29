// Write a function to count the number of digits in a number and then print the square of this number.
#include <iostream>
#include <cmath> // For log10 and abs

using namespace std;

// This function counts the number of digits in an integer.
// Note: This implementation handles the integer part of a number only.
int countDigits(int number) {
    // If the number is 0, it has 1 digit.
    if (number == 0) {
        return 1;
    }
    // Use log10 to find the number of digits. For example, log10(123) is 2.08, so adding 1 gives 3 digits.
    // We use abs() to handle negative numbers correctly.
    return floor(log10(abs(number))) + 1;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int digitCount = countDigits(number);
    cout << "Number of digits: " << digitCount << endl;

    long long squareOfCount = (long long)digitCount * digitCount;
    cout << "The square of the digit count is: " << squareOfCount << endl;

    return 0;
}