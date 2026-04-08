#include <iostream>
#include <vector>

using namespace std;

int n,m;
vector<int> arr(10);

void solve(int choose){
    if(choose==m){
        for(int i=0;i<m;i++){
            cout<<arr[i]<<" ";
        }
        cout<<'\n';
        return;
    }

    for(int i=1;i<=n;i++){
        int duplicated=0;
        for(int j=0;j<choose;j++) if(arr[j]==i) duplicated=1;
        if(!duplicated){
            arr[choose]=i;
            solve(choose+1);
        }
    }
}

int main(void){
    cin>>n>>m;
    solve(0);
}