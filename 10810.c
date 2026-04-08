#include <stdio.h>
int main(void){
    int N,M,i,j,k;
    scanf("%d %d",&N,&M);
    int numlist[N];
    for(int x=0;x<N;x++)
        numlist[x]=0;
    for(int t=0;t<M;t++){
        scanf("%d %d %d",&i,&j,&k);
        for (int y=i;y<j+1;y++){
            numlist[y-1]=k;
        }

    }
    for(int i=0;i<N;i++)
        printf("%d ",numlist[i]);
}