#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=6;j++){
            if(i==1||j==1||i==n){
                cout<<j<<" ";
            } else if (j==6){
                cout<<n<<" ";
            } else {
                cout<<"  ";
            }
        } 
        cout<<endl;
    }
}