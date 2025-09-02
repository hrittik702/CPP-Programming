#include <iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    for(int i=1; i<=5; i++){
        //for first half
        for(int j=2;j<=i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=n+1-i;k++){
            cout<<k<<" ";
        }
        //for second half
        for(int l=n-i; l>0;l--){
            cout<<l<<" ";
        }
        cout<<endl;
    }
    
	return 0;
}
