#include <iostream>
#include <vector>

using namespace std;

// This program demonstrates how to read a user-defined number of elements into a vector.
int main() {
    int size;
    cout << "How many elements do you want to enter? ";
    cin >> size;

    if (size < 0) {
        cout << "Number of elements cannot be negative." << endl;
        return 1;
    }

    vector<int> v;
    cout << "Enter " << size << " numbers:" << endl;

    // Loop 'size' times to read elements from the user.
    for (int i = 0; i < size; i++) {
        int element;
        cin >> element;
        v.push_back(element);
    }

    cout << "You entered: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

