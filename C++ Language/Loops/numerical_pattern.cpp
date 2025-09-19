#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=1; col<=n; col++){
            if(col+row<=n){
                cout<<col+row<<" ";
            } else {
                cout<<col+row-7<<" ";
            }
        }
        cout<<endl;
    }
}