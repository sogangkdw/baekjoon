#include <stdio.h>
#include <string.h>
int main(void){
    char words[100];
    scanf("%s",words);
    words[sizeof(words)-1]='\0';
    int size=0,of=0;
    size=strlen(words);
    of=sizeof(words);
    printf("%d %d",size,of);
}