#include <iostream>
#include <string>

using namespace std;

// Defines a class to represent a book.
class Book {
private:
    string title;
    int price;
    int pages;

public:
    // Constructor to initialize the Book object.
    Book(string title, int price, int pages) {
        this->title = title;
        this->price = price;
        this->pages = pages;
    }

    // Method to display the book's details.
    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
        cout << "Pages: " << pages << endl;
    }

    // Method to check if the book price is less than a given amount.
    bool isPriceLessThan(int amount) {
        return price < amount;
    }
};

int main() {
    // Create an instance of the Book class.
    Book atomicHabits("Atomic Habits", 20, 320);

    // Use the object's methods.
    atomicHabits.display();
    
    cout << "\nIs the price less than $25? " 
         << (atomicHabits.isPriceLessThan(25) ? "Yes" : "No") << endl;

    return 0;
}