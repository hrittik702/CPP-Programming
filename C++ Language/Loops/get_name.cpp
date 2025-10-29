#include <iostream>
#include <string>

using namespace std;

// This program demonstrates reading a full name using getline.
int main() {
    string name;
    cout << "Please enter your full name: ";
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;
    return 0;
}

