#include <stdio.h>

int main(void) {
    char name[100];
    char school[100];

    printf("내 이름: ");
    scanf("%s", name);

    printf("다니는 대학교: ");
    scanf("%s", school);

    printf("내 이름은 %s\n", name);
    printf("내가 다니는 대학교는 %s\n", school);
    printf("%d\n", 20);

    return 0;
}
