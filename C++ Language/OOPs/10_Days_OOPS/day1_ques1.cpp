#include <iostream>
using namespace std;

//rectangle class
class Rectangle{    
    private :
    int length;
    int width;

    public :
    Rectangle(int length, int width){
        this->length=length;
        this->width=width;
    }

    //calculating area and perimeter
    int calculate_area(){
        return (length*width);
    }
    int calculate_perimeter(){
        return (2*(length+width));
    }
};

class improvisedRectangle{
private :
    int length;
    int width;

public :
    improvisedRectangle(int l,int w) : length(l), width(w) {}
    //functions
    int calculate_area() const {
        return length*width;
    }
    int calculate_perimeter() const {
        return 2*(length+width);
    }
};

int main(){
    // Rectangle r1(10,5);
    // Rectangle r2(20,40);
    // cout<<"Area : "<<r1.calculate_area()<<endl;
    // cout<<"Perimeter : "<<r1.calculate_perimeter()<<endl;

    improvisedRectangle r1(10,5);
    cout<<r1.calculate_area();
}