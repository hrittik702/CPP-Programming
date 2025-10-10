// Calculate the product of all the elements in the given array.
#include <iostream>
#include <vector>

using namespace std;

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
        cout << "Enter " << size << " numbers: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> numbers[i];
        }
    }

    long long product = 1;
    // Use a range-based for loop for cleaner iteration.
    for (int number : numbers) {
        product *= number;
    }

    cout << "The product of all the elements is: " << product << endl;

    return 0;
}