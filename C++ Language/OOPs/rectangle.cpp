//create a rectangle class with private length and width attributes, and methods for area and perimeter calculation.
#include <iostream>
using namespace std;
//creating class
class rectangle {
    private :
        float length;
        float width;
    public :
        //getter 
        void setlength(float l){
            length = l;
        }
        void setwidth(float b){
            width = b;
        }
        //getter
        float getArea(){
            return length*width;
        }
        float getPerimeter(){
            return 2*(length+width);
        }
};

int main(){
    rectangle r1;
    float l1,b1;
    cout<<"Enter length : ";
    r1.setlength((cin>>l1,l1));
    cout<<"Enter width : ";
    r1.setwidth((cin>>b1,b1));
    cout<<"Area : "<<r1.getArea()<<" sq. meter"<<endl;
    cout<<"Perimeter : "<<r1.getPerimeter()<<" meter"<<endl;
    return 0;        
}

