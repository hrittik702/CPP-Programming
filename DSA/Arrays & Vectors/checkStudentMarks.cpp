#include <iostream>
#include <vector>

using namespace std;

// This program takes the marks of a number of students and then identifies
// those who have scored below a passing threshold of 35.
int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    if (numStudents <= 0) {
        cout << "Please enter a positive number of students." << endl;
        return 1;
    }

    // Use a vector to store the marks.
    vector<int> studentMarks(numStudents);

    // Take input for the marks of each student.
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter marks for student (Roll No. " << i + 1 << "): ";
        cin >> studentMarks[i];
    }

    // Check for students whose marks are less than 35.
    cout << "\nStudents with marks less than 35:" << endl;
    bool found = false;
    for (int i = 0; i < numStudents; i++) {
        if (studentMarks[i] < 35) {
            cout << "- Roll No. " << i + 1 << " (Marks: " << studentMarks[i] << ")" << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "None" << endl;
    }

    return 0;
}