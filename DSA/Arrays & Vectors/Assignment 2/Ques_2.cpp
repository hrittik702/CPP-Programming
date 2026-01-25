//WAP to find the largest 3 elements in the array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void largest3Elements(vector <int> &v){
    sort(v.begin(),v.end());
    for(int i=3; i>=1; i--){
        cout<<v[v.size()-i]<<" ";
    }
    cout<<endl;
    return;
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
    largest3Elements(v);
}