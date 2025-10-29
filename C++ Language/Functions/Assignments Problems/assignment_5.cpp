#include <iostream>

using namespace std;

// A function to check if a number is prime.
// A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.
bool isPrime(int number) {
    // Prime numbers must be greater than 1.
    if (number <= 1) {
        return false;
    }

    // Check for divisors from 2 up to the square root of the number.
    // If a divisor is found, the number is not prime.
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int startRange, endRange;
    cout << "Enter the starting number of the range: ";
    cin >> startRange;
    cout << "Enter the ending number of the range: ";
    cin >> endRange;

    cout << "Prime numbers between " << startRange << " and " << endRange << " are: ";
    for (int i = startRange; i <= endRange; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}