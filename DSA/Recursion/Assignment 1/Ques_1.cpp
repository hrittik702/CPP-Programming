#include <iostream>
#include <algorithm>
using namespace std;

int addOdd(int lb,int ub,int sum){
    if(lb%2==0) lb++;
    if(ub%2==0) ub--;
    if(ub-lb==3) return 4;
    int k=ub;
    addOdd(lb,ub-2,sum+=k);
    return sum;
}

int main(){
    int lb;
    cin>>lb;
    int ub;
    cin>>ub;
    cout<<addOdd(lb,ub,0);
}