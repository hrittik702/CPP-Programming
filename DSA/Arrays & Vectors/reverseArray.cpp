//info ~~> reverse a array

#include <iostream>
#include <vector>
#include <algorithm> //for using std:sort
using namespace std;

int main(){
    vector <int> v;
    int n;
    cout<<"Enter size : ";
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    //for printing vector
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    //reversing array using a another vector
    vector <int> a;
    for(int i=0; i<v.size();i++){
        int x;
        x = v.at((v.size()-i-1));
        a.push_back(x);
    }
    for(int i=0; i<a.size(); i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
    return 0;
}