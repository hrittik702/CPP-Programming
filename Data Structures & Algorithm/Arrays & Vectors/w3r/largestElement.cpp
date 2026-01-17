#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[6] = {34,65,32,75,36};
    int min=INT_MIN;
    for(int i=0; i<6;i++){
        if(min<arr[i]){
            min=arr[i];
        }
    }
    cout<<"Lagrest number is : "<<min<<endl;
}