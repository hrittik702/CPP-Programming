#include <iostream>
#include <vector> //for using vector
using namespace std;
int main(){
    //vector initialization
    vector <int> v; //you need not mention the size 
    v.push_back(7);
    v[1] = 4; // 7 8 9 - do not use brackets
    v.push_back(8);
    v.push_back(9);
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
}