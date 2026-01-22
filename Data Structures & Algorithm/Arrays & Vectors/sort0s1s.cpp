#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0; i<8; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int sum=0;
    for(int i=0; i<8; i++){
        sum+=v[i];
    }
    // cout<<sum;
    vector<int> b;
    for(int i=0; i<8; i++){
        if(i<8-sum){
            b.push_back(0);
        } else {
            b.push_back(1);
        }
    }
    for(int i=0; i<8; i++){
        cout<<b[i]<<" ";
    }
}