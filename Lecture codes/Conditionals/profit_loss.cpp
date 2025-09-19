#include <iostream>
using namespace std;
int sp,cp;
cout<<"Enter Selling price : ";
cin>>sp;
cout<<"Enter cost price : ";
cin>>cp;
if(sp>cp){
    cout<<"Profit of ">>sp-cp;
} else if(sp==cp){
    cout<<"Selling Price & Cost Price are equal";
} else {
    cout<<"Loss of "<<cp-sp;
}