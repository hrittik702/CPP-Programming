#include <iostream>
#include <vector>
#include <climits>
using namespace std;
//vector input
void input(vector <int> arr){
    for(int i=0; i<arr.size(); i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
}

int main(){
    vector <int> num;
    input(num);
    int min=INT_MAX;
    for(int i=0; i<num.size();i++){
        if(min<num.at(i)){
            min=num.at(i);
        }
    }
    cout<<"The largest element is : "<<min<<endl;
    
}
 