#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate

using namespace std;

// This program calculates the sum of elements in an array (using std::vector).
int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    if (size < 0) {
        cout << "Size cannot be negative." << endl;
        return 1;
    }

    vector<int> numbers(size);
    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    // Calculate the sum using std::accumulate for a more modern C++ approach.
    long long sum = accumulate(numbers.begin(), numbers.end(), 0LL);

    cout << "The sum of the elements is: " << sum << endl;

    return 0;
}

