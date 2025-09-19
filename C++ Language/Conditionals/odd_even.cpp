#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. : ";
    cin>>n;
    if(n%5!=0){
        cout<<n<<" is odd no.";
    } else {
        cout<<n<<" is even no.";
    }
}