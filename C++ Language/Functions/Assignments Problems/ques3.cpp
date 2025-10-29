// Given two numbers a and b, write a function to print all odd numbers between them.
#include <iostream>
#include <algorithm> // For std::swap

using namespace std;

// This function prints all odd numbers within a given range (inclusive).
void printOddNumbersBetween(int num1, int num2) {
    // Ensure the range is from the smaller to the larger number.
    if (num1 > num2) {
        swap(num1, num2);
    }

    cout << "Odd numbers between " << num1 << " and " << num2 << " are: " << endl;
    for (int i = num1; i <= num2; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int a, b;
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;
    printOddNumbersBetween(a, b);
    return 0;
}