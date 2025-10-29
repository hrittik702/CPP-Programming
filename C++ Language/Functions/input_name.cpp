#include <iostream>
#include <string> // Required for using string and getline

using namespace std;

int main() {
    string name;
    cout << "Enter your full name: ";

    // Use getline(cin, name) to read a full line of text, including spaces.
    // The simple `cin >> name;` would only read up to the first space.
    getline(cin, name);

    cout << "Hi, " << name << "!" << endl;

    return 0;
}