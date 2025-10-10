#include <iostream>
#include <vector>

using namespace std;

// This program performs a linear search to find a target value in an array.
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

    int target;
    cout << "Enter the target value to search for: ";
    cin >> target;

    bool found = false;
    int foundIndex = -1;

    // Linear search: Iterate through the array one by one.
    for (int i = 0; i < size; i++) {
        // If the current element matches the target, set flag and break the loop.
        if (numbers[i] == target) {
            found = true;
            foundIndex = i;
            break;
        }
    }

    // Print the result.
    if (found) {
        cout << "Target " << target << " was found at index " << foundIndex << "." << endl;
    } else {
        cout << "Target " << target << " was not found in the array." << endl;
    }

    return 0;
}