#include<iostream>
#include <climits> //for using INT_MIN/INT_MAX
using namespace std;
int main(){
    int n,arr[(cin>>n,n)];
    for(int i=0; i<n; i++) cin>>arr[i];
    int min = INT_MAX;
    //for updating min value 
    for(int i=0; i<n; i++){
        if(min>arr[i]) min = arr[i];
    }
    cout<<"Minimum value : "<<min<<endl;
    return 0;
}