#include <stdio.h>

int main(void){
    int x,y;
    x=0;
    printf("%p\n",&x);
    y=0x3D02700;
    printf("%d\n",y);
    printf("%p\n",&y);
    
    x=y+3;
    int*z=&y+3;
    printf("\n");

    printf("%d\n",*z);
    printf("%p\n",z);
    *z=y;
    printf("\n");
    printf("%d\n",*z);
    printf("%p\n",z);
    printf("\n");
    z=&x;
    printf("%p\n",z);
    printf("%d\n",x);
}