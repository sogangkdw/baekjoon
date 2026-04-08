#include <stdio.h>
#include <stdlib.h>

int main(void){
    typedef struct list{
        int num;
        struct list* next;
    }L;

    L* ptr=NULL;
    if(!ptr){
        ptr=malloc(sizeof(L));
        ptr->num=4;
        ptr->next=NULL;
    }
    printf("%d\n",ptr->num);
}