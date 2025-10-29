#include <iostream>
#include <vector>

using namespace std;

// This program counts how many elements in an array are greater than a given value 'x'.
int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    if (size < 0) {
        cout << "Size cannot be negative." << endl;
        return 1;
    }

    vector<int> numbers(size);
    if (size > 0) {
        cout << "Enter " << size << " numbers: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> numbers[i];
        }
    }

    int threshold;
    cout << "Enter the threshold value (x): ";
    cin >> threshold;

    // Count how many numbers are greater than the threshold.
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (numbers[i] > threshold) {
            count++;
        }
    }

    cout << "Number of elements greater than " << threshold << ": " << count << endl;

    return 0;
}