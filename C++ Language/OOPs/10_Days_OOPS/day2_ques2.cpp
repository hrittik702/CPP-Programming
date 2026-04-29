#include <iostream>
using namespace std;

//This demonstrates Constructor Overloading, a form of Static Polymorphism.
//The compiler selects the correct constructor based on the number and type 
//of arguments provided during object creation.
//A default constructor is essential for creating objects when no initial 
//values are specified (e.g., in arrays or STL containers).

class Rectangle{
    private :
        int length;
        int width;
    public :
        //default constructor
        Rectangle() : length(1), width(1) {
            cout<<"Default Constructor is Used !"<<endl;
        }
        //parameterized constructor
        Rectangle(int l, int w) : length(l), width(w) {
            cout<<"Parameterized Constructor is Used !"<<endl;
        }
        //functions
        int get_Area() const {
            return length*width;
        }
        int get_Perimeter() const {
            return 2*(length+width);
        }
};

int main(){
    Rectangle r1;
    Rectangle r2(10,5);
    cout<<r1.get_Area()<<endl;
    cout<<r2.get_Area()<<endl;

}