#include <stdio.h>
#include <string.h>

int main(void){
    int num=0,size=0;
    char words[100];
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%s",words);
        size=strlen(words);
        printf("%c",words[0]);
        printf("%c",words[size-1]);
        printf("\n");
    }
}