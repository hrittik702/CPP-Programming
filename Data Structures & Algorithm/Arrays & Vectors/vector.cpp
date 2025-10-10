#include <iostream>
#include <vector> // Required for using std::vector

using namespace std;

// This program demonstrates the basic initialization and element insertion for std::vector.
int main() {
    // Vector initialization. A vector is a dynamic array that can grow in size.
    vector<int> v;

    cout << "Initial size: " << v.size() << endl; // Size is 0

    // Use push_back() to add elements to the end of the vector.
    cout << "Adding elements..." << endl;
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);

    cout << "Size after adding 3 elements: " << v.size() << endl; // Size is 3

    // Accessing and printing elements using a loop.
    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Direct index assignment (like v[3] = 10;) is only safe for existing elements.
    // Accessing an out-of-bounds index (e.g., v[3] when size is 3) is undefined behavior.

    return 0;
}