#include <iostream>
#include <string>
#include <vector> // Using vector is more common in modern C++

using namespace std;

int main() {
    // Initialize an array of std::string.
    string colors[3] = {"red", "green", "blue"};

    cout << "Using a C-style array: " << endl;
    // A range-based for loop is a convenient way to iterate through a container.
    // 'const string& color' means we get a read-only reference to each element,
    // which avoids making unnecessary copies.
    for (const string& color : colors) {
        cout << color << ", ";
    }
    cout << endl;

    // It's more common and flexible to use a std::vector for lists of strings.
    cout << "\nUsing a std::vector: " << endl;
    vector<string> colorVector = {"red", "green", "blue"};
    for (const string& color : colorVector) {
        cout << color << ", ";
    }
    cout << endl;

    return 0;
}