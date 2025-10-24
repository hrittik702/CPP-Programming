#include <iostream>
using namespace std;

int main(){//for practise i take arr[] which almost cover all cases & constraints
    int key,size=10;
    int arr[size] = {18,-4,22,5,47,5,0,99,12,-30};
    cout<<"Enter element : ";
    cin>>key;

    //version 1 -> simple
    int i;
    bool flag=false;
    for(i=0; i<size; i++){
        if(arr[i] == key){
            flag=true;
            break;
        }
    }

    if(flag==false) cout<<"Element not found"<<endl;
    else cout<<"Found at : "<<i<<"th index"<<endl;
    

}