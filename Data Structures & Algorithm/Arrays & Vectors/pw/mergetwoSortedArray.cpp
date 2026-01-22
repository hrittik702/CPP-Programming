//info ~~> merge algorithm for merge sorting and 
//this is called merging algorithm

#include <iostream>
using namespace std;

int main(){
    int size1,size2;
    cin>>size1;
    int arr1[size1];
    for(int i=0; i<size1; i++){
        cin>>arr1[size1];
    }
    cin>>size2;
    int arr2[size2];
    for(int i=0; i<size1; i++){
        cin>>arr2[size2];
    }
    int i=0,j=0,k=0;
    int num[(size1+size2)];
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            num[k]=arr1[i];
            i++;
        } else {
            num[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<size1){
        num[k]=arr1[i];
        i++;
        k++;
    }
    while(j<size2){
        num[k]=arr2[j];
        j++;
        k++;
    }
    for(int c=0; c<(size1+size2); c++){
        cout<<num[c]<<" ";
    }
    return 0;
}