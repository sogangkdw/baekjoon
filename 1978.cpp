#include <bits/stdc++.h>
using namespace std;
int n;
int tot;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        bool t=false;
        cin>>num;
        if(num==1) continue;
        for(int j=2;j*j<=num;j++){
            if(num%j==0){
                t=true;
                break;
            }
        }
        if(t==false){
            tot++;
        }
    }
    cout<<tot;
}