//info ~~> new is a reserved keyword

#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream str(s);
    string temp;
    while(str>>temp){
        cout<<temp<<endl;
    }
    return 0;
}