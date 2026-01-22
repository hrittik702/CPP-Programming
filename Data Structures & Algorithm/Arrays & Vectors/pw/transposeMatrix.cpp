//info ~~>

#include <iostream>
using namespace std;

int main(){
    int row, col;
    cin>>row;
    // cin>>col;
    col=row;
    int arr[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    //for transpose of matrix
    for(int i=0; i<row-1; i++){
        for(int j=i+1; j<col; j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    int i=0, j=col-1;
    while(i<j){
        for(int k=0; k<row; k++){
            int temp=arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=temp;
        }
        i++;
        j--;
    }
    cout<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}