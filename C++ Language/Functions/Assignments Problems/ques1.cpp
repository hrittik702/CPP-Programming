// Write a function to print squares of first n natural numbers, taking n as argument to the function.
#include <iostream>
using namespace std;

//using loops
void square(int x){
    for(int i=0; i<=x; i++){
        int square = i;
        square *= square;
        cout<<i<<" : "<<square<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n : ";
    square((cin>>n,n));
    return 0;
}
