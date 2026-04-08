#include <bits/stdc++.h>
using namespace std;
int n,cnt;
vector<pair<int,int>> v;
#define X first
#define Y second

bool cmp(pair<int,int>& v1, pair<int,int>& v2){
    if(v1.Y!=v2.Y) return v1.Y<v2.Y;
    else return v1.X<v2.X;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        int a1,a2;
        cin>>a1>>a2;
        v.push_back({a1,a2});
    }
    sort(v.begin(),v.end(),cmp);
    int tmp=0;
    for(auto i:v){
        if(i.X>=tmp){
            tmp=i.Y;
            cnt++;
        }
    }
    cout<<cnt;
}