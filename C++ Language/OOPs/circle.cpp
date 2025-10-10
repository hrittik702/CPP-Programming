//Implement a class called Circle, with a private member variable radius, and member functions to calculate area and circumference.
#include <iostream>
#include <cmath> // For M_PI constant

using namespace std;

// Defines a class to represent a circle.
class Circle {
private:
    float radius;

public:
    // Setter for the radius.
    void setRadius(float r) {
        radius = r;
    }

    // Calculates the area of the circle (PI * r^2).
    float getArea() {
        return M_PI * radius * radius;
    }

    // Calculates the circumference of the circle (2 * PI * r).
    float getCircumference() {
        return 2 * M_PI * radius;
    }
};

int main() {
    float radiusInput;
    cout << "Enter the radius of the circle: ";
    cin >> radiusInput;

    Circle c1;
    c1.setRadius(radiusInput);

    cout << "The area is: " << c1.getArea() << endl;
    cout << "The circumference is: " << c1.getCircumference() << endl;

    return 0;
}