#include <iostream>
using namespace std;

//waf to check eligibility of voting
string vote(int age){
    if(age>=18) cout<<"Yes";
    if(age<18) cout<<"No";
}

int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    vote(age);
    return 0;
}


