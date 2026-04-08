#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student{
    char*name;
    int age;
};

typedef struct Student Student;

void createStudent(Student**s,char*name,int age);
void manipulateArray(int**arr,int size);

int main(void){
    Student*s;
    createStudent(&s,"John",20);
    free(s->name);
    free(s);

    int *arr;
    manipulateArray(&arr,5);
    free(arr);

    return 0;
}
void createStudent(Student**s,char*name,int age){
    *s=(Student*)malloc(sizeof(Student));
    (*s)->name=(char*)malloc((strlen(name)+1)*sizeof(char));
    strcpy((*s)->name,name);
    (*s)->age=age;
}

void manipulateArray(int**arr,int size){
    *arr=(int *)malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
        (*arr)[i]=i;
    }
}