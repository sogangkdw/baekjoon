#include <bits/stdc++.h>
using namespace std;
int R[2001], L[2001];
int dp[2001][2001];
int n;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>L[i];
    for(int i=0;i<n;i++)
        cin>>R[i];

    for (int i=n-1;i>=0;i--){
        for (int j=n-1;j>=0;j--) {
            dp[i][j]=max(dp[i+1][j], dp[i+1][j+1]);
            if (L[i]>R[j]) {
                dp[i][j]=max(dp[i][j],dp[i][j+1]+R[j]);
            }
        }
    }

    cout << dp[0][0];

}