//check if the given array is sorted or not
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSorted(vector <int> &v){
    for(int i=0; i<v.size()-1;i++){
        if(v[i]>v[i+1]) return false;
    }
    return true;
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
    cout<<isSorted(v);
}
