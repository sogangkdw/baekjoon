#include <bits/stdc++.h>
using namespace std;
int n,a,b;
int A[20000],B[20000];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        int tot=0;
        cin>>a>>b;
        for(int j=0;j<a;j++){
            cin>>A[j];
        }
        for(int j=0;j<b;j++){
            cin>>B[j];
        }
        sort(A,A+a,greater<int>());
        sort(B,B+b);
        int st=0;
        int ed=b-1;
        while(st<a&&ed>=0){
            while(A[st]<=B[ed]){
                ed--;
            }
            if(A[st]>B[ed]){
                tot+=ed+1;
                st++;
            }
        }
        cout<<tot<<'\n';
    }
}