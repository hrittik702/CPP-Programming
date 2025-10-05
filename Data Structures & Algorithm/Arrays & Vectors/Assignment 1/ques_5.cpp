//WAP to find the smallest missing positive element in the sorted Array that contains only
// positive elements.
#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;
int main(){
    cout<<"Enter size of array : ";
    int n,num[(cin>>n,n)];
    cout<<"Enter elements : ";
    for(int i=0; i<n; i++) cin>>num[i];
    //sorting
    auto start = high_resolution_clock::now();  // start time
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(num[i]<num[j]){
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for(int k=0; k<n; k++) cout<<num[k]<<" ";
    cout<<endl;
    auto stop = high_resolution_clock::now();   // end time
    auto duration = duration_cast<microseconds>(stop - start);  
    cout << "Time taken: " << duration.count() << " microseconds" << endl;
    return 0;
}