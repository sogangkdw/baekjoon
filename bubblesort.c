#include <stdio.h>

int swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int bubble_sort(int * change,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(change[j]>change[j+1])
                swap(&change[j],&change[j+1]);
        }
    }

}


int main(void){
    int nums[]={9,1,5,3,7};
    int a=sizeof(nums)/sizeof(int);
    bubble_sort(nums,a);
    for(int x=0;x<a;x++){
        printf("%d ",nums[x]);
    }
    return 0;
}