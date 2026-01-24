#include <iostream>

using namespace std;

// This program initializes an array of size 50.
// It then iterates from index 0 to 48, setting the value of each element
// equal to its index, and prints the value.
int main() {
    int array[50];
    
    // The loop runs from index 0 up to and including 48.
    for (int index = 0; index <= 48; index++) {
        array[index] = index;
        cout << array[index] << endl;
    }
    
    // Note: array[49] is declared but never initialized or printed.
    
    return 0;
}