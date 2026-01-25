//Given an array of integers, change the value of 
// all odd indexed elements to its second multiple  
// and increment all even indexed values by 10
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void changeVector(vector <int> &v){
    for(int i=0; i<v.size(); i++){
        if(i%2==0) v[i]+=10;
        else v[i]*=2;
        cout<<v[i]<<" ";
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
    changeVector(v);
}
