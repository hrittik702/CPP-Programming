#include <iostream>
using namespace std;
//factorial function
int fact(int x){
    int facto=1;
    for(int i=1;i<=x;i++){
        facto*=i;
    }
    return facto;
}

//for computing ncr
int nCr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

//for pascal's traingle 
void pascalTriangle(int row){
    for(int i=0; i<row; i++){
        for(int j=0; j<=i; j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    int row;
    cout<<"Enter no. of rows : ";
    cin>>row;
    for(int i=0; i<=row; i++){
        for(int j=0; j<row+1-i; j++){
            cout<<"  ";
        }
        for(int k=0; k<=i; k++){
            cout<<nCr(i,k)<<" ";
            if(i>=1) cout<<"  ";
        }
        cout<<endl;        
    }
    // pascalTriangle(row);
}