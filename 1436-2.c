#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int number=666;
    int times=0;
    while(1){
        int tmp=number;
        while(tmp>0){
            if(tmp%1000==666){
                times++;
                break;
            }
            tmp/=10;
        }
        if(times==n){
            break;
        }
        number++;
    }
    printf("%n",number);
    return 0;
}