#include <iostream>
#include <vector>

using namespace std;

// --- C-style Array Example ---

// When a C-style array is passed to a function, it 'decays' into a pointer
// to its first element. The function does not know the array's size.
void displayCStyleArray(int arr[], int size) { // Equivalent to void display(int* arr, int size)
    cout << "Displaying C-style array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Because the array decays to a pointer, changes made inside the function
// affect the original array.
void modifyCStyleArray(int arr[], int size) {
    if (size > 0) {
        arr[0] = 100;
    }
}

// --- std::vector Example ---

// It's best practice to pass vectors by const reference (&) if you don't intend to modify them.
// This avoids making an expensive copy of the whole vector.
void displayVector(const vector<int>& vec) {
    cout << "Displaying vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

// To modify the original vector, pass it by non-const reference.
void modifyVector(vector<int>& vec) {
    if (!vec.empty()) {
        vec[0] = 500;
    }
}

int main() {
    cout << "--- C-style Array Demo ---" << endl;
    int c_array[] = {1, 2, 3, 4, 5};
    int size = sizeof(c_array) / sizeof(c_array[0]);

    displayCStyleArray(c_array, size);
    modifyCStyleArray(c_array, size);
    cout << "After modification:" << endl;
    displayCStyleArray(c_array, size);

    cout << "\n--- std::vector Demo ---" << endl;
    vector<int> vec = {10, 20, 30, 40, 50};

    displayVector(vec);
    modifyVector(vec);
    cout << "After modification:" << endl;
    displayVector(vec);

    return 0;
}