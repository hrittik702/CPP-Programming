#include <iostream>
#include <cmath>
using namespace std;

//brute-force method
int count_digit(int x){
    int count=0; 
    while(x>0){
        x=x/10;
        count++;
        
    }
    return count;
}

//optimal approach
int count_digit2(int x){
    //log10(999)=2.83+1=3
    int count=(int)log10(x)+1;
    return count;
}

int main(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<count_digit2(n)<<endl;
}