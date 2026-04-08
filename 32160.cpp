#include <bits/stdc++.h>
int n;
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    if(n%4==0||n%4==1) cout<<n<<'\n';
    else if(n%4==2||n%4==3) cout<<n-1<<'\n';
    if(n%4==1){
        int cnt=0;
        for(int i=n-1;i>=1;i-=2){
            cout<<i<<' '<<i-1<<'\n';
            cnt++;
        }
        for(int i=0;i<cnt;i++){
            cout<<1<<' '<<1<<'\n';
        }

    }
  
}