#include <iostream>
#include <vector>

using namespace std;
int n,m;
vector<int> v(7);

void solve(int choose){
    if(choose==m){
        for(int i=0;i<m;i++){
            cout<<v[i]<<' ';
        }
        cout<<'\n';
        return;
    }

    for(int i=1;i<=n;i++){
        v[choose]=i;
        solve(choose+1);
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;

    solve(0);
    
}