#include <bits/stdc++.h>
using namespace std;
int n,cnt;
vector<int> v;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int arr[n+1];
    fill(arr,arr+n+1,0);
    arr[0]=arr[1]=1;
    for(int i=2;i*i<=n;i++){
        if(arr[i]==1) continue;
        for(int j=i*i;j<=n;j+=i){
            arr[j]=1;
        }
    }
    for(int i=2;i<=n;i++){
        if(arr[i]==0){
            v.push_back(i);
        }
    }
    //n보다 작거나 같은 소수 담은 벡터 v
    auto st=v.begin(), ed=v.begin();
    int tot=0;
    while(st<v.end()&&ed<v.end()){
        if(tot+*ed<n){
            tot+=*ed;
            ed++;
        }
        else if(tot+*ed>n){
            tot-=*st;
            st++;
        }
        else{
            cnt++;
            tot-=*st;
            st++;
        }
    }
    cout<<cnt;
}