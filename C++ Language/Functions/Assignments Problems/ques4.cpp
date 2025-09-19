// Write a function to count the number of digits in a number and then print the square of this number.
#include <iostream>
using namespace std;
int count = 0;
// int countDigits(int x){
//     return 0;
// }


// //for decimal part
// int countAfterDecimal(float n){
//     //n=4063.5634
//     int bd = n; //4063
//     float ad = n-bd; //0.5634
//     while(ad!=0){
//         ad *= 10; //5.634
//         int counter = ad; //5
//         ad = ad - counter;
//         count++;
//     }
//     return 0;
// }

int main(){
    float n;
    cout<<"Enter number : ";
    cin>>n;
    // countAfterDecimal(n);
    count = 0;
    int bd = n;
    cout<<bd<<endl; //4063
    float ad = n-bd; //0.5634
    cout<<ad<<endl;
    int a =4;
    while(a>=0){
        if(ad>=0){
            ad *= 10; //5.634
            cout<<ad<<endl;;
            int counter = ad; //5
            cout<<counter<<endl;
            ad = ad - counter;
            cout<<ad<<endl;
            count++;
            a--;
        }
    }
    // while(ad<0){
    //     ad *= 10; //5.634
    //     int counter = ad; //5
    //     ad = ad - counter;
    //     count++;
    //     cout<<count<<endl;
    // }
    cout<<count<<endl;
    return 0;
}