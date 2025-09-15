#include <iostream>
#define pi 3.14159265359
using namespace std;

//waf to print area and circumference of the circle
void circle(float x){
    cout<<"Area "<<pi*x*x<<endl;
    cout<<"Circumference "<<2*pi*x;
}

int main(){
    float radius;
    cout<<"Enter radius of the circle : ";
    cin>>radius;
    circle(radius);
    return 0;
}