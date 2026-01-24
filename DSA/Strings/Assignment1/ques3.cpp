//Check whether the given string is palindrome or not.
//str="abcdcba" -> yes

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int l=str.length(); //l=7
    string a = str.substr(0,l/2);
    string b;
    if(l%2!=0) {
        b=str.substr(l/2+1);
        reverse(b.begin(),b.end());
    }
    else {
        b=str.substr(l/2);
        reverse(b.begin(),b.end());
    }
    if(a==b) cout<<"Given string is palindrome!"<<endl;
    else cout<<"Given string is not palindrome!"<<endl;
    return 0;
}