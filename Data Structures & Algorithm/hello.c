#include<stdio.h>
int main(){
    int i,size,flag,temp=0;
    printf("total size required");
    scanf("%d",&size);
    int a[size];
    printf("Enter the values");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);     
    }

    printf("Enter the element");
    scanf("%d",&flag);
    for(i=0;i<4;i++){
        if( a[i]== flag){
            temp=1;
            break;
        } 

    }
    if(temp=1){
        printf(" no of found at %d",i);
    }
    else{
        printf("no not found");
    }
    return 0; 
}