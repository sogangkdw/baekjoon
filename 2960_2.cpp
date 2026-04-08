#include <bits/stdc++.h>
using namespace std;
bool a[1001];
int n,k,cnt;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    a[1]=1;
    for(int i=2;i<=n;i++){
        if(a[i]==1) continue;
        for(int j=i;j<=n;j+=i){
            if(!a[j]){
                a[j]=1;
                cnt++;
            }
            if(cnt==k){
                cout<<j;
                return 0;
            }
        }
    }
}
