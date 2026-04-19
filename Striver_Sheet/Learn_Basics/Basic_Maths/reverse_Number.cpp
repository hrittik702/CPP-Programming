#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//brute force method
string rev_num(int x){
    if(x<0) x=-x;
    int rev_num=0;
    char c='0';
    string e;
    int x_dup=x;
    while(x_dup%10==0){
        e+=c;
        x_dup/=10;        
    }
    while(x>0){
        int digit=x%10;
        rev_num=(rev_num*10)+digit;
        x/=10;
    }
    string d = to_string(rev_num);
    e=e+d;
    return e;
}

//optimal approcah
string rev_num2(int n){
    string num=to_string(n);
    reverse(num.begin(),num.end());
    return num;
}

int main(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<rev_num2(n)<<endl;
}