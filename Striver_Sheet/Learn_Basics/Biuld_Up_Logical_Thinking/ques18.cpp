#include <iostream>
using namespace std;
int main(){
    char c='E';
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++) cout<<c++<<" ";
        c=c-i-1;
        cout<<endl;
    }
}