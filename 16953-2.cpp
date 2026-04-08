#include <iostream>
#include <queue>
#include <vector>

using namespace std;

queue<pair<long long,long long>> q;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N,M;
    cin>>N>>M;
    q.push(make_pair(N,1));
    long long ans=10000;

    while(!q.empty()){
        long long k=q.front().first;
        long long cnt=q.front().second;
        q.pop();
        if(k==M){
            ans=min(cnt,ans);
        }
        
        if(2*k<=M){
            q.push(make_pair(2*k,cnt+1));
            
        } 
        if(10*k+1<=M){
            q.push(make_pair(10*k+1,cnt+1));
            
        }
        
    }

    if(ans==10000)
        cout<<-1<<'\n';
    else cout<<ans<<'\n';
}