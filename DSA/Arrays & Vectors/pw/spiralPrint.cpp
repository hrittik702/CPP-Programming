//info ~~>

#include <iostream>
using namespace std;

int main(){
    int row, col;
    cin>>row;
    cin>>col;
    int minRow=0, maxRow=row-1;
    int minCol=0, maxCol=col-1;
    int arr[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    //for wave printing printing
    for(int i=0; i<row; i++){
        int j=minCol;
        while(j<=maxCol){
            cout<<arr[minRow][j]<<" ";
            j++;
        }
        minRow++;
        if(minRow>maxCol || minCol>maxCol){
            break;
        }
        j=minRow;
        while(j<=maxRow){
            cout<<arr[j][maxCol]<<" ";
            j++;
        }
        maxCol--;
        j=maxCol;
        while(j>=minCol){
            cout<<arr[maxRow][j]<<" ";
            j--;
        }
        maxRow--;
        j=maxRow;
        while(j>=minRow){
            cout<<arr[j][minCol]<<" ";
            j--;
        }
        minCol++;
    }
    return 0;
}