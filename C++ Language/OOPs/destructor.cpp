#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int score;

public:
    // Constructor: Called when an object is created.
    Player(string name, int health, int score) {
        this->name = name;
        this->health = health;
        this->score = score;
        cout << "Player '" << name << "' has been created." << endl;
    }

    // Destructor: Called automatically when an object goes out of scope.
    // Used to clean up resources (e.g., free memory, close files).
    ~Player() {
        cout << "Player '" << name << "' is being destroyed. Cleaning up." << endl;
    }

    void display() {
        cout << "Name: " << name << ", Health: " << health << ", Score: " << score << endl;
    }
};

void gameLoop() {
    cout << "\nEntering a new game scope..." << endl;
    // p1 is created here.
    Player p1("Hrittik", 80, 90);
    p1.display();
    cout << "...leaving the game scope." << endl;
    // p1 goes out of scope here, so its destructor will be called automatically.
}

int main() {
    cout << "Main function started." << endl;
    gameLoop();
    cout << "Main function finished." << endl;
    return 0;
}