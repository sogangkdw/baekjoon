#include <bits/stdc++.h>
using namespace std;
int n,b;
queue<pair<string,int>> q;
string a;
#define X first
#define Y second

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        q.push({a,b});
    }
    while(q.size()>1){
        pair<string,int> cur=q.front();
        q.pop();
        cur.Y%=q.size();
        if(cur.Y==0) cur.Y+=q.size();
        for(int i=0;i<cur.Y-1;i++){
            pair<string,int> tmp=q.front();
            q.pop();
            q.push(tmp);
        }
        q.pop();
    }
    cout<<q.front().X;
}