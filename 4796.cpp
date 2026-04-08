#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n=1;
    while(1){
        int l,p,v;
        cin>>l>>p>>v;
        if(l==0&&p==0&&v==0){
            break;
        }
        int q=v/p;
        int r=v%p;
        cout<<"Case "<<n<<": "<<q*l+min(r,l)<<'\n';
        n++;
    }
}