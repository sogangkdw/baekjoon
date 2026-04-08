#include <bits/stdc++.h>
using namespace std;
int m,n,cnt;
vector<vector<int>> v(100);
vector<vector<int>> t(100);
vector<vector<int>> new_v(100);

bool compare(vector<int> &a, vector<int> &b){
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int num;
            cin>>num;
            v[i].push_back(num);
            t[i].push_back(num);
        }

        sort(t[i].begin(),t[i].end());
        //중복제거
        t[i].erase(unique(t[i].begin(),t[i].end()),t[i].end());

        for(int j=0;j<n;j++){
            new_v[i].push_back(lower_bound(t[i].begin(),t[i].end(),v[i][j])-t[i].begin());
        }
    }

    for(int i=0;i<m-1;i++){
        for(int j=i+1;j<m;j++){
            cnt+=compare(new_v[i],new_v[j]);
        }
    }
    cout<<cnt;
}