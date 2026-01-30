#include <iostream>
using namespace std;

int stairCount(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return ;
    return stairCount(n-1)+stairCount(n-2)+stairCount(n-3);
}

int main(){
    int x;
    cin>>x;
    cout<<stairCount(x);
}