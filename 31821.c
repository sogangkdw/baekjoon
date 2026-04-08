#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,m,k,sum=0;
    scanf("%d",&n);
    int* arr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&k);
        sum+=arr[k-1];
    }
    printf("%d",sum);
    free(arr);
}