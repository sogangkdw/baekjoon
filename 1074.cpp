#include <bits/stdc++.h>
using namespace std;

int func(int n, int r, int c){
    if(n==0) return 0; 
    int half=1<<(n-1);//(2^(n-1))
    if(r<half&&c<half) return func(n-1,r,c);//1사분면
    if(r<half&&c>=half) return half*half+func(n-1,r,c-half);//2사분면
    if(r>=half&&c<half) return 2*half*half+func(n-1,r-half,c);//3사분면
    return 3*half*half+func(n-1,r-half,c-half);//4사분면
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,r,c;
    cin>>N>>r>>c;
    cout<<func(N,r,c);
}