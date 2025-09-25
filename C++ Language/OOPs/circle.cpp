//Implement a class called Circle, with private member variable radius, and member functions to calculate area and circumference.
#include <iostream>
using namespace std;

//creating class
class Circle {
    private :
        float radius;
    public :
        //setter
        void setRadius(float x){
            radius = x;
        }
        //getter
        float getArea(){
            return (22/7)*radius*radius;
        }
        float getCircum(){
            return 2*(22/7)*radius;
        }
};

int main(){
    float x;
    Circle c1;
    c1.setRadius((cin>>x,x));
    cout<<c1.getCircum();
    cout<<endl;
    cout<<c1.getArea();
    cout<<endl;

}