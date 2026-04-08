#include <stdio.h>
int swap(int*a,int*b);
int main(void){
    int A[100];
    int N,M,a,b;
    scanf("%d %d",&N,&M);

    for(int i=0;i<N;i++)
        A[i]=i+1;
    while(M--){
        scanf("%d %d",&a,&b);

        for(int i=0;i<=(b-a)/2;i++){
            swap(&A[a+i-1],&A[b-i-1]);
        }
    }
    for(int i=0;i<N;i++){
        printf("%d ",A[i]);
    }
}
int swap(int *a,int *b){
    int temp=0;
    temp=*b;
    *b=*a;
    *a=temp;
}