#include <iostream>
#include <vector>
using namespace std;

void display(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void displayVector(vector <int> v){
    for(int j=0; j<v.size(); j++){
        cout<<v.at(j)<<" ";
    }
}