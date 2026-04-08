#include <bits/stdc++.h>
using namespace std;
bool arr[100][100];
bool vis[100][100];
#define X first
#define Y second
int N,K,R;
vector<pair<int,int>> s;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
vector<pair<pair<int,int>,pair<int,int>>> v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>K>>R;
    for(int i=0;i<R;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        v.push_back({{a-1,b-1},{c-1,d-1}});
         
    }
    queue<pair<int,int>> q;

    for(int i=0;i<K;i++){
        int a,b;
        cin>>a>>b;
        s.push_back({a-1,b-1});
    }
    vector<int> cnt;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(arr[i][j]==0){
                int tmp=0;
                q.push({i,j});
                arr[i][j]=1;
                for(auto s1:s){
                    if(pair<int,int>{i,j}==s1) tmp++;
                }
                while(!q.empty()){
                    pair<int,int> cur=q.front();
                    q.pop();
                    for(int dir=0;dir<4;dir++){
                        int nx=cur.X+dx[dir];
                        int ny=cur.Y+dy[dir];
                        if(nx<0||ny<0||nx>=N||ny>=N) continue;
                        if(arr[nx][ny]==1) continue;
                        bool bb=false;
                        for(auto t:v){
                        if(t.X==cur&&t.Y==pair<int,int>{nx,ny}||t.X==pair<int,int>{nx,ny}&&t.Y==cur){
                            bb=true;
                            break;
                            }
                        }
                        if(bb) continue;
                        arr[nx][ny]=1;
                        q.push({nx,ny});

                        for(auto s1:s){
                            if(pair<int,int>{nx,ny}==s1) tmp++;
                        }

                    }
                }
                cnt.push_back(tmp);
            }
        }
    }    

    int tot=0;
    for(int i=0;i<cnt.size()-1;i++){
        for(int j=i+1;j<cnt.size();j++)
            tot+=cnt[i]*cnt[j];
    }
    cout<<tot;
}