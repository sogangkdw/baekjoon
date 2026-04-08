#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
int n;
int arr[26][26];

int dfs(int r, int c){
    arr[r][c]=0;
    int ret=1;
    vector<pair<int,int>> k={{-1,0},{1,0},{0,1},{0,-1}};
    for(int i=0;i<k.size();i++){
        int dx=k[i].first, dy=k[i].second;
        int x=r+dx, y= c+dy;
        if(x<1|| y<1|| x>n|| y>n)
            continue;
        if(arr[x][y]>0){
            ret+=dfs(x,y);
        }
    }
    return ret;
}
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    vector<int> ans;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char c;
            cin>>c;
            arr[i][j]=c=='1';
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(arr[i][j]==1){
                ans.push_back(dfs(i,j));
            }
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<'\n';
    for(int i:ans)
        cout<<i<<'\n';
}