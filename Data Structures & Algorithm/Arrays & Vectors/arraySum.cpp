#include <iostream>
using namespace std;
int main(){
    int size,sum=0,arr[(cin>>size,size)];
    cout<<"Enter elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;
    
}