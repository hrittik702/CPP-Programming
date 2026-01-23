//ques-> Input a string of size n and update all the odd 
//positions in the string to character ‘#’. Consider
//0-based indexing.
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int l=str.length();
    for(int i=1; i<l; i=i+2){
        str[i]='#';
    }
    cout<<str;
    return 0;
}