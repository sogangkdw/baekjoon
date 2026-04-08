#include <bits/stdc++.h>
using namespace std;
int n;
pair<int,int> V;
char c;
#define X first
#define Y second

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        if(abs(V.X-V.Y)>=2){
             continue;
        }
        if(c=='D') V.X++;
        else if(c=='P') V.Y++;
    }
    cout<<V.X<<':'<<V.Y;
}