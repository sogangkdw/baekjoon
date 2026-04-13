#include <stdio.h>
#include <stdlib.h>
#define IS_FULL(a) (!(a))
#define IS_EMPTY(a) (!(a))

typedef struct element{
    int data;
}element;

typedef struct node* node_list;
struct node{
    element data;
    node_list link;
}node;

void add(element data,node_list* front,node_list* rear){
    node_list ptr=(node_list)malloc(sizeof(node));
    if(IS_FULL(ptr)){
        fprintf(stderr,"The memory is full\n");
        exit(1);
    }
    ptr->data= data;
    ptr->link=NULL;
    if(*front) (*rear)->link=ptr;
    else *front=ptr;
    *rear=ptr;
}

element delete(node_list* front){
    node_list temp=*front;
    element data;
    if(IS_EMPTY(temp)){
        fprintf(stderr,"The stack is empty\n");
        exit(1);
    }
    data=(*front)->data;
    *front=temp->link;
    free(temp);
    return data;
}

void print(node_list front){
    node_list temp=front;
    for(;temp;temp=temp->link) printf("%d ",temp->data.data);
    printf("\n");
}

int main(void){
    int i=0,size=0;
    node_list front=NULL;
    node_list rear=NULL;

    do{
        scanf("%d",&i);
        if(i<0) break;
        element e;
        e.data=i;
        add(e,&front,&rear);
        size++;
        print(front);
    }while(i>=0);
    printf("%d\n",size);
    while(size>0){
        print(front);
        element item;
        item= delete(&front);
        size--;
    }

}