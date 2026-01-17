//info ~~>

#include <iostream>
using namespace std;

int main(){
    int arr[] = {50,-10,-5,-5,-1,12,7,22,3,7,15,8,8,8,8,1,5,9,12,18,30,40,32,20,10,2,0,0,0,3,8,3,4,3,9,77,13,-2,100,999};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key, i =0;
    bool flag = false;

    cout<<"Enter key element : ";
    cin>>key;

    for(i=0; i<size; i++){
        if(key==arr[i]){
            flag = true;
            break;
        }
    }

    //results
    if(flag==false) cout<<"Element not found !"<<endl;
    else cout<<key<<" found at "<<i<<endl;
    return 0;
}