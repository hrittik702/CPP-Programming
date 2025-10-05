#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of students : ";
    int studentMarks[(cin>>n,n)]; 
    //taking input of marks of students by using loop
    for(int i=0; i<n; i++){
        cout<<"Enter marks of student "<<i+1<<" : ";
        cin>>studentMarks[i];
    }

    //for checking whose marks is less than 35
    cout<<"Roll no. of students whose marks are less than 35"<<endl;
    for(int j=0; j<n; j++){
        if(studentMarks[j]<35) cout<<"Roll no. : "<<j+1<<endl;;
    }
    return 0;
}