#include <stdio.h>
#include <string.h>

//숫자 뒤집기
void reverse(char *a);
//크기배열
void compare(char* changenum1,char*changenum2);

int main(void){
    char num1[100],num2[100];
    scanf("%s %s",num1,num2);
    reverse(num1);
    reverse(num2);
    compare(num1,num2);
}

void reverse(char *a){
    char temp='0';
    temp=*a;
    *a=*(a+2);
    *(a+2)=temp;

}

void compare(char *changenum1,char*changenum2){
    int value=0;
    value=strcmp(changenum1,changenum2);
    if(value>0)
        printf("%s\n",changenum1);
    else
        printf("%s\n",changenum2);
}