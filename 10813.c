#include <stdio.h>
int main(void){
    int N,M,i,j;
    scanf("%d %d",&N,&M);
    int listnum[N];
    for(int i=0;i<N;i++)
        listnum[i]=i+1;
    for(int x=0;x<M;x++){
        scanf("%d %d",&i,&j);
        if(i!=j){
        listnum[i-1]^=listnum[j-1];
        listnum[j-1]^=listnum[i-1];
        listnum[i-1]^=listnum[j-1];
        }
        
    }
    for (int c=0;c<N;c++)
        printf("%d ",listnum[c]);
}



