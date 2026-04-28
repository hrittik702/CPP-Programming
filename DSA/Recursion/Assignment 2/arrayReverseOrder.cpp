#include <iostream>
using namespace std;

void arrayReverse(int arr[],int sizeOfArr){
    if(sizeOfArr<=0) return;
    cout<<arr[--sizeOfArr]<<" ";
    arrayReverse(arr, sizeOfArr);
}

int main(){
    int nums[7] = {34,65,67,87,23,76,97};
    arrayReverse(nums,7); 
    cout<<endl;
}