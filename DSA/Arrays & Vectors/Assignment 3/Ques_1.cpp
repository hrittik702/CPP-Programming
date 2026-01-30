//find the number of triplets whose sum is equal to the given number x
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findTriplets(vector<int> &v, int x){
    if(v.size()==2||v.size()==1) {
        cout<<"Size is not enough to find triplet"<<endl;   
        return 0;
    }
    int count=0;
    for(int i=0; i<v.size()-2; i++){
        for(int j=i+1; j<v.size()-1; j++){
            for(int k=j+1; k<v.size(); k++){
                if(v[i]+v[j]+v[k]==x) {
                    cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
                    count++;     
                }  
            }
        }
    }
    return count;
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
    int x;
    cin>>x;
    cout<<findTriplets(v,x);
}
