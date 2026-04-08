#include <stdio.h>

int main(void){
    int N;
    int num;
    int arr[100001]={0,};
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&num);
        arr[num]+=1;
    }

    for(int i=0;i<100001;i++){
        while(arr[i]>0){
            printf("%d\n",i);
            arr[i]--;
        }
    }
}