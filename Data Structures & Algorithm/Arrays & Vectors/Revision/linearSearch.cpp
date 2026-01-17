//info ~~> linear search is like matching the key element to every element of the array
//one by one, if it matches the key then it return true;

//i am going to do it by flag method

#include <iostream>
using namespace std;
// Test arrays for linear search covering all major constraints
int a1[]  = {4, 12, 7, 9, 1, 22, 15};                     // normal random
int a2[]  = {50, 2, 3, 4, 5};                             // target at start
int a3[]  = {2, 3, 4, 5, 50};                             // target at end
int a4[]  = {7, 7, 7, 7, 7};                              // all same
int a5[]  = {3, 8, 3, 4, 3, 9};                           // multiple occurrences
int a6[]  = {-5, -2, 0, 7, 12};                           // includes negative numbers
int a7[]  = {1, 5, 9, 12, 18, 30};                        // sorted array
int a8[]  = {40, 32, 20, 10, 2};                          // reverse sorted
int a9[]  = {};                                           // empty array (rarely useful alone)
int a10[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};               // small version of large array case

int main(){
    
    cout<<"Enter key element : ";
    int key;
    cin>>key;

    bool flag = false; //flag method

    int i=0; //declaring outside because i have to use it even after the loop ends(scope of varriable)
    for(i=0; i<10; i++){
        if(key==a1[i]) {
            flag = true;
            break;
        }
    }
    
    if(flag == false) cout<<"Element not found !"<<endl;
    else cout<<"Element found at "<<i<<endl;
    return 0;
}