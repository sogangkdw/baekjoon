#include <stdio.h>

int count1=0,count2=0;

int main(void){
    int N;
    scanf("%d",&N);
    int a=5,b=3;
    int tmp=N;
  
    int check1=0;
    int check2=0;
    
    if(tmp%a==0){
        printf("%d\n",tmp/a);
        return 0;
    }
    
    else if(tmp%b==0){
        count1=tmp/b;
        check1=1;
    }
    
    while(tmp>=b){
        tmp-=b;
        count2+=1;
        if(tmp%a==0)
            break;
        }
    while(tmp>=a){
        tmp-=a;
        count2+=1;
        }
    if(tmp==0){
        check2=1;
    }

 
    if(check1==1&&check2==1)
        printf("%d\n",count1>count2?count2:count1);
    else if(check1==1&&check2==0){
        printf("%d\n",count1);
    }
    else if(check1==0&&check2==1){
        printf("%d\n",count2);
    }
    else
        printf("%d\n",-1);

}