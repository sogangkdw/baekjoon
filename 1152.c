#include <stdio.h>
#include <string.h>

int main(void){
    char sentence[100];
    int len=0,space=1;;
    fgets(sentence,sizeof(sentence),stdin);
    for(int i=0;i<strlen(sentence)-1;i++){
        if(sentence[i]>='a'&&sentence[i]<='z'||sentence[i]>='A'&&sentence[i]<='Z')
            {if(sentence[i+1]==' '){
                space++;
            }
            }
    }
    printf("%d",space);
}