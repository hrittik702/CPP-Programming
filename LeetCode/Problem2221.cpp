#include <iostream>

using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    
    for(int i=1; i<=5; i++){
        for(int j=0; j<5; j++){
            int ans = arr[j]+arr[j+1];
            ans = ans%10;            
            arr[j]=ans;
        }    
    }
    cout<<arr[0]<<endl;



}