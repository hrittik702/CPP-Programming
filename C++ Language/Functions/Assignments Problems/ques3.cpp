// Given two numbers a and b, write a function to print all odd numbers between them
#include <iostream>
using namespace std;

//function
int oddNum(int x, int y){
    if(x>y) swap(x,y);
    for(int i=x; i<=y; i++){
        if(i%2!=0) cout<<i<<endl;
    }
    return 0;
}

int main(){
    cout<<"Enter a : ";
    int a = (cin>>a,a);
    cout<<"Enter b : ";
    int b = (cin>>b,b);
    oddNum(a,b);
    return 0;
}