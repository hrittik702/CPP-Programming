#include <iostream>
using namespace std;
void printNto1(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    printNto1(n-1);
    return;
}

void print1toN(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    } 
    print1toN(n-1);
    cout<<n<<endl;
    return;
}

//using an extra argument
void print(int i,int n){
    if(i==n){
        cout<<n<<endl;
        return;
    }
    cout<<i<<endl;
    print(i+1,n);
    return;
}
int main(){
    int x;
    cin>>x;
    // printNto1(x);
    // print1toN(x);
    print(1,x);
}