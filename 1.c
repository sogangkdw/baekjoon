#include <stdio.h>

void swap_string(char **a, char **b){
    printf("%p %p\n",a,*a);
    char *temp=*a;//*a는 x(2의 주소)
    *a=*b;
    *b=temp;
}
int main(int argc, char *argv[]){
    char *x="2";//x는 2의 주소
    char *y="5";//y는 5의 주소
    swap_string(&x,&y);//x의 주소, y의 주소
    printf("x = %s, y = %s\n",x,y);
    return 0;
//2의 주소가 x에 x의 주소가 a에 (즉, char **a는 x의 주소, *a는 x(2의 주소))
}