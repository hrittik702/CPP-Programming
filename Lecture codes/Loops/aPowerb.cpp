#include <iostream>
using namespace std;
int main(){
    //a raised to the power b
    int a,b,product;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    bool isNegative = false;
    if(b<0) {
        b = -b;
        isNegative=true;
    }
        product = 1;
    for(int i=1; i<=b;i++){
        product *= a;
    }
    // cout<<a<<" raised to the power "<<b<<" = "<<product<<endl;

    //if base is -2 and power is -2 then ?
    //for this we have to create exception case
    if(isNegative) {
        float nPro = 1/(float)product;
        cout<<a<<" raised to the power "<<b<<" is "<<nPro<<endl;
    } else {
        cout<<a<<" raised to the power "<<b<<" is "<<product<<endl;
    }
    return 0;
}