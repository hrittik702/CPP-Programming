#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main(){
    string s,t;
    cin>>s;
    cin>>t;
    if(s.length()!=t.length()) {
        cout<<"False"<<endl;
        return 0;
    }
    vector <int> v(150,500);
    for(int i=0; i<min(s.length(),t.length()); i++){
        int idx=(int)(s[i]);
        int ascii=s[i]-t[i];
        if(v[idx]==500) v[idx]=ascii;
        else if(ascii!=v[idx]) {
            cout<<"False"<<endl;
            return 0;
        }
    }

    //refilling
    for(int i=0; i<150; i++) {
        v[i]=500;
    }
    for(int i=0; i<min(s.length(),t.length()); i++){
        int idx=(int)t[i];
        int ascii=t[i]-s[i];
        if(v[idx]==500) v[idx]=ascii;
        else if(ascii!=v[idx]) {
            cout<<"False"<<endl;
            return 0;
        }
    }
    cout<<"True"<<endl;
    return 0;

}