#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    if(size-1==0) {
        cout<<arr[size-1]<<" ";
        return;
    }
    printArray(arr,size-1);
    cout<<arr[size-1]<<" ";
}

int main() {
	int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    printArray(arr,n);
	return 0;
}
