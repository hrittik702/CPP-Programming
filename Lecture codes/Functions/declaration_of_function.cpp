#include <iostream>
using namespace std;
//return_type function_name(){
//     -------
//     block of code
//     -------
// }

int cube(int x){
    return x*x*x;
}
//it is a function of finding cube of number

int main(){
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<"cube of "<<a<<" is "<<cube(a);
    return 0;
}