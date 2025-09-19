#include <iostream>
#include <vector> //for using vector
using namespace std;
int main(){
    //vector initialization
    vector <int> v; //you need not mention the size 
    v.push_back(8);
    v.push_back(7);
    v.push_back(3);
    v.push_back(6);

    // v.at(2) = 90;
    // cout<<v.at(2);

    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
}