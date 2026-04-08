#include <stdio.h>

int main(void){
    int arr[1000];
    int a,b;
    scanf("%d %d",&a,&b);
    
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int tmp;
    for(int x=1;x<a;x++){
        for(int y=0;y<a-x;y++)
            if(arr[y]<arr[y+1]){
                tmp=arr[y];
                arr[y]=arr[y+1];
                arr[y+1]=tmp;
            }
    }
    printf("%d\n",arr[b-1]);
}