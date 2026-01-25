// Count the number of elements strictly greater than x
#include <iostream>
#include <vector>
using namespace std;
int countStrictMax(vector <int> &v, int ITEM){
    int count=0;
    for(int i=0; i<v.size();i++){
        if(v[i]>ITEM) count++;
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
    int item;
    cin>>item;
    cout<<countStrictMax(v,item);

}