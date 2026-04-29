#include <iostream>
using namespace std;

//Explanation:

//The use of the const keyword on the get_area() method is the key concept here. 
//It signifies that the method is an inspector (it only reads data) and not 
//a mutator (it doesn’t change data).
//This improves code safety and allows the method to be called on 
//const objects (objects whose state cannot be changed).

class Circle{
    private :
        float radius;
        const float pi = 3.14159;
    public :
        Circle(float r) : radius(r) {}
        //functions
        double get_Area() const {
            return pi*radius*radius;
        }
        double get_Circumference() const {
            return 2*pi*radius;
        }
};

int main(){
    Circle myCircle(5.0);
    cout<<myCircle.get_Area();
}