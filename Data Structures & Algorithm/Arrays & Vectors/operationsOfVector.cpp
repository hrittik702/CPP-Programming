#include <iostream>
#include <vector>

using namespace std;

// This program demonstrates basic std::vector operations like push_back() and pop_back().
int main() {
    vector<int> v;

    // A vector's 'size' is the number of elements it currently holds.
    // A vector's 'capacity' is the amount of memory it has allocated, which can be larger than the size.
    cout << "Initial state -> Size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    cout << "\n--- Pushing back elements ---" << endl;
    v.push_back(1);
    cout << "After push_back(1) -> Size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    v.push_back(2);
    cout << "After push_back(2) -> Size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    v.push_back(6);
    cout << "After push_back(6) -> Size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    v.push_back(7);
    cout << "After push_back(7) -> Size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    cout << "\nCurrent vector elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // pop_back() removes the last element from the vector, reducing the size.
    // It does not typically reduce the capacity.
    cout << "\n--- Popping back an element ---" << endl;
    v.pop_back();

    cout << "After pop_back() -> Size: " << v.size() << ", Capacity: " << v.capacity() << endl;
    cout << "Final vector elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}