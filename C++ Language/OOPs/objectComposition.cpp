#include <iostream>
#include <string>

using namespace std;

// This file demonstrates Object Composition, where one class (Player)
// contains an object of another class (Gun). This is a "has-a" relationship.

// The Gun class represents a weapon.
class Gun {
private:
    string model;
    int damage;
    int ammo;

public:
    // Constructor to initialize Gun properties.
    Gun(string model, int damage, int ammo) {
        this->model = model;
        this->damage = damage;
        this->ammo = ammo;
    }

    // Default constructor
    Gun() {
        this->model = "Fists";
        this->damage = 5;
        this->ammo = 0; // Unlimited
    }

    void display() {
        cout << "  Gun: " << model << endl;
        cout << "  Damage: " << damage << endl;
        cout << "  Ammo: " << ammo << endl;
    }
};

// The Player class contains a Gun object.
class Player {
private:
    string name;
    int health;
    int score;
    Gun gun; // Object Composition: Player "has-a" Gun.

public:
    // Constructor for Player, which also initializes its Gun object.
    Player(string name, int health, int score, Gun gun) {
        this->name = name;
        this->health = health;
        this->score = score;
        this->gun = gun;
    }

    // Displays all information about the player, including their gun.
    void displayInfo() {
        cout << "Player: " << name << endl;
        cout << "Health: " << health << endl;
        cout << "Score: " << score << endl;
        gun.display();
    }
};

int main() {
    // Create a Gun object first.
    Gun akm("AKM", 75, 30);

    // Create a Player object and pass the Gun object to it.
    Player player1("Hrittik", 100, 95, akm);

    // Display the player's info, which includes the gun's info.
    player1.displayInfo();

    return 0;
}

