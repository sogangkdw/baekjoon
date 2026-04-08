#include <stdio.h>
int main(void){
    int num=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        for(int x=0;x<num-i-1;x++){
            printf(" ");
        }
        for(int y=0;y<2*i+1;y++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<num-1;i++){
        for(int x=0;x<num-(num-1-i);x++){
            printf(" ");
        }
        for(int y=0;y<2*(num-1-i)-1;y++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}