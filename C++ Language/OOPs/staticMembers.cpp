#include <iostream>
#include <string>

using namespace std;

// This example demonstrates the use of static members in a class.
class Gun {
public:
    // A static member variable is shared by all objects of the class.
    // It is declared inside the class, but defined outside.
    static int totalAmmo;

private:
    string model;

public:
    Gun(string model) {
        this->model = model;
    }

    void shoot() {
        if (totalAmmo > 0) {
            totalAmmo--;
            cout << model << " fired. Remaining ammo: " << totalAmmo << endl;
        } else {
            cout << model << " cannot fire. No ammo left." << endl;
        }
    }
};

// Define and initialize the static member variable outside the class.
int Gun::totalAmmo = 100;

int main() {
    // Create two different Gun objects.
    Gun akm("AKM");
    Gun m416("M416");

    cout << "Initial shared ammo: " << Gun::totalAmmo << endl; // Access static member using the class name

    // Both objects share the same ammo pool.
    akm.shoot();
    m416.shoot();

    cout << "Final shared ammo: " << Gun::totalAmmo << endl;

    return 0;
}




