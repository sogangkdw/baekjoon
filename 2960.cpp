#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int N, K;
    scanf("%d %d",&N,&K);
    vector<bool> prime(N+1,true);
    vector<int> check;
    prime[0]=prime[1]=false;
    for(int i=2;i<=N;i++){
        if(prime[i]==true)
            check.push_back(i);
           
        for(int j=i*i;j<=N;j+=i){
            prime[j]=false;
            if(find(check.begin(),check.end(),j)==check.end()){
                check.push_back(j);
            }
        }
    }
    printf("%d\n",check[K-1]);
}
    
