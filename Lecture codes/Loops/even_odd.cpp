#include <iostream>
using namespace std;
int main(){
    int j;
    cout<<"Enter max range : ";
    cin>>j;
    for(int i=2; i<=j; i=i+2){
        cout<<i<<" ";
    }
}