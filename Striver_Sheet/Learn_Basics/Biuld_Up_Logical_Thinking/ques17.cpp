#include <iostream>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){
        for(int j=i; j<=4; j++) cout<<"  ";
        char c='A';
        for(int j=1; j<=i; j++) cout<<c++<<" ";
        c='A'+i-2;
        for(int j=2; j<=i; j++) cout<<c--<<" ";
        cout<<endl;
    }
}