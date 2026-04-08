#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int vis[n+1];
    fill(vis,vis+n+1,0);
    queue<int> Q;
    vector<pair<int,int>> V;
    for(int i=0;i<m;i++){
        int num1,num2;
        cin>>num1>>num2;
        V.push_back({num1,num2});
    }
    Q.push(1);
    vis[1]=1;
    int count=0;

    while(!Q.empty()){
        int cur=Q.front();
        Q.pop();
        for(auto i:V){
            if(i.first==cur){
                if(vis[i.second]!=0) continue;
                Q.push(i.second);
                vis[i.second]=1;
                count++;
            }
            else if(i.second==cur){
                if(vis[i.first]!=0) continue;
                Q.push(i.first);
                vis[i.first]=1;
                count++;
            }
        }
    }
    cout<<count<<'\n';
}