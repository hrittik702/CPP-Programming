#include <iostream>
using namespace std;

//waf to find prime no. between two no.
// void prime(int x, int y){
//     if(x<=0) cout<<"Enter valid Number"<<endl;
//     if(x==1) cout<<"Enter Number greater than 1";
//     if(x>=2){
//         //loop for printing prime number
//         for(int i=x; i<=y; i++){
//         //loop for checking prime
//             for(int j=2;j<i;j++){
//                 if(i%j==0){
//                     continue;
//                 }
//             }
//         }
//     }
    
// }

bool prime(int x){
    for(int i=2; i<x; i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n1,n2;
    cout<<"Enter number 1 : ";
    cin>>n1;
    cout<<"Enter number 2 : ";
    cin>>n2;
    for(int i=n1; i<=n2; i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}