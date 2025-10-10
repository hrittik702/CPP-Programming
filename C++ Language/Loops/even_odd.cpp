#include <iostream>

using namespace std;

// This program prints all even numbers up to a given maximum range.
// Note: The filename is even_odd.cpp, but the implementation only handles even numbers.
int main() {
    int maxRange;
    cout << "Enter the maximum range to print even numbers up to: ";
    cin >> maxRange;

    cout << "Even numbers up to " << maxRange << ": ";
    // Loop from 2 and increment by 2 to print only even numbers.
    for (int i = 2; i <= maxRange; i = i + 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}