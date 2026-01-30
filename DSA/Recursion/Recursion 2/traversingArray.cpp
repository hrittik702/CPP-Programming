#include <iostream>
using namespace std;

void traverseArray(int arr[],int size){
    if(size-1==0){
        cout<<arr[size-1]<<" ";
        return;
    }
    traverseArray(arr,size-1);
    cout<<arr[size-1]<<" ";
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    traverseArray(arr,9);
}