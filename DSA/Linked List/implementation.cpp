#include <iostream>
using namespace std;
class node {
public :
    int value;
    node* next;
}
node *head = NULL;

int main(){
    node a,b,c;
    a.value=10;
    a.next=&b;
    b.value=20;
    b.next=&c;
    c.value=30;
    c.next=NULL;
    
}