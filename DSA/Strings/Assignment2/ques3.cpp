//Q3. Input a string and return the number of substrings that contain only vowels
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        
        for(int j=1; j<=7-i;j++){
            string a=str.substr(i,j);
            for(int k=0; k<=j; k++){
                if(a[i]=='a')
            }
            cout<<a<<endl;
        }
    }
}