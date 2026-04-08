#include <stdio.h>
int main(void){
    int total,total_cal=0,cnt,price,num;
    scanf("%d",&total);
    scanf("%d",&cnt);
    for (int i=0;i<cnt;i++)
    {
        scanf("%d %d",&price,&num);
        total_cal+=price*num;
    }
    
    if (total==total_cal)
        puts("Yes");
    else
        puts("No");
    
}