#include <stdio.h>

int count(int a,int *b, int c);
int main(void){
    int times=0,num,nfind,sum=0;
    scanf("%d",&times);
    int numlist[times];
    for(int i=0;i<times;i++)
    {
        scanf("%d ",&num);
        numlist[i]=num;
    }
    scanf("%d",&nfind);
    sum=count(nfind,numlist,times);
    printf("%d",sum);
    
}

int count(int a, int* b, int c){
    int total=0;
    for (int i=0;i<c;i++)
        if (a==*(b+i))
            total+=1;
    return total;
}