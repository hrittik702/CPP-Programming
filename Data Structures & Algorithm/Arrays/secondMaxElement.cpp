#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n,arr[(cin>>n,n)];
    for(int i=0; i<n; i++) cin>>arr[i];
    int max=INT_MIN;
    for(int i=1; i<n; i++){
        if(max<arr[i]) max = arr[i];
    }
    
    //for second max element
    int secMax = INT_MIN;
    for(int i=0; i<n; i++){
        if(max!=arr[i]&&secMax<arr[i]){ 
            secMax=arr[i];
        }
    }
    if(secMax==INT_MIN) cout<<"second maximum cannot be found"<<endl;
    cout<<max<<" ";
    cout<<secMax<<endl;
    return 0;
}