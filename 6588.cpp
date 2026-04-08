#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){

    vector<bool> prime(1000001,true);//선으로 소수 찾기
  
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=1000001;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=1000001;j+=i){
                prime[j]=false;              
            }

        }
    }

    while(1){
        int num;
        int n1=0,n2=0;
        bool t=false;
        scanf("%d",&num);
        if(num==0)
            break;
        
        for(int i=3;i<=num/2;i+=2){
            if(prime[i]==true&&prime[num-i]==true){
                t=true;
                n1=i,n2=num-i;
                break;      
            }
        }
        if(t){
            printf("%d = %d + %d\n",num,n1,n2);
        }
        else{
            printf("Goldbach's conjecture is wrong.\n");
        }
    }
}    
    
