#include <iostream>
using namespace std;

int count_digit(int x){
    int count=0; 
    while(x>0){
        x=x/10;
        count++;
        
    }
    return count;
}

int main(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<count_digit(n)<<endl;
}