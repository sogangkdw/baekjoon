#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100001];
bool vis[100001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i=0;i<n;i++) cin >> arr[i];

    long long ans = 0;
    int en = 0;

    for(int st=0; st<n; st++){
        while(en<n && !vis[arr[en]]){
            vis[arr[en]] = 1;
            en++;
        }

        ans += en - st;
        vis[arr[st]] = 0;
    }

    cout << ans;
}
