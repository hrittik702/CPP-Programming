#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector <int> &v, int target){
    int lo=0,hi=v.size()-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==target) return mid;
        else if(v[mid]>target) hi=mid-1;
        else lo=mid+1;
    }
    return -1;
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
    cout<<"target : ";
    cin>>target;
    cout<<binarySearch(nums,target);
    return 0;
}