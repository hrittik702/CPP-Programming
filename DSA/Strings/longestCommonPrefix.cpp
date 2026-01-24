#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector <string> v;
    for(int i=0; i<size; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    string a=v[0];
    string b=v[size-1];
    string s;
    int i=0;
    while(a[i]==b[i]){
        s+=a[i];
        i++;
    }
    cout<<s<<endl;
    return 0;
}