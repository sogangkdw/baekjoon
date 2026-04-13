#include <stdio.h>
#include <stdlib.h>

int main(void){
    typedef struct list* List;
    typedef struct list{
        int num;
        List next;
    };

    List ptr=NULL;
    if(!ptr){
        ptr=malloc(sizeof(struct list));
        ptr->num=4;
        ptr->next=NULL;
    }
    printf("%d\n",ptr->num);
}