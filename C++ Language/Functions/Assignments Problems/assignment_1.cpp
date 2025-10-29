#include <iostream>

using namespace std;

// This function prints the square of the first n natural numbers.
void printSquaresOfNaturalNumbers(int limit) {
    cout << "The squares of the first " << limit << " natural numbers are: ";
    for (int i = 1; i <= limit; i++) {
        cout << i * i << " ";
    }
    cout << endl;
}

int main() {
    int upperLimit;
    cout << "Enter the upper limit: ";
    cin >> upperLimit;
    printSquaresOfNaturalNumbers(upperLimit);
    return 0;
}