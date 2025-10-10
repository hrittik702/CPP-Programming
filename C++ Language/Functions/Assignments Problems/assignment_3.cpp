#include <iostream>

using namespace std;

// A function to check if a person is eligible to vote based on their age.
void checkVotingEligibility(int age) {
    if (age >= 18) {
        cout << "Yes, you are eligible to vote." << endl;
    } else {
        cout << "No, you are not eligible to vote yet." << endl;
    }
}

int main() {
    int userAge;
    cout << "Enter your age: ";
    cin >> userAge;
    checkVotingEligibility(userAge);
    return 0;
}
