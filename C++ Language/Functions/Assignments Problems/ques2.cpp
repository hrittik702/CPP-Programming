// Write a function that takes the radius of a circle as an argument and returns its area.
#include <iostream>
using namespace std;

float circleArea(float radius){
    return (22/7)*radius*radius;
}

int main(){
    float r;
    cout<<"Enter radius in meter : ";
    float area = circleArea((cin>>r,r));
    cout<<"Area of circle of radius = "<<r<<" m is "<<area<<" sq. m"<<endl;
    return 0;    
}