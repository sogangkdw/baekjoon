#include <stdio.h>
int main(void){
    int times,num1,num2,a=0;
    scanf("%d",&times);
    for(int i=0;i<times;i++){
        a++;
        scanf("%d %d",&num1,&num2);
        printf("Case #%d: %d + %d = %d\n",a,num1,num2,num1+num2);

    }
    return 0;
}