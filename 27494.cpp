#include <bits/stdc++.h>
using namespace std;
int n,cnt;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    if(n<2023) cnt=0;
    else{
        for(int i=2023;i<n+1;i++){
            int tmp=i;
            vector<int> v;
            while(tmp>0){
                int c=tmp%10;
                if(v.size()==0&&c==3) v.push_back(c);
                else if(v.size()==1&&c==2) v.push_back(c);
                else if(v.size()==2&&c==0) v.push_back(c);
                else if(v.size()==3&&c==2) v.push_back(c);
                tmp/=10;
            }
            if(v.size()==4) cnt++;
        }
    }
    cout<<cnt;
}