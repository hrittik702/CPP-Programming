
//given size of array = n+1
//it consists 1 to n and 1 duplicate element
//we have to find the duplicate element


#include <iostream>
#include <array>
#include <chrono>
#include <vector>
using namespace std::chrono;
using namespace std;
int main(){
    auto start = high_resolution_clock :: now();
    int n=7;
    int arr[n+1] = {2,5,4,3,7,6,3,1};
    // duplicate element

    // // M-1 Brute force method
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

    //M-2 - Using Math's to find the duplicate element
    int s1=(7*(7+1))/2;
    int s2=0;
    for(int i=0; i<=n;i++){
        s2+=arr[i];
    } 
    int duplicate = s2-s1;
    cout<<"Duplicate element : "<<duplicate<<endl;
    
    //M-3 - using another array or vector
    vector <int> array(8,0);
    for(int i=0; i<n; i++){
        if(array.at((arr[i]))==1){
            cout<<"Duplicate Element : "<<arr[i]<<endl;
        } else {
            array.at((arr[i]))=1;
        }
    }
    
    auto stop = high_resolution_clock :: now();
    auto duration = duration_cast<microseconds>(start-stop);
    cout<<"Time Taken : "<<duration.count()<<" microseconds"<<endl;
    return 0;
}