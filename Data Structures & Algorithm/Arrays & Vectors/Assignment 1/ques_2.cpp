// Find the second largest element in the given Array in one pass.
#include <iostream>
#include <vector>
#include <climits> // For INT_MIN

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size < 2) {
        cout << "Cannot find a second largest element with fewer than 2 numbers." << endl;
        return 1;
    }

    vector<int> numbers(size);
    cout << "Enter " << size << " elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    int maxElement = INT_MIN;
    int secondMaxElement = INT_MIN;

    // A single pass to find the first and second largest elements.
    for (int number : numbers) {
        if (number > maxElement) {
            // If we find a new max, the old max becomes the new second max.
            secondMaxElement = maxElement;
            maxElement = number;
        } else if (number > secondMaxElement && number != maxElement) {
            // If the number is not the max, but is larger than the second max, update second max.
            secondMaxElement = number;
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