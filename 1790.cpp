#include <bits/stdc++.h>
using namespace std;
int n,k;
string s;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    int i=1, j=1;
    while(k>9LL*i*j){
        k-=9LL*i*j;
        i++;
        j*=10;
    }    
    int target=j+(k-1)/i;
    if(target>n) cout<<-1;
    else cout<<to_string(target)[(k-1)%i];
}