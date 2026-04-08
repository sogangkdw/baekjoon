#include <bits/stdc++.h>
using namespace std;
const int M=10000000*2;
int arr[M];
int n,c,num,t;
int cp[500000];
vector<pair<int,int>> v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        arr[10000000+num]++;
    }

    cin>>c;
    for(int i=0;i<c;i++){
        cin>>t;
        cout<<arr[10000000+t]<<' ';
    }
        
}