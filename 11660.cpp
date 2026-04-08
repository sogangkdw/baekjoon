#include <iostream>

using namespace std;

int a[1025][1025];
int p[1025][1025];

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;
    cin>>N>>M;

    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cin>>a[i][j];
        }
    }

    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            p[i][j]=p[i-1][j]+p[i][j-1]-p[i-1][j-1]+a[i][j];
        }
    }
    for(int z=1;z<=M;z++){
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        int ans;
        ans=p[x2][y2]-p[x1-1][y2]-p[x2][y1-1]+p[x1-1][y1-1];
        cout<<ans<<'\n';
    }
    return 0;
}