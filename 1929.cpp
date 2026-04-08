#include <bits/stdc++.h>
using namespace std;
bool arr[1000001];
int n,m;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    arr[0]=arr[1]=1;
    for(int i=2;i*i<=m;i++){
        if(arr[i]==1) continue;
        //i보다 작은 수는 그 전에 이미 합성수로 바뀜
        for(int j=i*i;j<=m;j+=i){
            arr[j]=1;
        }
    }
    for(int i=n;i<=m;i++){
        if(arr[i]==0) cout<<i<<'\n';
    }
}