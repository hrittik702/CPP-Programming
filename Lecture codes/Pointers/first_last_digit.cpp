#include <iostream>
using namespace std;
int digit(int *x){
    int ld,fd;
    //for last digit
    ld = *x%10;
    //for first digit
    if(*x<9) cout<<"First and last digits are same i.e "<<ld<<endl;
    else {
        while(*x>9){
            *x = *x/10;
            fd = *x;
        }
        cout<<"First digit = "<<fd<<endl;
        cout<<"Last digit = "<<ld<<endl;
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter n : ";
    digit(&(cin>>n,n));
    return 0;
}