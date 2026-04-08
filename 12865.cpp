#include <iostream>
#include <vector>

using namespace std;

//(N+1)X(V+1)
int bag(int N,int K,vector<int> &V, vector<int> &W){
    vector<vector<int>> dp(N+1,vector<int>(K+1,0));
    for(int j=1;j<=K;j++){
        for(int i=1;i<=N;i++){
            if(j<W[i-1]){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=max(dp[i-1][j],V[i-1]+dp[i-1][j-W[i-1]]);
            }
        }
    }
    return dp[N][K];
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,K;
    cin>>N>>K;
    vector<int> V(N);
    vector<int> W(N);
    for(int i=0;i<N;i++){
        cin>>W[i]>>V[i];
    }
    cout<<bag(N,K,V,W)<<'\n';
    return 0;
}