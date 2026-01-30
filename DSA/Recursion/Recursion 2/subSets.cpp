#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//total no. of subsets of set having n elements = 2^n
void subsets(string a,string b){
    if(b==""){
        cout<<"'"<<a<<"',"<<" ";
        return;
    }
    subsets(a,b.substr(1));
    subsets(a+b[0],b.substr(1));
    
}

int main(){
    subsets("","abc");
}