#include <iostream>

using namespace std;

// This program calculates the profit or loss from a transaction.
int main() {
    int sellingPrice, costPrice;

    cout << "Enter Selling price: ";
    cin >> sellingPrice;

    cout << "Enter cost price: ";
    cin >> costPrice;

    if (sellingPrice > costPrice) {
        // If the selling price is greater than the cost price, there is a profit.
        cout << "Profit of " << sellingPrice - costPrice << endl;
    } else if (sellingPrice == costPrice) {
        // If both prices are equal, there is no profit or loss.
        cout << "No profit, no loss." << endl;
    } else {
        // Otherwise, there is a loss.
        cout << "Loss of " << costPrice - sellingPrice << endl;
    }

    return 0;
}