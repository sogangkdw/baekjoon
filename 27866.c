#include <stdio.h>
int main(void){
    char words[1000];
    int num=0;
    scanf("%s",words);
    scanf("%d",&num);
    printf("%c",words[num-1]);
    return 0;
}