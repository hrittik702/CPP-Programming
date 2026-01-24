#include <iostream>
using namespace std;
//mazepath version 1 for calculating no of ways only
int mazePath(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = mazePath(sr,sc+1,er,ec); //right move
    int downWays = mazePath(sr+1,sc,er,ec); //down move
    return downWays+rightWays;
}

//version 2 -> using version 1 print path
void printMazePath(int sr, int sc, int er, int ec,string s){
    if(sr>er || sc>ec) return; //out of maze
    if(sr==er && sc==ec) { //destination reached
        cout<<s<<endl;
        return;
    } 
    printMazePath(sr,sc+1,er,ec,s+'R'); //append R to string for right move
    printMazePath(sr+1,sc,er,ec,s+'D'); //append D to string for down move
}

//version 3-> using 2 parameter only basically reverse the pyschology
int mazePath2(int row, int col){
    if(row<1||col<1) return 0; //out of maze
    if(row==1&&col==1) return 1; //destination reached
    int rightWays=mazePath2(row,col-1); //right move
    int downWays=mazePath2(row-1,col); //down move
    return rightWays+downWays;
}

//version 4-> printing pathways using version 3
void printMazePath2(int row, int col, string str){
    if(row<1||col<1) return;
    if(row==1&&col==1){
        cout<<str<<endl;
        return;
    } 
    printMazePath2(row,col-1,str+'R');
    printMazePath2(row-1,col,str+'D');
}
int main(){
    cout<<mazePath(1,1,3,3)<<endl;
    printMazePath(1,1,3,3,"");
    cout<<endl;
    cout<<mazePath2(3,3)<<endl;
    printMazePath2(3,3,"");
}