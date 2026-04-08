#include <stdio.h>
#include <string.h>
int main(void){
    char arr[20];
    fgets(arr,sizeof(arr),stdin);
    int size=strlen(arr)-1;
    for(int i=1;i<size;i++){
        for(int j=0;j<size-i;j++){
            if((int)arr[j]<(int)arr[j+1]){
                char tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    printf("%s",arr);

}