#include <iostream>
using namespace std;
int main(){
    for(int i=1; i<=10; i++){
        if(i<=5){
            for(int j=1; j<=5-i+1; j++) cout<<"* ";
            for(int j=2; j<=i; j++) cout<<"    ";
            for(int j=5; j>=i; j--) cout<<"* "; 
            cout<<endl;
        } else {
            for(int j=1; j<=i-5; j++) cout<<"* ";
            for(int j=4; j>=i-5; j--) cout<<"    ";
            for(int j=1; j<=i-5; j++) cout<<"* ";
            cout<<endl;
        }
    }
}