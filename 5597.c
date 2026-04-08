#include <stdio.h>


int main(void){
    int num;
    int numbers[100];
    for(int k=0;k<30;k++)
        numbers[k]=k+1;

    for(int i=0;i<28;i++){
        scanf("%d",&num);
        numbers[num-1]=0;   
    }

    for(int x=0;x<30;x++){
        if (numbers[x]!=0)
        {
            printf("%d\n",numbers[x]);
        }
    }
    return 0;

}

