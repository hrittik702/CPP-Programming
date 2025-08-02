#include <iostream>
using namespace std;

//waf to print square of the first 5 natural no.
void square(int x){
    for(int i=1; i<=x; i++){
        cout<<i*i<<" ";
    }
}

int main(){
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    square(a);
    return 0;
}