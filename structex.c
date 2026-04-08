#include <stdio.h>
#include <string.h>
struct sogang{
    char professor[50];
    char class[50];
    char student[50];
};

int main(void){
    struct sogang A,B;
    strcpy(A.professor,"LEE");
    strcpy(A.class,"Computer Programming");
    strcpy(A.student,"Kim");

    scanf("%s",B.professor);
    scanf("%s",B.class);
    scanf("%s",B.student);

    printf("professor: %s\n",A.professor);
    printf("class: %s\n",A.class);
    printf("student: %s\n",A.student);
    printf("\n");

    printf("professor: %s\n",B.professor);
    printf("class: %s\n",B.class);
    printf("student: %s\n",B.student);
    
    return 0;

}