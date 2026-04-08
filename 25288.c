#include <stdio.h>

int main(void){
    int num;
    scanf("%d",&num);
    int alphabet[30];
    scanf("%s",alphabet);
    for(int i=0;i<num;i++){
        printf("%s",alphabet);
    }
    printf("\n");
}