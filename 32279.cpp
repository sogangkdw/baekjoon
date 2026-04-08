#include <bits/stdc++.h>
using namespace std;
int n,p,q,r,s,a1,sum;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int *arr=new int[n+1];
    cin>>p>>q>>r>>s>>a1;
    arr[1]=a1;
    for(int i=1;i<=n;i++){
        if(2*i<=n) arr[2*i]=p*arr[i]+q;
        if(2*i+1<=n) arr[2*i+1]=r*arr[i]+s;
    }
    
    for(int i=1;i<=n;i++)
        sum+=arr[i];
    cout<<sum;
    delete[] arr;
}3