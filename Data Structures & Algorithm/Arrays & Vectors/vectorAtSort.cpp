#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

using namespace std;

// This program demonstrates the use of .at() for access and std::sort for sorting a vector.
int main() {
    // Vector initialization.
    vector<int> v;
    v.push_back(8);
    v.push_back(7);
    v.push_back(3);
    v.push_back(6);

    cout << "Original vector: ";
    // Using .at(i) is a safe way to access elements because it performs bounds checking.
    // If the index is out of range, it will throw an exception.
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    // std::sort is a powerful algorithm to sort containers.
    // It takes two iterators, v.begin() (points to the first element)
    // and v.end() (points to one position AFTER the last element).
    sort(v.begin(), v.end());

    cout << "Sorted vector:   ";
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    return 0;
}