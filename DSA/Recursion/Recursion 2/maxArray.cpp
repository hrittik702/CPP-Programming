#include <iostream>
#include <climits>
using namespace std;

void printMaxArray(int arr[],int size,int idx,int max){
    if(idx==size){
        cout<<max<<endl;
        return;
    }
    if(arr[idx]>max) max=arr[idx];
    printMaxArray(arr,size,idx+1,max);
}

int arrayMax(int arr[],int size, int idx){
    if(idx==size) return INT_MIN;
    return max(arr[idx],arrayMax(arr,size,idx+1));
}

int main(){
    int arr[]={3,6,8,9,-1,9,12};
    printMaxArray(arr,7,0,INT_MIN);
    cout<<arrayMax(arr,7,0);

}