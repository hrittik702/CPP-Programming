#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    if(size-1==0){
        cout<<arr[0]<<" ";
        return;
    }
    cout<<arr[size-1]<<" ";
    printArray(arr,size-1);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    printArray(arr,9);
    
}