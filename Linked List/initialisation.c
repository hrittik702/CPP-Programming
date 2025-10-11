#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>

//creating a custom data type -> node 
//following part ko globally initialise krna pdega taki sb access kr ske
struct node {
    int data;
    struct node *next;
};

//creating head node to store address of first node 

struct node *head = NULL; //one liner mein work kr gya but 
//2 liner mein work nhi kiya kyunki -> head=NULL; is a execution 
//isko main function ke andar likhna pdega

// creating a function for inserting a node from begin 
void insertFromBegin(int x){
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p -> data = x;
    p -> next = head;
    head = p;
    printf("%d inserted successfully !\n",x);
}

//creating a function for inserting a node from last
void insertFromLast(int x){
    struct node *r;
    r = (struct node *)malloc(sizeof(struct node));
    r -> data = x;
    r -> next = NULL;
    // head = r; -> this is the main problem of mistaken 
    printf("%d create into p node !\n",x);

    // //or hum direct insert form begin function ko call kr skte the
    // insertfromBegin(x);

    //create a node q -> traverse it to last node
    struct node *q;
    q = head;
    while(q->next!=NULL){
        q = q -> next;
    }
    //q=last node and now assign it to created node p
    q -> next = r;
    printf("Task Done !\n");
}

//creating a function for the printing or travesing linked list
void traverseData(){
    struct node *s;
    s=head;
    if(s==NULL){
        printf("Empty !");
        return;
    }
    while(s->next!=NULL){
        printf("%d ",s->data);
        s=s->next;
    }
    printf("%d ",s->data);
    return;
}

int main(){
    insertFromBegin(20);
    insertFromBegin(40);
    insertFromLast(5);
    traverseData();
}