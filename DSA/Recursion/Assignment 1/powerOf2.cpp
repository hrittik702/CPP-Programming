//Given a positive integer, return true if it is a power of 2.
#include <iostream>
using namespace std;

bool isPower2(int n){
    if(n==2) return true;
    isPower2(n/2);
    return false;
}

int main(){
    int x;
    cin>>x;
    if(isPower2(x)==true) cout<<"true"<<endl;
    else cout<<"false"<<endl;
}