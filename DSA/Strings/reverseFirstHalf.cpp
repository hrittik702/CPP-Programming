#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int l=(s.length())/2;
    reverse(s.begin()+0, s.begin()+l+1);
    cout<<s;
}