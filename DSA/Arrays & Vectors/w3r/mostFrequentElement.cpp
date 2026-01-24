#include <iostream>
#include <vector>
using namespace std;

// struct node {
//     int data;
//     int frequency;
//     struct node *link;
// } 
// struct node *start = NULL;

//bubble sort
void bubbleSort(int arr[], int size){
    int p=0, q=size-1;
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}


int main(){
    int size;
    vector <int> v;
    cout<<"Enter size : ";
    cin>>size;
    int num[size];
    for(int i=0; i<size; i++){
        cin>>num[i];
    }
    bubbleSort(num,size);
    // for(int i=0; i<size; i++){
    //     cout<<num[i]<<" ";
    // }
    cout<<endl;
    int idx=0,c1=0;
    bool flag1=false;
    for(int i=0; i<=size; i++){
        if(num[i]!=num[i+1]){
            continue;
        } else {
            int key=num[i],count=0;
            int j=i;
            while(key==num[j]){
                count++;
                j++;
            }
            v.push_back(key);
            v.push_back(count);
            // struct node *p=(struct node*)malloc(sizeof(struct node));
            // p->data=num[i];
            // p->frequency=count;
            // if(start==NULL){
            //     p->link=start;
            //     start=p;
            // } else {
            //     start->link=p;
            // }
            i=j-1;
        }
    }
    // struct node *temp=start;
    // while(temp!=NULL){
        
    // }
    for(int i=0; i<v.size(); i=i+2){
        cout<<v.at(i)<<" -> "<<v.at(i+1)<<endl;
    }
    int answerIndex,key;
    for(int i=1; i<v.size()-1; i=i+2){
        int j;
        if(v.at(i)>v.at(i+2)){
            key = v.at(i);
            j=i;
        } else {
            key=v.at(i+2);
            j=i+2;
        }
        while(j<v.size()-2){
            if(v.at(j)<v.at(i+2)){
                j=i+2;
                key=v.at(j);
                i=i+2;
            } 
            else {
                i=i+2;
            }
        }
        break;
    }
    
    
    cout<<"Most frequent element is : "<<v.at(answerIndex)<<endl;

}