//Given a positive integer, return true if it is a power of 2.
#include <iostream>
using namespace std;

bool isPower2(int n){
    if(n==1) return true;
    if(n<=0 || n%2!=0) return false;
    return isPower2(n/2);
}

int main(){
    int x;
    cin>>x;
    if(isPower2(x)==true) cout<<"true"<<endl;
    else cout<<"false"<<endl;
}