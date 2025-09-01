#include <iostream>
using namespace std;
int fact(int a){
    if(a==0 || a ==1) return 1;
    else {
        // return fact(a-1) = a*fact(a-2);
        return a*fact(a-1);
    }
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<fact(n);
    return 0;
}