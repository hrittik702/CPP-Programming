#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector <int> num;
    int size;
    cout<<"Enter size : ";
    cin>>size;
    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        num.push_back(x);
    }
    sort(num.begin(),num.end());
    int k;
    cout<<"Enter k : ";
    cin>>k;
    for(int i=1; i<=k; i++){
        cout<<"Largest "<<i<<" Element is : "<<num.at(num.size()-i)<<endl;
    }
}