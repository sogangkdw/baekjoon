#include <iostream>
#include <algorithm>

using namespace std;

long long N,M;
int ans=100000;

void dfs(long long a, int cnt){
    if(a>M)
        return;
    if(a==M){
        ans=min(ans,cnt);
    }

    dfs(a*2,cnt+1);
    dfs(10*a+1,cnt+1);
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>N>>M;
    dfs(N,1);
    if(ans==100000)
        cout<<-1<<'\n';
    else
        cout<<ans<<'\n';
}