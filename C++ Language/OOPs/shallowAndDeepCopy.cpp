#include <iostream>
#include <string>

using namespace std;

// This class is used to demonstrate the difference between shallow and deep copy.
class Player {
private:
    string name;
    int* stats; // Pointer to an array of stats on the heap

public:
    // Constructor
    Player(string name, int health, int score) {
        this->name = name;
        this->stats = new int[2]; // Allocate memory on the heap
        this->stats[0] = health;
        this->stats[1] = score;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor to free the allocated memory.
    ~Player() {
        cout << "Destructor called for " << name << ". Deleting stats." << endl;
        delete[] stats;
    }

    // Copy Constructor for Deep Copy
    Player(const Player& source) {
        cout << "Deep Copy Constructor called for " << source.name << endl;
        this->name = source.name + " (Copy)";
        this->stats = new int[2]; // 1. Allocate new memory for the copy.
        this->stats[0] = source.stats[0]; // 2. Copy the values, not the pointer.
        this->stats[1] = source.stats[1];
    }

    void display() {
        cout << "Player: " << name << " | Health: " << stats[0] << " | Score: " << stats[1] << endl;
    }

    void setStats(int health, int score) {
        this->stats[0] = health;
        this->stats[1] = score;
    }
};

void demonstrateShallowCopy() {
    cout << "--- Demonstrating Problem with Shallow Copy ---" << endl;
    Player* p1 = new Player("Shallow P1", 80, 90);
    Player* p2 = p1; // This is NOT a copy. Both pointers point to the same object.

    cout << "p1 and p2 point to the same memory address." << endl;
    p1->display();
    p2->display();

    p2->setStats(50, 50);
    cout << "\nChanged stats via p2. p1 is also affected:" << endl;
    p1->display(); // p1's stats are changed because it's the same object.

    cout << "\nDeleting p1 will invalidate p2, leading to a dangling pointer." << endl;
    delete p1;
    // Now p2 is a dangling pointer. Accessing it is undefined behavior.
    // delete p2; // This would cause a crash (double-free error).
    cout << "--- End of Shallow Copy Demo ---\n" << endl;
}

void demonstrateDeepCopy() {
    cout << "--- Demonstrating Solution with Deep Copy ---" << endl;
    Player p1("Deep P1", 80, 90);
    Player p2 = p1; // Calls the Deep Copy Constructor we wrote.

    cout << "\np1 and p2 are two independent objects." << endl;
    p1.display();
    p2.display();

    p2.setStats(50, 50);
    cout << "\nChanged stats of p2. p1 is NOT affected:" << endl;
    p1.display();
    p2.display();

    cout << "\nBoth objects will be safely destroyed by their own destructors." << endl;
}

int main() {
    demonstrateShallowCopy();
    demonstrateDeepCopy();
    return 0;
}