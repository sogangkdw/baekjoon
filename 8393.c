#include <stdio.h>
int main(void){
    int num=0;
    scanf("%d",&num);
    int total=0;
    for(int i=1;i<=num;i++)
        total+=i;
    printf("%d",total);
}