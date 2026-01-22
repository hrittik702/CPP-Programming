//info ~~> rotate part araray
//if k>=7 


#include <iostream>
#include <vector>
using namespace std;
void reversePart(int i, int j, vector <int> &v){
    while(i<=j){
        int temp=v.at(i);
        v.at(i)=v.at(j);
        v.at(j)=temp;
        i++;
        j--;
    }
    return ;
}

void rotateKarray(vector <int> &v, int k){
    int n=v.size();
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
}
int main(){
    vector<int> a;
    for(int i=0; i<7; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    int k;
    cin>>k;
    k=k%7; //mod by size of array 
    rotateKarray(a,k);
    for(int i=0; i<a.size(); i++){
        cout<<a.at(i)<<" ";
    }
    return 0;
}