// Find the factorial of a large number.
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int facto(int n){
    if(n==0||n==1) return 1;
    return n*facto(n-1);
}

int factorialOFLargest(vector<int> &v){
    sort(v.begin(),v.end());
    return facto(v[v.size()-1]);
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
    cout<<factorialOFLargest(v);
}
