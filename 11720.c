#include <stdio.h>

int main(void){
    int num=0,total=0;
    scanf("%d",&num);
    char numlist[num];
    scanf("%s",numlist);
    for(int i=0;i<num;i++){
        int digit=numlist[i]-'0';
        total+=digit;
    }
    
    printf("%d",total);
}