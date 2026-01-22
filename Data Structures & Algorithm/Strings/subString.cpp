//return second half of string using inbuilt str function
#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int l=(s.length())/2;
    //s.substr(idx,len);
    
    cout<<s.substr(l);
}