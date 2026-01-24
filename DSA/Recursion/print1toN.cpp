#include <iostream>
using namespace std;
//using extra parameter
void print(int i, int n){
    if(i>n) return;
    cout<<i<<" ";
    print(i+1,n);
}

//without using extra parameter
void printWEP(int n){
    if(n==0) return;
    printWEP(n-1);
    cout<<n<<" ";
}
int main(){
    int x;
    cin>>x;
    print(1,x);
    cout<<endl;
    printWEP(x);
}