// Calculate the product of all the elements in the given array.
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter size of array : ";
    int n, num[(cin>>n,n)];
    int product = 1;
    for(int i=0; i<n; i++) {
        cin>>num[i];
        product *= num[i];
    }
    cout<<"Product = "<<product<<endl;
    return 0;

}