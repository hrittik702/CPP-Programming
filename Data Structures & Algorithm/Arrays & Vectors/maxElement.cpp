#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[(cin>>n,n)];
    for(int i=0; i<n; i++) cin>>arr[i];
    int max=0;
    for(int i=0; i<n; i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<"Max element : "<<max<<endl;
    return 0;
}