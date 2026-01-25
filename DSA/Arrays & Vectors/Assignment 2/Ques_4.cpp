// Find the difference between the sum of elements at even indices to 
// the sum of elements at odd indices
//check if the given array is sorted or not
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int evenOddDiff(vector <int> &v){
    int esum=0,osum=0;
    for(int i=0; i<v.size();i++){
        if(i%2==0) esum+=v[i];
        else osum+=v[i];
    }
    cout<<esum<<"-"<<osum<<" : ";
    return esum-osum;
}

int main(){
    vector <int> v;
    int size;
    cin>>size;
    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<evenOddDiff(v);
}
