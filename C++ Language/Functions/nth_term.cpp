#include <iostream>

using namespace std;

// Displays the main menu for the user.
void displayMenu() {
    cout << "\n------- Arithmetic Progression Calculator -------" << endl;
    cout << "1. Find the nth term" << endl;
    cout << "2. Find the position of a given term" << endl;
    cout << "3. Exit" << endl;
    cout << "---------------------------------------------" << endl;
}

// Calculates the nth term of an AP using the formula: An = a + (n-1)*d
int findNthTerm(int firstTerm, int commonDifference, int termNumber) {
    return (firstTerm + (termNumber - 1) * commonDifference);
}

// Finds the position (n) of a given term in an AP.
void findPositionOfTerm() {
    int firstTerm, commonDifference, term;
    cout << "Enter the first term (a): ";
    cin >> firstTerm;
    cout << "Enter the common difference (d): ";
    cin >> commonDifference;
    cout << "Enter the term to find its position: ";
    cin >> term;

    // The formula to find n is: n = ((An - a) / d) + 1
    // We must check if (term - firstTerm) is divisible by d.
    if (commonDifference != 0 && (term - firstTerm) % commonDifference == 0) {
        int termNumber = ((term - firstTerm) / commonDifference) + 1;
        if (termNumber > 0) {
            cout << "The term " << term << " is at position " << termNumber << " in this AP." << endl;
        } else {
            cout << "This term does not exist in the positive sequence of this AP." << endl;
        }
    } else {
        cout << "The term " << term << " is not part of this AP." << endl;
    }
}

int main() {
    while (true) {
        displayMenu();
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int firstTerm, commonDifference, termNumber;
            cout << "Enter the first term (a): ";
            cin >> firstTerm;
            cout << "Enter the common difference (d): ";
            cin >> commonDifference;
            cout << "Enter the term number to find (n): ";
            cin >> termNumber;
            cout << "The " << termNumber << "th term is: " << findNthTerm(firstTerm, commonDifference, termNumber) << endl;
        } else if (choice == 2) {
            findPositionOfTerm();
        } else if (choice == 3) {
            cout << "Exiting program." << endl;
            break;
        } else {
            cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
        }
    }
    return 0;
}


