#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=(2*i-1); j++){
            if(j<=n){
                cout<<j;
            } else {
                cout<<j-1;
            }
        }
        cout<<endl;
    }
}