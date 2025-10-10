#include <iostream>
#include <vector>
#include <climits> // For INT_MIN

using namespace std;

// This program finds the second largest element in an array.
int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    if (size < 2) {
        cout << "Cannot find a second largest element with fewer than 2 numbers." << endl;
        return 1;
    }

    vector<int> numbers(size);
    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    int maxElement = INT_MIN;
    int secondMaxElement = INT_MIN;

    // A single pass to find the first and second largest elements.
    for (int i = 0; i < size; i++) {
        if (numbers[i] > maxElement) {
            // If we find a new max, the old max becomes the new second max.
            secondMaxElement = maxElement;
            maxElement = numbers[i];
        } else if (numbers[i] > secondMaxElement && numbers[i] != maxElement) {
            // If the number is not the max, but is larger than the second max, update second max.
            secondMaxElement = numbers[i];
        }
    }

    if (secondMaxElement == INT_MIN) {
        cout << "There is no distinct second largest element." << endl;
    } else {
        cout << "The largest element is: " << maxElement << endl;
        cout << "The second largest element is: " << secondMaxElement << endl;
    }

    return 0;
}