#include <bits/stdc++.h>
using namespace std;
int n;
vector<pair<int,int>> v;
#define X first
#define Y second
bool under,over;

bool cmp(pair<int,int> v1, pair<int,int> v2){
    if(v1.X!=v2.X) return v1.X<v2.X;
    return v1.Y<v2.Y;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        int n1,n2,n3,n4;
        cin>>n1>>n2>>n3>>n4;
        //ex)5/4일은 504, 12월 10일은 1210
        v.push_back({n1*100+n2,n3*100+n4});
    }
    sort(v.begin(),v.end(),cmp);
    //3/1~12/1 사이 아니면 0;
    for(int i=0;i<n;i++){
        if(v[i].X<=301) under=1;
        
        if(v[i].Y>=1201) over=1;
    }
    if(under==0||over==0){
        cout<<0;
        return 0;
    }
   
    int cur=301;
    int cnt=0;
    bool p=false;

    while(cur<1201){
        bool ck=0;
        int tnt=cur;
        for(int i=0;i<n;i++){
            if(v[i].Y<=301) continue;
            if(v[i].X>=1201) continue;
            if(tnt>=v[i].X&&cur<v[i].Y){
                ck=1;
                cur=v[i].Y;
            }
        }
        if(!ck){
            cout<<0;
            return 0;
        }
        cnt++;
    }
    cout<<cnt;
}