#include <stdio.h>

int add(int a){
    int c=a+a;
    return c;
}
int main(void){
    int num=10,new_num=0;
    new_num=add(num);
    printf("%d",new_num);
    return 0;
}