#include <stdio.h>
int main(void){
    int arr[5];
    int sum=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d\n",sum/5);

    int tmp=0;
    for(int x=1;x<5;x++){
        for(int y=0;y<5-x;y++)
            if(arr[y]>arr[y+1]){
                tmp=arr[y];
                arr[y]=arr[y+1];
                
                arr[y+1]=tmp;
            }
    }
    printf("%d\n",arr[2]);

}