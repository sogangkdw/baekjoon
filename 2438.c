#include <stdio.h>
int main(void){
    int num=0;
    scanf("%d",&num);
    for (int i=1;i<=num;i++)
    {
        int a=0;
        while (a<i)
            {printf("%c",'*');
            a++;}
        printf("%c",'\n');
    }
}