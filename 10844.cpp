#include <iostream>
#define div 1000000000

using namespace std;
long long dp[101][10]={0};

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    for(int i=1;i<=9;i++){
        dp[1][i]=1;
    }
    for(int i=2;i<=n;i++){
        for(int j=0;j<10;j++){
            if(j==0){
                dp[i][j]=dp[i-1][j+1]%div;
            }
            else if(j==9){
                dp[i][j]=dp[i-1][j-1]%div;
            }
            else{
                dp[i][j]=(dp[i-1][j-1]+dp[i-1][j+1])%div;
            }
        }
    }
    int ans=0;
    for(int i=0;i<10;i++){
        //ans=(ans+dp[n][i])%div;
        ans+=dp[n][i]%div;
    }
    cout<<ans<<'\n';
    return 0;
}
