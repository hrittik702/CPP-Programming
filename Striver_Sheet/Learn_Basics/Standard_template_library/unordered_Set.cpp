#include <iostream>
#include <stdc++.h>
int main(){
    //declaring unordered set of integeres
    unordered_set s;
    
    //filling set
    for(int i=0; i<10; i++){
        s.insert(i);
    }

    //elements in set s
    for(auto it=s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}