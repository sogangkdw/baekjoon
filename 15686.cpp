#include <bits/stdc++.h>
using namespace std;
int N,M;
int board[51][51];
bool vis[13];
int arr[13];
vector<pair<int,int>> h;//집
vector<pair<int,int>> c;//치킨 집
#define X first
#define Y second
int answer=INT_MAX;
void func(int n){
    if(n==M){
        int dist[h.size()];
        fill(dist,dist+h.size(),INT_MAX);
        for(int i=0;i<h.size();i++){
            int x1=h[i].X;
            int y1=h[i].Y;
            for(int j=0;j<M;j++){
                //c[j]는 0부터 M까지 치킨집을 방문, 나는 arr 배열에 저장된 치킨집을 방문해야 하니 c[arr[j]]
                int x2=c[arr[j]].X;
                int y2=c[arr[j]].Y;
                int tmp=abs(x1-x2)+abs(y1-y2);
                dist[i]=min(dist[i],tmp);
            }
        }
        int cnt=0;
        for(int i=0;i<h.size();i++){
            cnt+=dist[i];
        }
        answer=min(answer,cnt);
        return;
    }
    int st=0;
    if(n>0) st=arr[n-1];
    for(int i=st;i<c.size();i++){
        if(!vis[i]){
            arr[n]=i;
            vis[i]=1;
            func(n+1);
            vis[i]=0;
        }    
    }
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>M;
    
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            cin>>board[i][j];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(board[i][j]==1) h.push_back({i,j});
            else if(board[i][j]==2) c.push_back({i,j});
        }
    }
    func(0);
    cout<<answer;
    return 0;
}