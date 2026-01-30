#include <iostream>
#include <vector>
using namespace std;
int lowerBound(vector <int> &v, int item){
    if(item>v[v.size()-1]) return v.size();
    int lo=0,hi=v.size()-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==item) return mid-1;
        else if(v[mid]>item) hi=mid-1;
        else lo=mid+1;
    }
    return lo;
}

int main(){
    vector <int> nums;
    int size;
    cin>>size;
    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cin>>target;
    cout<<lowerBound(nums,target);
    return 0;
}