#include <stdio.h>
#include <string.h>
int main(void){
    int count=0,square=0;
    char S[20];
    scanf("%d",&count);
    for(int i=0;i<count;i++){
        scanf("%d %s",&square,&S);
        for(int j=0;j<strlen(S);j++){
            for(int x=0;x<square;x++){
                printf("%c",S[j]);
            }
        }
        printf("\n");
    }
}
