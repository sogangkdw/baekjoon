#include <stdio.h>
int low(int *a, int b,int c);
int main(void){
    int N,X,num;
    scanf("%d %d",&N,&X);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&num);
        A[i]=num;
    }
 
    low(A,X,N);
    return 0;
}

int low(int * a, int b,int c){
    for(int i=0;i<c;i++)
    {
        if(*(a+i)<b)
            printf("%d ",*(a+i));
    }
    return 0;
}