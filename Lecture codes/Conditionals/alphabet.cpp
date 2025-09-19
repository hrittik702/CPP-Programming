#include <iostream>
using namespace std;
int main(){
    char alpha;
    cin>>alpha;
    int a = (int)alpha;
    if((a>64 && a<91)||(a>96 && a<123)){
        cout<<"True, Alphabet";
    } else {
        cout<<"False Alphabet";
    }
}