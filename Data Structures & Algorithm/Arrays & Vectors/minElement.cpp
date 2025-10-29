#include <iostream>
#include <vector>
#include <climits> // For INT_MAX

using namespace std;

// This program finds the minimum element in an array.
int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    if (size <= 0) {
        cout << "Cannot find the minimum element in an empty or invalid-sized array." << endl;
        return 1;
    }

    vector<int> numbers(size);
    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    // Initialize minElement to the largest possible integer value.
    // This ensures it will be correctly updated by any number in the array.
    int minElement = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (numbers[i] < minElement) {
            minElement = numbers[i];
        }
    }

    cout << "The minimum element is: " << minElement << endl;

    return 0;
}