#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter x : ";
    int *px = &(cin>>x,x);
    cout<<"enter y : ";
    int *py = &(cin>>y,y);
    cout<<"x+y = "<<x+y<<endl;
    cout<<"px+py = "<<*px+*py<<endl;
    return 0;
}