//info ~~> reverse a array

#include <iostream>
#include <vector>
#include <algorithm> //for using std:sort
using namespace std;
void display(vector<int> &a){
    for(int i=0; i<a.size(); i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}

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
    display(v);
    for(int i=0,j=v.size()-1; i<j; i++,j--){
        v.at(i)=v.at(i)+v.at(j);
        v.at(j)=v.at(i)-v.at(j);
        v.at(i)=v.at(i)-v.at(j);
    }
    display(v);

    return 0;
}