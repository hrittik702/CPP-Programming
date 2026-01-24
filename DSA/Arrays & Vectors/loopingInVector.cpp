//info ~~> in this i learn about the looping in vector concept
//problem -> i have to find the last occurence(index) of a integer x in the given array

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    int size;
    cout<<"Enter size : ";
    cin>>size;
    for(int i=0; i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    
    int x;
    cout<<"Enter x : ";
    cin>>x;

    //soln 1 -> i use a third varriable which store the occurence index of int x
    int occurence=-1;
    for(int i=0; i<v.size(); i++){
        if(x==v.at(i)) occurence=i;
    }
    cout<<x<<" last time found at : "<<occurence<<endl;

    //sol 2 -> run a loop from last to find x, the first time x occur then it is the answer
    for(int i=v.size()-1; i>=0; i--){
        if(x==v.at(i)) {
            cout<<x<<" occured at "<<i<<endl;
            break;
        }
    }
    return 0;
}