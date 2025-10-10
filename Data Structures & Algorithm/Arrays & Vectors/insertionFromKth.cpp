#include <iostream>
#include <vector>
#include <limits>
#include <string>

using namespace std;

// A robust helper function to read an integer from the user.
// It handles invalid input and re-prompts until a valid integer is entered.
int readInt(const string &prompt) {
    int x;
    while (true) {
        cout << prompt;
        if (cin >> x) {
            // Clear the rest of the line to handle inputs like "5 abc"
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return x;
        }
        cout << "Invalid input. Please enter an integer.\n";
        cin.clear(); // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard bad input
    }
}

// Initializes or re-initializes the vector with a new size and new elements.
void createArray(vector<int> &arr) {
    int n = readInt("Enter size of array: ");
    if (n <= 0) {
        cout << "Size must be positive.\n";
        arr.clear();
        return;
    }
    arr.resize(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        arr[i] = readInt("  Element " + to_string(i+1) + ": ");
    }
    cout << "Array created.\n";
}

// Prints all elements currently in the vector.
void printArray(const vector<int> &arr) {
    if (arr.empty()) {
        cout << "Array is empty. Create it first.\n";
        return;
    }
    cout << "Elements: ";
    for (int v : arr) cout << v << " ";
    cout << "\n";
}

// Allows the user to re-enter all elements for the existing vector size.
void scanArray(vector<int> &arr) {
    if (arr.empty()) {
        cout << "Array is empty. Create it first.\n";
        return;
    }
    cout << "Re-enter " << arr.size() << " elements:\n";
    for (size_t i = 0; i < arr.size(); ++i) {
        arr[i] = readInt("  Element " + to_string(i+1) + ": ");
    }
    cout << "Array updated.\n";
}

// Inserts a new value at a specified 1-based position in the vector.
void insertItem(vector<int> &arr) {
    if (arr.empty()) {
        cout << "Create the array first.\n";
        return;
    }
    int pos = readInt("Enter 1-based position to insert at (1.." + to_string(arr.size()+1) + "): ");
    if (pos < 1 || pos > (int)arr.size() + 1) {
        cout << "Invalid position.\n";
        return;
    }
    int val = readInt("Enter value to insert: ");
    arr.insert(arr.begin() + (pos - 1), val);
    cout << "Inserted " << val << " at position " << pos << ".\n";
}

// Deletes an element from a specified 1-based position in the vector.
void deleteAt(vector<int> &arr) {
    if (arr.empty()) {
        cout << "Array is empty.\n";
        return;
    }
    int pos = readInt("Enter 1-based position to delete (1.." + to_string(arr.size()) + "): ");
    if (pos < 1 || pos > (int)arr.size()) {
        cout << "Invalid position.\n";
        return;
    }
    int val = arr[pos - 1];
    arr.erase(arr.begin() + (pos - 1));
    cout << "Deleted element " << val << " from position " << pos << ".\n";
}

// Searches for a target value and prints all 1-based positions where it is found.
void searchElement(const vector<int> &arr) {
    if (arr.empty()) {
        cout << "Array is empty.\n";
        return;
    }
    int target = readInt("Enter value to search for: ");
    bool found = false;
    cout << "Found at positions (1-based): ";
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            cout << (i + 1) << " ";
            found = true;
        }
    }
    if (!found) cout << "None";
    cout << "\n";
}

// Updates the value of an element at a specified 1-based position.
void updateElement(vector<int> &arr) {
    if (arr.empty()) {
        cout << "Array is empty.\n";
        return;
    }
    int pos = readInt("Enter 1-based position to update (1.." + to_string(arr.size()) + "): ");
    if (pos < 1 || pos > (int)arr.size()) {
        cout << "Invalid position.\n";
        return;
    }
    int val = readInt("Enter new value: ");
    arr[pos - 1] = val;
    cout << "Updated position " << pos << " to " << val << ".\n";
}

// Clears all elements from the vector.
void clearArray(vector<int> &arr) {
    arr.clear();
    cout << "Array cleared.\n";
}

// Displays the main menu of options to the user.
void menu() {
    cout << "\n--- Array CLI Menu ---\n"
         << "1. Create Array\n"
         << "2. Print Array\n"
         << "3. Rescan (update all) Array\n"
         << "4. Insert Element\n"
         << "5. Delete Element (by position)\n"
         << "6. Search Element\n"
         << "7. Update Element (by position)\n"
         << "8. Clear Array\n"
         << "9. Exit\n";
}

int main() {
    vector<int> arr;
    while (true) {
        menu();
        int choice = readInt("Choose option: ";
        switch (choice) {
            case 1: createArray(arr); break;
            case 2: printArray(arr); break;
            case 3: scanArray(arr); break;
            case 4: insertItem(arr); break;
            case 5: deleteAt(arr); break;
            case 6: searchElement(arr); break;
            case 7: updateElement(arr); break;
            case 8: clearArray(arr); break;
            case 9: cout << "Exiting.\n"; return 0;
            default: cout << "Invalid option. Try again.\n";
        }
    }
    return 0;
}

