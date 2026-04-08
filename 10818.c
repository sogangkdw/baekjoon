#include <stdio.h>
void find(int *Numlist,int N);

int main(void){
    int N,num;
    scanf("%d",&N);
    int Numlist[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d ",&num);
        Numlist[i]=num;
    }
    find(Numlist,N);
  
    return 0;
}
void find(int *a,int N){
    int k=*a;
    int t=*a;
    for(int i=0;i<N;i++){
        if(*(a+i)>k)
            k=*(a+i);
        if(*(a+i)<t)
            t=*(a+i);}
    printf("%d %d",t,k);

    
}