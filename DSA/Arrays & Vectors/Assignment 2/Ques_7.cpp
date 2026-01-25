// If an array arr contains n elements, then check if 
//the given array is a palindrome or not
//1,3,5,3,1 == its reverse(1,3,5,3,1)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPalindrome(vector <int> &v){
    int i=0,j=v.size()-1;
    while(i<j){
        if(v[i]!=v[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    vector <int> v;
    int size;
    cin>>size;
    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<isPalindrome(v);
}
