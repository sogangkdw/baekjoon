#include <bits/stdc++.h>
using namespace std;
int n,m,k,w;
int arr[30][30];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>k>>w;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //시작점 잡고 그칸으로 부터 w*w 탐색
    for(int i=0;i<n-w+1;i++){
        for(int j=0;j<m-w+1;j++){
            vector<int> v;
            for(int x=i;x<i+w;x++){
                for(int y=j;y<j+w;y++){
                    v.push_back(arr[x][y]);
                }
            }
            sort(v.begin(),v.end());
            cout<<v[w*w/2]<<' ';
        }
        cout<<'\n';
    }
}