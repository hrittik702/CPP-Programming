// WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.
#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

using namespace std;

int findSmallestMissingPositive(vector<int>& numbers) {
    // The core idea is to have a marker for the positive numbers we expect to see.
    int expectedNumber = 1;
    for (int number : numbers) {
        // If we find the number we are expecting, we look for the next one.
        if (number == expectedNumber) {
            expectedNumber++;
        }
    }
    // The first number we didn't find is the smallest missing positive.
    return expectedNumber;
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
        cout << "Enter positive integer elements: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> numbers[i];
        }
    }

    // Sort the array first, as the problem implies it should be sorted.
    sort(numbers.begin(), numbers.end());

    int missing = findSmallestMissingPositive(numbers);

    cout << "The smallest missing positive element is: " << missing << endl;

    return 0;
}