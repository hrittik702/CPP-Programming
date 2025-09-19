//Find the minimum value out of all elements in the array.
#include <iostream>
#include <climits>
using namespace std;
int main(){
    cout<<"Enter size of array : ";
    int n, num[(cin>>n,n)];
    for(int i=0; i<n; i++) cin>>num[i];
    int min = INT_MAX;
    for(int i=0; i<n; i++) {
        if(num[i]<min) min=num[i];
    }
    cout<<"minimum : "<<min<<endl;
    return 0;

}