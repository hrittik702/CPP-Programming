#include <iostream>
#include <algorithm>
#include <climits>
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
    cout<<"1st Largest : "<<num.at(num.size()-1)<<endl;
    cout<<"2nd largest : "<<num.at(num.size()-2)<<endl;
    cout<<"3rd largest : "<<num.at(num.size()-3)<<endl;
}