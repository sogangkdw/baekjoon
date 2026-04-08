#include <iostream>
using namespace std;

int add(int k,int i){
    int sum=0;
    for(int x=0;x<i;x++){
        sum+=k%10;
        k/=10;
    }
    return sum;
}

int main(void){
    int n;
    cin>>n;
    int tmp=n;
    int i=1;
    int p=0;
    while(tmp>10){
        i++;
        tmp/=10;
    }

    for(int k=n-i*9+1;k<n-1;k++){
        if(n==k+add(k,i)){
            cout<<k<<endl;
            p=1;
            break;
        }
    }
    if(!p){
        cout<<0<<endl;
    }
    
}