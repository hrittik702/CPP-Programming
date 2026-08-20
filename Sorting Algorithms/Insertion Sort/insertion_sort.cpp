#include <iostream>
using namespace std;

// insertion sort algo
void insertionSort(int nums[], int size,bool assc){
        for(int i=0; i<size-1; i++){
            int key = nums[i+1];
            int j=i;
            while(j>=0&&nums[j]>key){
                nums[j+1]=nums[j];
                j--;
            }
            nums[j+1]=key;
        }
        for(int k=0; k<size; k++){
                cout<<nums[k]<<" ";
        }
//      {
//         for(int i=0; i<size-1; i++){
//             int sortedIdx = i;
//             int key = i+1;
//             while(sortedIdx>=0 && nums[key]>nums[sortedIdx]){
//                 swap(nums[key],nums[sortedIdx]);
//                 cout<<"swapped key: "<<nums[key]<<" with "<<nums[sortedIdx]<<endl;
//                 sortedIdx--;
//                 key--;
//             for(int k=0; k<size; k++){
//                 cout<<nums[k]<<" ";
//             }
//         }
//     }
// }
}

int main(){
    int arr[] = {10,6,7,1,3,2};
    insertionSort(arr,6,true);
}