#include <stdio.h>
int main(void){
    int times,i=0,num1,num2;
    scanf("%d",&times);
    while (i<times)
    {
        scanf("%d %d",&num1,&num2);
        printf("%d\n",num1+num2);
        i++;
    }
    return 0;
}

