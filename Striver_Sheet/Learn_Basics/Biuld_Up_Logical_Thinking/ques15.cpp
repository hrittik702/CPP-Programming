#include <iostream>
using namespace std;
int main(){
    for(int i=5; i>0; i--){
        char c = 'A';
        for(int j=1; j<=i; j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}