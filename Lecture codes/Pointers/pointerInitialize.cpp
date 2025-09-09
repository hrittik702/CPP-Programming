#include <iostream>
using namespace std;
int main(){
    int x=1;
    //initializing pointer p to store address of x
    int *p = &x;
    
    cout<<"Adress of x through &x : "<<&x<<endl;
    cout<<"Adress of x thorugh p : "<<p<<endl;

}