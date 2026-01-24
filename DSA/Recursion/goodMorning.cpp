#include <iostream>
using namespace std;
void goodMorning(int n,string str){
    if(n==0) return;
    cout<<"Good Morning! "<<str<<endl;
    goodMorning(n-1,str);
    return;
}
int main(){
    cout<<"Your Name : ";
    string s;
    cin>>s;
    int n;
    cin>>n;
    goodMorning(n,s);
    return 0;
}