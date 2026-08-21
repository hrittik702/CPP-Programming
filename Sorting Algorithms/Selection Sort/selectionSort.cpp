#include <iostream>
using namespace std;

// selection sort algo
void selectionSort(int nums[], int size,bool assc){
    for(int i=0; i<size-1; i++){
        int smallestElement=i;
        for(int j=smallestElement; j<size; j++){
            if(nums[j]<nums[smallestElement]) smallestElement=j;
        }
        cout<<"smallest element : "<<nums[smallestElement]<<" swapping with : "<<nums[i]<<endl;
        swap(nums[i],nums[smallestElement]);
        for(int i=0; i<size; i++){
            cout<<nums[i]<<" ";
        }
        if(nums[i]==nums[smallestElement]) {cout<<"Already sorted!"<<endl;break;};
        cout<<endl;
        for(int i=0; i<size; i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    selectionSort(arr,10,true);
}