#include <iostream>

using namespace std;

// This program demonstrates using pointers to read and sum two numbers.
int main() {
    int x, y;

    cout << "Enter the first number (x): ";
    cin >> x;

    cout << "Enter the second number (y): ";
    cin >> y;

    // Create pointers to hold the addresses of x and y.
    int* ptrX = &x;
    int* ptrY = &y;

    // Calculate the sum using the original variables.
    cout << "Sum using variables (x + y): " << x + y << endl;

    // Calculate the sum by dereferencing the pointers.
    // *ptrX gets the value of x, *ptrY gets the value of y.
    cout << "Sum using pointers (*ptrX + *ptrY): " << *ptrX + *ptrY << endl;

    return 0;
}