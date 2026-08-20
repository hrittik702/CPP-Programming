#include <iostream>
using namespace std;

//bubble sort function
void bubbleSort(int nums[],int size,bool assc){
    bool swapFlag = false;
    int swap = 0;
    if(assc){
        for(int i=0; i<size; i++){
            for(int j=0; j<size-1-i; j++){
                if(nums[j]>nums[j+1]){  //swap j and j+1
                    cout<<"swapping "<<nums[j]<<"<-->"<<nums[j+1]<<endl;
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    swapFlag = true;
                    swap++;
                }
                for(int i=0; i<size; i++){
                    cout<<nums[i]<<" ";
                }
                cout<<endl;
            }
            if(!swapFlag) break;
        }
    } else {
        for(int i=0; i<size; i++){
            for(int j=0; j<size-1-i; j++){
                if(nums[j]<nums[j+1]){
                    cout<<"swapping "<<nums[j]<<"<-->"<<nums[j+1]<<endl;
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1]=temp;
                    swapFlag = true;
                    swap++;
                }
                for(int i=0; i<size; i++){
                    cout<<nums[i]<<" ";
                }
                cout<<endl;
            }
            if(!swapFlag) break;
        }
    }
    cout<<"No of swaps = "<<swap<<endl;
    for(int i=0; i<size; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    int arr[] = {1, 2, 3, 4};
    bubbleSort(arr,4,false);   
}