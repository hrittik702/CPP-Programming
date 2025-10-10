#include <iostream>
#include <vector>
#include <climits> // For INT_MIN

using namespace std;

// This program finds the maximum element in an array.
int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    if (size <= 0) {
        cout << "Cannot find the maximum element in an empty or invalid-sized array." << endl;
        return 1;
    }

    vector<int> numbers(size);
    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    // Initialize maxElement to the smallest possible integer value.
    // This ensures it will be correctly updated even if all numbers are negative.
    int maxElement = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (numbers[i] > maxElement) {
            maxElement = numbers[i];
        }
    }

    cout << "The maximum element is: " << maxElement << endl;

    return 0;
}