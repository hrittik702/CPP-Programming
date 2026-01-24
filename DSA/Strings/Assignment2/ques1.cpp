//Q1. Input a string and concatenate with its reverse string and print it.
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string a=str;
    reverse(str.begin(),str.end());
    a+=str;
    cout<<a;
    return 0;
}