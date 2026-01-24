#include <iostream>
#include <vector>
using namespace std;
int 

//function for the pascals Traingle
// void pascalsTriangle(int n){
    // vector < vector <int> > v(n);
    // for(int i=0; i<n; i++){
    //     vector <int> v1[i+1];
    //     v.push_back(v1);
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         if(j==0 || j==1) v[i][j]=1;
    //         else v[i][j]=v[i-1][j]+v[i-1][j+1];
    //     } 
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<v[i].size; j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
// }

int main(){
    vector < vector <int> > v(n);
    for(int i=0; i<n; i++){
        vector <int> v1[i+1];
        v.push_back(v1);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(j==0 || j==1) v[i][j]=1;
            else v[i][j]=v[i-1][j]+v[i-1][j+1];
        } 
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<v[i].size; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}