//Find the minimum value out of all elements in the array.
#include <iostream>
#include <vector>
#include <climits> // For INT_MAX

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Cannot find the minimum in an empty or invalid-sized array." << endl;
        return 1;
    }

    vector<int> numbers(size);
    cout << "Enter " << size << " elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    int minElement = INT_MAX;
    for (int number : numbers) {
        if (number < minElement) {
            minElement = number;
        }
    }

    cout << "The minimum value is: " << minElement << endl;

    return 0;
}