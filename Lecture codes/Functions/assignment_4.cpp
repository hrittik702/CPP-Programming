#include <iostream>
using namespace std;

//waf to print all odd number between two numbers
void odd_num(int x, int y){
    for(int i=x; i<=y; i++){
        if(i%2 != 0){
            cout<<i<<" ";
        } 
    }
}

int main(){
    int num1,num2;
    cout<<"Enter number 1 : ";
    cin>>num1;
    cout<<"Enter number 2 : ";
    cin>>num2;
    odd_num(num1,num2);
    return 0;
}