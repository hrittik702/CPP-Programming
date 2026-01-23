// Q5. Input a string of length less than 10 and convert it into integer without using builtin function.
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int num=0;
    for(int i=0; s[i]!='\0'; i++){
        num*=10;
        num+=((int)s[i]-48);
    }
    cout<<num<<endl;
}