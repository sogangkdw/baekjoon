#include <bits/stdc++.h>
using namespace std;
int n;
int d[1000001];
int p[1000001];//경로 복원용 테이블

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    d[1]=0;
    p[1]=0;
    for(int i=2;i<=n;i++){
        d[i]=d[i-1]+1;
        p[i]=i-1;
        if(i%2==0){
            d[i]=min(d[i/2]+1,d[i]);
            if(d[i]==d[i/2]+1) p[i]=i/2;    
        }
        if(i%3==0){
            d[i]=min(d[i/3]+1,d[i]);
            if(d[i]==d[i/3]+1) p[i]=i/3;      
        }

    }
    cout<<d[n]<<'\n';
    int k=n;
    cout<<n<<' ';
    while(p[k]!=0){
        cout<<p[k]<<' ';
        k=p[k];
    }
}    