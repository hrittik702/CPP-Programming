#include <iostream>
using namespace std;
int power(int a, int b){
    if(b==0) return 1;
    return a*power(a,b-1);   
}

int main(){
    int n,x;
    cout<<"Enter a : ";
    cin>>x;
    cout<<"Enter b : ";
    cin>>n;
    cout<<x<<"^"<<n<<" = "<<power(x,n)<<endl;
    return 0;
}