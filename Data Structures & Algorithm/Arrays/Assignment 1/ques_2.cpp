// Find the second largest element in the given Array in one pass.
#include <iostream>
#include <limits.h>
#include <climits>
using namespace std;
int main(){
    cout<<"Enter size of array : ";
    int n,num[(cin>>n,n)],max=INT_MIN,smax=INT_MIN;
    cout<<"Enter elements : ";
    for(int i=0; i<n; i++) cin>>num[i];
    for(int i=0; i<n; i++){
        if(num[i]>max){
            smax = max;
            max = num[i];
        }
    }
    cout<<"Max : "<<max<<endl;
    cout<<"Min : "<<smax<<endl;
    return 0;

}