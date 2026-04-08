#include <bits/stdc++.h>
using namespace std;
int t[16];
int p[16];
int d[16]; //d[i]=i~n날까지 버는 돈
int n;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>t[i]>>p[i];
    for(int i=n;i>=1;i--){
        if(i+t[i]<=n+1){
             // i번째 일에 상담을 했을 때와 상담을 하지 않았을 때 얻을 수 있는 수익 중 최대 수익을 취함
            d[i]=max(p[i]+d[i+t[i]],d[i+1]);
        }
        else{
            d[i]=d[i+1];
        }
    }
    cout<<*max_element(d,d+n+1);
}