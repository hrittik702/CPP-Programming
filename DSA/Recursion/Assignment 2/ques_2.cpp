//Print index of a given element in an array. If not present, print -1
#include <iostream>
using namespace std;

//function for the finding element
void findElement(int arr[],int size,int key){
    if(size-1<0) {
        cout<<"-1"<<endl;
        return;
    }
    if(key==arr[size-1]){
        cout<<key<<" found at idx : "<<size-1<<endl;
        return;
    }
    findElement(arr,size-1,key);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    findElement(arr,10,4);
}