//create a rectangle class with private length and width attributes, and methods for area and perimeter calculation.
#include <iostream>

using namespace std;

// Defines a class to represent a rectangle.
class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        width = 0;
    }

    // Overloaded constructor for initialization.
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // Setter for length.
    void setLength(float l) {
        length = l;
    }

    // Setter for width.
    void setWidth(float w) {
        width = w;
    }

    // Calculates the area of the rectangle (length * width).
    float getArea() {
        return length * width;
    }

    // Calculates the perimeter of the rectangle (2 * (length + width)).
    float getPerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    float lengthInput, widthInput;
    cout << "Enter length: ";
    cin >> lengthInput;
    cout << "Enter width: ";
    cin >> widthInput;

    // Create and initialize a Rectangle object using the constructor.
    Rectangle r1(lengthInput, widthInput);

    cout << "Area: " << r1.getArea() << " sq. units" << endl;
    cout << "Perimeter: " << r1.getPerimeter() << " units" << endl;

    return 0;
}


