#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int arr[50];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("%d\n",arr[0]*arr[0]);
    }
    else{
        int max_index=0, min_index=0;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[max_index]){
                max_index=i;
            }
        }

        for(int i=1;i<n;i++){
            if(arr[i]<arr[min_index]){
                min_index=i;
            }
        }
        printf("%d\n",arr[max_index]*arr[min_index]);
    }
}