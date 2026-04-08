#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[10];
int num[10];
bool vis[10];//사용 여부(arr 기준)
void func(int t){
    if(t==m){
        for(int i=0;i<m;i++)
            cout<<num[arr[i]]<<' ';
        cout<<'\n';
        return;
    }
    int temp=0;
    if(t>0) temp=arr[t-1]+1;
    int tmp=0;//t가 같을 때 중복 체크 위해 지역변수로 설정(t가 증가하면 초기화)
    for(int i=temp;i<n;i++){
        if(vis[i]||tmp==num[i]) continue;//한번 쓰거나 중복되면 건너뜀
        arr[t]=i;
        vis[i]=1;
        tmp=num[i];
        func(t+1);
        vis[i]=0;
    }
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sort(num,num+n);
    func(0);
}