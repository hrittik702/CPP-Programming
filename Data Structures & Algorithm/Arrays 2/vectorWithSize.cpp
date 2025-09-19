#include <iostream>
#include <vector>
using namespace std;
int main(){
    // without size
    vector<int> v1(5);  //each element = 0;
    for(int i=0; i<5; i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    vector <int> v2(5,7); //each element = 7;
    for(int i=0; i<5; i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    

}