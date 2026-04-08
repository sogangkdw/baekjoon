#include <stdio.h>

int main (void){
    int numchoose;
    int num1,num2;
    scanf("%d",&numchoose);
    for(int i=0;i<numchoose;i++)
    {
        scanf("%d %d",&num1,&num2);
        printf("%d\n",num1+num2);
    }
    return 0;
}