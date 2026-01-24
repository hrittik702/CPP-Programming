//count all the constants in the given string
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    cout<<"Enter string : ";
    string str;
    getline(cin,str);
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') continue;
        else count++;
    }
    cout<<count;
    return 0;
}