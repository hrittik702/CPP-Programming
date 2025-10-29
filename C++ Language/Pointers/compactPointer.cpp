#include <iostream>

using namespace std;

// This program demonstrates basic pointer initialization and dereferencing.
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // A pointer is a variable that stores the memory address of another variable.
    // 'ptr' now holds the address of 'number'.
    int* ptr = &number;

    // Printing the pointer itself shows the memory address.
    cout << "Address stored in ptr (address of number): " << ptr << endl;

    // Dereferencing the pointer with '*' gives the value stored at that address.
    cout << "Value at the address stored in ptr (value of number): " << *ptr << endl;

    return 0;
}