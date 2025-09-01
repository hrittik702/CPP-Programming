#include <iostream>
using namespace std;
int main(){
    //prince sir
    int stud[75],k;
    cout<<"Enter no. of intake of students : ";
    cin>>k;
    for(int i=0; i<k; i++){
        cin>>stud[i];
    }

    //for printing array
    for(int i=0; i<k; i++){
        cout<<"Student "<<i+1<<" : "<<stud[i]<<endl;
    }
}