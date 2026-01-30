#include <iostream>
using namespace std;

int sum1toN(int n){
    if(n==1) return 1;
    int sum=sum1toN(n-1);
    return sum+n;
}

//without using sum variable
int sum(int n){
    if(n==1) return 1;
    return n+sum(n-1);
}

int main(){
    int x;
    cin>>x;
    cout<<sum1toN(x)<<endl;
    cout<<sum(x)<<endl;
}