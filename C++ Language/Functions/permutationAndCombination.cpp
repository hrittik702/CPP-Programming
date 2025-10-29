#include <iostream>

using namespace std;

// Calculates the factorial of a non-negative integer.
long long factorial(int n) {
    if (n < 0) return -1; // Factorial is not defined for negative numbers
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Calculates the number of combinations (nCr), which is n! / (r! * (n-r)!).
long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Calculates the number of permutations (nPr), which is n! / (n-r)!.
long long nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    if (n < r || n < 0 || r < 0) {
        cout << "Invalid input: n must be greater than or equal to r, and both must be non-negative." << endl;
        return 1;
    }

    long long combinationResult = nCr(n, r);
    long long permutationResult = nPr(n, r);

    cout << n << "C" << r << " = " << combinationResult << endl;
    cout << n << "P" << r << " = " << permutationResult << endl;

    return 0;
}