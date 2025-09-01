#include <iostream>
using namespace std;
int main(){
    int size,target,i;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }

    //for linear search
    int temp=0;
    cout<<"Enter target element : ";
    cin>>target;
    for(i=0; i<size; i++){
        if(arr[i]==target){
            temp = 1;
            break;
        }
    }
    if(temp==1){
        cout<<arr[i]<<" found at index : "<<i<<endl;
    } else {
        cout<<"Element not found";
    }


}


//now doing this with creating functions for linear seach in which we pass a array and target key;