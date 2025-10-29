#include <iostream>

using namespace std;

// This function prints all odd numbers within a given range (inclusive).
void printOddNumbersInRange(int start, int end) {
    cout << "Odd numbers between " << start << " and " << end << " are: ";
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int number1, number2;
    cout << "Enter the starting number of the range: ";
    cin >> number1;
    cout << "Enter the ending number of the range: ";
    cin >> number2;

    // Ensure the range is from the smaller to the larger number.
    if (number1 > number2) {
        printOddNumbersInRange(number2, number1);
    } else {
        printOddNumbersInRange(number1, number2);
    }

    return 0;
}