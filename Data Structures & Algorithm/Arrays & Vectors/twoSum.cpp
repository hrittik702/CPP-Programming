//info ~~>

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> v;
    int size;
    cout<<"Enter size : ";
    cin>>size;
    //loop for vector input
    for(int i=0; i<size;i++){
        int x;
        cin>>x;
        v.push_back(x); 
    }

    int sum;0      cout<<"Enter x : ";
    cin>>sum;
    // two pointer approach
    for(int i=0; i<v.size(); i++){
        for(int j=i; j<v.size(); j++){
            if((v.at(i)+v.at(j))==sum){
                cout<<"("<<v.at(i)<<", "<<v.at(j)<<")"<<endl;
            }

        }
    }

    //a better two pointer approach
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        for(int j=v.size()-1; j>=i; j--){
            if((v.at(i)+v.at(j))==sum){
                cout<<"("<<v.at(i)<<", "<<v.at(j)<<")"<<endl;
            }
        }
    }
    return 0;
}