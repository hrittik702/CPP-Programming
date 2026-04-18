#include <iostream>
using namespace std;
int main(){
    for(int i=1; i<=10; i++){
        if(i<=5){
            for(int j=0; j<i; j++){
                cout<<"*";
            }
            cout<<endl;
        } else {
            for(int j=5; j>i-5; j--){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}