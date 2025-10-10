#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    string name;
    int health;

    // Constructor
    Player(string name, int health) {
        this->name = name;
        this->health = health;
    }

    // Copy Constructor (to show when copies are made)
    Player(const Player& source) {
        this->name = source.name + " (Copy)";
        this->health = source.health;
        cout << "--- Copy of " << source.name << " created via Pass-by-Value. --- " << endl;
    }

    void display() {
        cout << "Player: " << name << ", Health: " << health << endl;
    }
};

// Pass-by-Value: A copy of the object is created.
// Changes made inside this function do not affect the original object.
void healByValue(Player p) {
    p.health += 20;
    cout << "Inside healByValue: ";
    p.display();
}

// Pass-by-Reference: The function receives a direct reference to the original object.
// Changes made inside this function WILL affect the original object.
void damageByReference(Player& p) {
    p.health -= 30;
    cout << "Inside damageByReference: ";
    p.display();
}

int main() {
    Player hrittik("Hrittik", 80);
    Player abhishek("Abhishek", 90);

    cout << "--- Initial State ---" << endl;
    hrittik.display();
    abhishek.display();

    cout << "\n--- Calling healByValue(hrittik) ---" << endl;
    healByValue(hrittik);
    cout << "After healByValue, original hrittik is unchanged: ";
    hrittik.display();

    cout << "\n--- Calling damageByReference(abhishek) ---" << endl;
    damageByReference(abhishek);
    cout << "After damageByReference, original abhishek is changed: ";
    abhishek.display();

    return 0;
}