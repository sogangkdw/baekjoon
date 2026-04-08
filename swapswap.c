#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(void *a, void *b, size_t s){
    char *temp=(char*)malloc(sizeof(char)*s);
    memcpy(temp,b,s);
    memcpy(b,a,s);
    memcpy(a,temp,s);
    free(temp);
}

int main(void){
    float a=10.12;
    float b=21.23;
    swap(&a,&b,sizeof(int));
    printf("a: %f, b: %f",a,b);
    return 0;
}