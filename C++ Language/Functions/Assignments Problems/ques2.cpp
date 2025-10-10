// Write a function that takes the radius of a circle as an argument and returns its area.
#include <iostream>

using namespace std;

// Calculates the area of a circle.
// Uses 22.0/7.0 for floating-point division to get a more accurate value of Pi.
float circleArea(float radius) {
    return (22.0 / 7.0) * radius * radius;
}

int main() {
    float radius;
    cout << "Enter radius in meters: ";
    cin >> radius;

    float area = circleArea(radius);
    cout << "Area of a circle with radius " << radius << " m is " << area << " sq. m" << endl;
    return 0;
}