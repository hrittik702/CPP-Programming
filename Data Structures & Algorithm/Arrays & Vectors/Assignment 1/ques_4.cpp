//Given an array, predict if the array contains duplicates or not.
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter size of array : ";
    int n,num[(cin>>n,n)];
    cout<<"Enter elements : ";
    for(int i=0; i<n; i++) cin>>num[i];
    int c;
    for(int i=0; i<n; i++){
        int count = 0;
        int testcase = num[i];
        for(int j=0; j<n;  j++){
            if(testcase == num[j]) count++;
        }
        c = count;
    }
    if(c>1) {
            cout<<"Yes! Duplicates are present";
    } else cout<<"nope";
    return 0;
}