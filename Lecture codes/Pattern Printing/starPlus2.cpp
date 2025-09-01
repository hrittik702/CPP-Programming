#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n%2!=0){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i+j==n+1||i==j){
                    cout<<"* ";
                } else {
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    } else {
        cout<<"Enter odd n";
    }

}