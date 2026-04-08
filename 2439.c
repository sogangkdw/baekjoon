#include <stdio.h>
int main(void){
    int num1,repeat1=1,repeat2=0;
    scanf("%d",&num1);
        for (int a=num1;a>0;a--)
        {
            while (repeat1<a)
            {
                printf(" ");
                repeat1++;
            }
            while(repeat2<=num1-a)
            {
                printf("%c",'*');
                repeat2++;
            }
            printf("%c",'\n');
            repeat1=1;
            repeat2=0;
        }


    }
