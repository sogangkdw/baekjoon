#include <bits/stdc++.h>
using namespace std;
int n;
int arr[3];
int k=3;
int cnt;
void sol(int t,int N){
    if(t==2){
        if(n<arr[1]) return;
        else{
            arr[2]=n;
            if(arr[1]==arr[2]&&arr[1]==arr[0]) cnt++;
            else if(arr[1]!=arr[2]&&arr[2]!=arr[0]&&arr[0]!=arr[1]) cnt+=6;
            else cnt+=3;
            return;
        }
    }
    int cmp=3;
    if(t>0) cmp=arr[t-1];
    for(int i=cmp;i<=N;i+=3){
        if(n-i>0){
        n-=i;
        arr[t]=i;
        sol(t+1,N);
        n+=i;
        }
    }

}

int main(void){
    cin>>n;
    int N=n;


    if(n==3||n==6) cout<<0;
    if(n==9) cout<<1;
    else{
        sol(0,N);
        cout<<cnt;
    }
}