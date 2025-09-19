#include<iostream>
using namespace std;
int main(){
    int x;
    int *p = &(cin>>x,x);
    cout<<p<<endl;
    cout<<*p<<endl;
}