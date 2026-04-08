#include <bits/stdc++.h>
using namespace std;

int n;
int vis[1000001];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    fill(vis,vis+1000001,-1);

    queue<int> q;
    q.push(n);
    vis[n] = 0;

    while(!q.empty()){
        int cur = q.front();
        q.pop();

        if(cur == 1) break;

        if(cur % 3 == 0 && vis[cur/3] == -1){
            vis[cur/3] = vis[cur] + 1;
            q.push(cur/3);
        }

        if(cur % 2 == 0 && vis[cur/2] == -1){
            vis[cur/2] = vis[cur] + 1;
            q.push(cur/2);
        }

        if(vis[cur-1] == -1){
            vis[cur-1] = vis[cur] + 1;
            q.push(cur-1);
        }
    }

    cout << vis[1];
}
