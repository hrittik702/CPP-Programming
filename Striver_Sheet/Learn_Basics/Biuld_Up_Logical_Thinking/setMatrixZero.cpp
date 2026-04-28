#include <iostream>
using namespace std;
int main(){
    int arr[3][4]= {1,1,1,1,0,1,1,1,1,1,1,1};
    int row,col;
    //for searching the index of 0
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j]==0) {
                row=i;
                col=j;
            }
        }
    }

    //for setting row , col of 0 = 0
    for(int k=0,m=0; k<3,m<4; k++,m++){
        arr[row][k]=0;
        arr[m][col]=0;
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}