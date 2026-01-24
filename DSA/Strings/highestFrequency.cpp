//info ~~> print the most frequent occuring element in the string

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int arr[26]={0};
    for(int i=0; i<s.length(); i++){
        arr[((int)s[i]-97)]++;
    }
    int max=1;
    for(int i=0; i<26; i++){
        if(max<arr[i]){
            max=arr[i];
        } 
    }
    for(int i=0; i<26; i++){
        if(max==arr[i])  cout<<((char)(i+97))<<" "<<max<<endl;
    }
    return 0;
}