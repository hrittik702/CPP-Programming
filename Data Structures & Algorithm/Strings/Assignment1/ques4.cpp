// input a string of even length and reverse the second half of the string.
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int l=s.length();
    reverse(s.begin()+l/2,s.end());
    cout<<s<<endl;
    return 0;
}