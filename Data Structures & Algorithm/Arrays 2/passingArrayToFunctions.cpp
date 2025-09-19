#include <iostream>
using namespace std;
void display(int num[],int size){  //int *num
    for(int i=0; i<size; i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    return;
}

void change(int a[],int size){ //int *b
    a[0]=100;
}

int main(){
    cout<<"Enter no. of elements : ";
    int n,arr[(cin>>n,n)];
    cout<<"Enter elements : ";
    for(int i=0; i<n; i++) cin>>arr[i];
    display(arr,n);
    change(arr,n);
    display(arr,n);
    return 0;
}