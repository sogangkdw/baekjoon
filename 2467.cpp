#include <bits/stdc++.h>
using namespace std;
int n,idx1,idx2;
int cnt=INT_MAX;
int a[100000];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int i=0;
    int j=n-1;
    while(i<j){
        if(abs(a[i]+a[j])<=cnt){
            cnt=abs(a[i]+a[j]);
            idx1=i;
            idx2=j;
        }
        if(a[i]+a[j]<0) i++;
        else if(a[i]+a[j]>0) j--;
        else{
            cout<<a[i]<<' '<<a[j];
            return 0;
        }
    }
    cout<<a[idx1]<<' '<<a[idx2];
}