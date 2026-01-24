#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
    getline(cin,s);
    int idx=0;
    for(int i=0; i<s.length()-1; i++){
        int a = s[i]-'0';
        int b = s[i+1]-'0';
        if(a<b) idx=i+1;
    }
    cout<<idx;
	return 0;
}