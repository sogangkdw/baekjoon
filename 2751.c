#include <stdio.h>
#include <stdlib.h>
#define Max_size 1000000
int sorted[Max_size];

void merge(int list[],int left,int mid, int right){
    int i,j,k;
    i=left;
    j=mid+1;
    k=left;

    while(i<=mid&&j<=right){
        if(list[i]<=list[j])
            sorted[k++]=list[i++];
        else
            sorted[k++]=list[j++];
    }

    if(i>mid){
        for(int x=j;x<=right;x++){
            sorted[k++]=list[x];
        }
    }
    else{
        for(int x=i;x<=mid;x++){
            sorted[k++]=list[x];
        }
    }

    for(int x=0;x<=right;x++){
        list[x]=sorted[x];
    }
}

void merge_sort(int list[],int left, int right){
    int mid;
    if(left<right){
        mid=(left+right)/2;
        merge_sort(list,left,mid);
        merge_sort(list,mid+1,right);
        merge(list,left,mid,right);
    }
}
int main(void){
    int N;
    scanf("%d",&N);
    int arr[1000000];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    merge_sort(arr,0,N-1);
    for(int i=0;i<N;i++){
        printf("%d\n",arr[i]);
    }
}