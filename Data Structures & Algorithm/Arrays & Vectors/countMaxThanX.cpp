#include <iostream>
using namespace std;
int main(){
    int n, num[(cin>>n,n)],x;
    for(int i=0; i<n; i++) cin>>num[i];
    cout<<"Enter target element : ";
    cin>>x;
    //working
    int count = 0;
    for(int i=0; i<n; i++){
        if(num[i]>x) count++;
    }
    cout<<count<<endl;
    return 0;
}