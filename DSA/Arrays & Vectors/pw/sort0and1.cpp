//info ~~>

#include <iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int c0=0;
    for(int i=0; i<size; i++){
        if(arr[i]==0) c0++;
    }
    for(int i=0; i<size; i++){
        if(i<c0) arr[i]=0;
        else arr[i]=1;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}