#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

//function for flipping 0's and 1's
void flipRow(vector <int> &row){
    for(int i=0; i<row.size(); i++){
        if(row[i]==0) row[i]=1;
        else row[i]=0;
    }
}

// void flipCol(vector<vector)

//function for binary to decimal
int b2D(vector <int> &v){
    int num=0;
    for(int i=0; i<v.size(); i++){
        num+=pow(2,i)*(                                                                                                v[v.size()-i-1]);
    }
    return num;
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
    cout<<b2D(v);
}