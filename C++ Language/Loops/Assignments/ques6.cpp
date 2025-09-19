#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter m : ";
    cin>>m;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}