#include <stdio.h>

int main(void){
    int N;
    int arr[1000];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int tmp=0;
    for(int x=1;x<N;x++){
        for(int y=0;y<N-x;y++)
            if(arr[y]>arr[y+1]){
                tmp=arr[y];
                arr[y]=arr[y+1];
                arr[y+1]=tmp;
            }
    }
    for(int i=0;i<N;i++){
        printf("%d\n",arr[i]);
    }
}