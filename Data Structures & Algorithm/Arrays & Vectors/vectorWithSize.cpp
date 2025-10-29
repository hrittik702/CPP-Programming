#include <iostream>
#include <vector>

using namespace std;

// This program demonstrates different ways to initialize a vector with a specific size.
int main() {
    cout << "--- Vector Constructors ---" << endl;

    // 1. Initialize a vector with a specific size.
    // This creates a vector with 5 elements, all default-initialized to 0.
    cout << "\nVector v1(5):" << endl;
    vector<int> v1(5);
    cout << "Elements: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    // 2. Initialize a vector with a specific size and a specific value.
    // This creates a vector with 5 elements, all initialized to the value 7.
    cout << "\nVector v2(5, 7):" << endl;
    vector<int> v2(5, 7);
    cout << "Elements: ";
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;

    return 0;
}