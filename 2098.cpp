#include <bits/stdc++.h>
using namespace std;
int n;
int dis[16][16];
//행은 마지막 방문한 수, 열은 상태(비트마스킹)
int arr[16][1<<16];

#define MAX 20000000
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>dis[i][j];
        }
    }
    for(int i=0;i<16;i++)
        fill(arr[i],arr[i]+(1<<16),MAX);

    arr[0][0]=0;

    for(int j=0;j<(1<<n);j++){
        for(int i=0;i<n;i++){
            for(int k=0;k<n;k++){
                if(!dis[i][k]) continue;
                if(j&(1<<k)) continue;
                arr[k][j|(1<<k)]=min(arr[k][j|(1<<k)],dis[i][k]+arr[i][j]);
                
            }
        }
    }

    cout<<arr[0][(1<<n)-1];

}