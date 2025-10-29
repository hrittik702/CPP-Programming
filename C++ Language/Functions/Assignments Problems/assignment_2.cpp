#include <iostream>
#include <cmath> // For M_PI constant

using namespace std;

// This function calculates and prints the area and circumference of a circle.
void printCircleProperties(float radius) {
    // Area = PI * r^2
    cout << "Area: " << M_PI * radius * radius << endl;
    // Circumference = 2 * PI * r
    cout << "Circumference: " << 2 * M_PI * radius << endl;
}

int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    printCircleProperties(radius);
    return 0;
}