#include <iostream>
using namespace std;

//bubble sort function
void bubbleSort(int nums[],int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size-1-i; j++){
            if(nums[j]>nums[j+1]){  //swap j and j+1
                cout<<"swapping "<<nums[j]<<"<-->"<<nums[j+1]<<endl;
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    for(int i=0; i<size; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {4, 1, 4, 2, 1, 4, 3, 2, 1};
    bubbleSort(arr,9);   
}