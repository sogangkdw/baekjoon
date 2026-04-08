#include <bits/stdc++.h>
using namespace std;
int n,k;
int arr[10001];
vector<int> v;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int num=0;
        cin>>num;
        v.push_back(num);
    }

    arr[0]=1;
    for(int i=1;i<=v.size();i++){
        int W=v[i-1];
        for(int j=0;j<W;j++){
            for(int p=j;p<=k;p+=W){
                if(p<W) continue;

                else arr[p]=arr[p]+arr[p-W];
            }

        }
    }
    cout<<arr[k];
}