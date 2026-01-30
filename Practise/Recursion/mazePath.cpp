#include <iostream>
using namespace std;

int mazePath(int sr,int sc, int er, int ec,string s){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) {
        cout<<s<<endl;
        return 1;
    }
    int rightWays=mazePath(sr,sc+1,er,ec,s+"R");
    int downWays=mazePath(sr+1,sc,er,ec,s+"D");
    return rightWays+downWays;
}

//reverse
int mazePath2(int er,int ec, string s){
    if(er<0 || ec<0) return 0;
    if(er==1 && ec==1) {
        cout<<s<<endl;   
        return 1;
    }
    int right=mazePath2(er,ec-1,s+"R");
    int down=mazePath2(er-1,ec,s+"D");
    return right+down;
}

int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;
    cout<<mazePath(1,1,row,col,"")<<endl;
    cout<<endl;
    cout<<mazePath2(row,col,"");
}