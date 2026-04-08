#include <bits/stdc++.h>
using namespace std;
queue<int> s;
int N,L,n,sum,cnt;
vector<int> v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>L;
    for(int i=0;i<N;i++){
        cin>>n;
        v.push_back(n);
    }
    for(int i=1;i<=N;i++){
        if(i<=L){
            s.push(v[i-1]);
            sum+=v[i-1];
            if(sum>=129&&sum<=138) cnt++;
        }
        else{
            sum-=s.front();
            s.pop();
            s.push(v[i-1]);
            sum+=v[i-1];
            if(sum>=129&&sum<=138) cnt++;
        }
    }
    cout<<cnt;

}