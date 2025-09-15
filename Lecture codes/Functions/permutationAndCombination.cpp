#include  <iostream>
using namespace std;
//creating factorial function
int fact(int x){
    int facto = 1;
    for(int i=1; i<=x; i++){
        facto *= i;
    }
    return facto;
}

//creating function for combination
int nCr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

//creating function for permutation
int nPr(int n, int r){
    return fact(n)/fact(n-r);
}

int main(){
    int a,b;
    cout<<"Enter n : ";
    cin>>a;
    cout<<"Enter r : ";
    cin>>b;
    int c = nCr(a,b);
    int p = nPr(a,b);
    cout<<a<<" C "<<b<<" = "<<c<<endl;
    cout<<a<<" P "<<b<<" = "<<p<<endl;
    return 0;
}