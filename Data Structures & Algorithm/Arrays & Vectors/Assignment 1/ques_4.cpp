//Given an array, predict if the array contains duplicates or not.
#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

using namespace std;

// This function checks if a vector contains any duplicate elements.
bool containsDuplicate(vector<int>& numbers) {
    if (numbers.size() < 2) {
        return false;
    }

    // Sort the vector. This makes finding duplicates easier as they will be adjacent.
    sort(numbers.begin(), numbers.end());

    // Iterate through the sorted vector and check for adjacent duplicates.
    for (int i = 0; i < numbers.size() - 1; i++) {
        if (numbers[i] == numbers[i + 1]) {
            return true; // Found a duplicate.
        }
    }

    return false; // No duplicates found.
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size < 0) {
        cout << "Size cannot be negative." << endl;
        return 1;
    }

    vector<int> numbers(size);
    if (size > 0) {
        cout << "Enter " << size << " elements: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> numbers[i];
        }
    }

    if (containsDuplicate(numbers)) {
        cout << "Yes, this array contains duplicate elements." << endl;
    } else {
        cout << "No, this array does not contain duplicate elements." << endl;
    }

    return 0;
}