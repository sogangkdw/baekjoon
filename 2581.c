#include <stdio.h>

int main(void){
    int num1=0,num2=0;
    int total=0;
    int minimum=0;
    scanf("%d",&num1);
    scanf("%d",&num2);
    minimum=num2;
    for(int x=num1;x<=num2;x++){  
        int prime=1;
        if(x==1){
            
            continue;
        }
        for(int i=2;i<x;i++){
            if(x==2){
                prime=1;
                break;
            }
            if(x%i==0){
                prime=0;
                break;
            }
        }
        if(prime){ 
                    
            if(minimum>x)
                minimum=x;
            total+=x;
        }
    }
    if(total==0)
        printf("%d",-1);
    else{
        printf("%d\n",total);
        printf("%d",minimum);
    }
}