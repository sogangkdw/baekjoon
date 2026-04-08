#include <bits/stdc++.h>
using namespace std;
int n,m,total;
#define S 1
#define M 2
#define L 3
bool c[1000001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<char,int>> v;
    cin>>n>>m;
    char* judge=new char[n+1];
    for(int i=1;i<=n;i++){
        cin>>judge[i];
    }
    for(int i=0;i<m;i++){
        int a; char b;
        cin>>b>>a;
        v.push_back({b,a});
    }
    for(int i=0;i<m;i++){
        if((judge[v[i].second]<=v[i].first)&&c[v[i].second]==0){//사이즈는 S<M<L지만 알파벳은 S>M>L
            total++;
            c[v[i].second]=1;
        }   
    }
    cout<<total;
    delete[] judge;
    return 0;
}