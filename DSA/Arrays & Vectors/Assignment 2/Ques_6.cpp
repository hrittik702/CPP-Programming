//Find the unique number in a given Array where all the elements 
// are being repeated twice with one value being unique
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void findUnique(vector <int> &v){
    if(v.size()%2==0) {
        cout<<"All Elements are twice!"<<endl;
        return;
    }
    sort(v.begin(),v.end());
    for(int i=0,j=1;i<v.size()-1,j<v.size();i+=2,j+=2){
        if(v[i]!=v[j]) {
            cout<<"Unique Element : "<<v[i]<<endl;
            return;
        }
    }
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
    findUnique(v);
}
