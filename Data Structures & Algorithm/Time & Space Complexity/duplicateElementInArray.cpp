
//given size of array = n+1
//it consists 1 to n and 1 duplicate element
//we have to find the duplicate element


#include <iostream>
#include <array>
#include <chrono>
using namespace std::chrono;
using namespace std;
int main(){
    auto start = high_resolution_clock :: now();
    int n=8;
    int arr[n+1] = {2,5,4,3,7,6,2,1};
    // duplicate element
    // M-1 Brute force method
    bool flag=false;
    for(int i=0; i<n+1; i++){
        for(int j=i+1; j<n+1; j++){
            if(arr[j]==arr[i]){
                cout<<"Duplicate element : "<<arr[j]<<endl;
                flag = true;
                break;
            }
        }
        if(flag==true) break;
    }

}