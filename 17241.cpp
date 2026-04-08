#include <bits/stdc++.h>
using namespace std;
int n,m,q;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>q;
    bool vis[n+1];
    bool expanded[n+1];
    fill(vis,vis+n+1,0);
    fill(expanded,expanded+n+1,0);
    vector<int> v[n+1];
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i=0;i<q;i++){
        int cnt=0;
        int tmp;
        cin>>tmp;
        if(!vis[tmp]){
            cnt++;
            vis[tmp]=1;
        }
      
        //문제 제대로 읽자 여러번 방문 가능하다 그거 예외처리 안하면 시간초과
        if(!expanded[tmp]){
            expanded[tmp]=1;
            for(auto i:v[tmp]){
                if(vis[i]==0){
                    cnt++;
                    vis[i]=1;
                }
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}