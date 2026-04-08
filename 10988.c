#include <stdio.h>
#include <string.h>
int main(void){
    int num=1;
    char string[100];
    scanf("%s",string);
    int size=strlen(string);
    for(int x=0;x<=size/2;x++){
        if (string[x]!=string[size-x-1]){
            num=0;
        }
    }
    printf("%d",num);
    
}