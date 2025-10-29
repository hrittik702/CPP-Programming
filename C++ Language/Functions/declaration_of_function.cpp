#include <iostream>

using namespace std;

// A function is a block of code that performs a specific task.
// Syntax: return_type function_name(parameter1, parameter2, ...) {
//     return value;
// }

// This function takes an integer and returns its cube.
int cube(int number) {
    return number * number * number;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Call the cube function and print the result.
    cout << "The cube of " << number << " is " << cube(number) << endl;

    return 0;
}