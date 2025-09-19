#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    v.push_back(2);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    v.push_back(6);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    v.push_back(7);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    v.pop_back();
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

}