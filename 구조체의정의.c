#include <string.h>
#include <stdio.h>
typedef struct employee{
    char employee_name[100];
    char privacy_num[100];
    int wage;
}employee;

int main(void){
   
    //strcpy(person1.employee_name,"KIM DO WON");
    //strcpy(person1.privacy_num,"010101");
    //person1.wage=10000;
    //** 한줄로
    employee person1={"KIM DO WON","010101",10000};
    printf("%d\n",sizeof(employee));
    printf("employee name: %s\n",person1.employee_name);
    printf("privacy number: %s\n",person1.privacy_num);
    printf("hour wage: %d won\n",person1.wage);

    return 0;

}