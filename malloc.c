#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * reverse(char * sentence,int len){
    char * new_sentence=(char *)malloc(sizeof(char)*(len+1));
    for(int i=len;i>0;i--){
        if (*(sentence+i)== ' ')
        {
            printf("%s ",sentence+i+1);
            sentence[i]='\0';
        }
    }
    printf("%s",sentence);

}
int main(void){
    char * sentence;
    gets(sentence);
    int len=strlen(sentence);
    reverse(sentence,len);
    free(sentence);
}