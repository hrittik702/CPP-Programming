#include <iostream>
using namespace std;

int main() {
	int n,x;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>x;
    bool flag = false;
    for(int i=0; i<n; i++){
        if(arr[i]==x) flag = true;
    }
    if(flag==true) cout<<"true";
    else cout<<"false";
	return 0;
}