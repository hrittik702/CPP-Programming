#include <iostream>
using namespace std;

int aRaiseb(int a, int b){
    if(b==0) return 1;
    return a*aRaiseb(a,b-1);
}

//above solution is little bit time consuming
int powerLog(int a,int b){
    if(b==1) return a; 
    int ans=powerLog(a,b/2);
    if(b%2==0) return ans*ans;
    else return ans*ans*a;
}

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    // cout<<aRaiseb(a,b)<<endl;
    cout<<powerLog(a,b)<<endl;
}