#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1,num2;
    scanf("%d",&num1);
    int* arr1=(int*)malloc(sizeof(int)*num1);
    for(int i=0;i<num1;i++){
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&num2);
    int* arr2=(int*)malloc(sizeof(int)*num2);
    int* arr3=(int*)malloc(sizeof(int)*num2);
    for(int i=0;i<num2;i++){
        scanf("%d",&arr2[i]);
    }

    for(int i=0;i<num2;i++){
        arr3[i]=0;
        for(int j=0;j<num1;j++){
            if(arr2[i]==arr1[j]){
                arr3[i]=1;
                break;
            }
            
        }
    }

    for(int i=0;i<num2;i++){
        printf("%d ",arr3[i]);
    }
    printf("\n");    
}