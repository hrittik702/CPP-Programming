#include <iostream>

using namespace std;

// This program is a basic demonstration of pointer initialization.
int main() {
    int variable = 10;

    // 1. DECLARATION: 'ptr' is a pointer that can hold the address of an integer.
    int* ptr;

    // 2. INITIALIZATION: The '&' operator gets the memory address of 'variable'.
    // We assign this address to the pointer.
    ptr = &variable;

    cout << "--- Understanding Pointers ---" << endl;
    cout << "Value of the original variable: " << variable << endl;
    cout << "Address of the variable (using &): " << &variable << endl;
    cout << "Address stored in the pointer (ptr): " << ptr << endl;
    
    // 3. DEREFERENCING: The '*' operator gets the value that the pointer is pointing to.
    cout << "Value obtained by dereferencing the pointer (*ptr): " << *ptr << endl;
    cout << "Address of the pointer itself: " << &ptr << endl;

    return 0;
}