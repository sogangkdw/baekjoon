#include <iostream>
#include <vector>

using namespace std;

int n,m;
vector<int> arr={0};

void solve(int choose){
    if(choose==m){
        for(int i=1;i<=m;i++){
            cout<<arr[i]<<" ";
        }
        cout<<'\n';
        return;
    }

    for(int i=arr.back()+1;i<=n;i++){
        arr.push_back(i);
        solve(choose+1);
        arr.pop_back();
    }
}

int main(void){
    cin>>n>>m;
    solve(0);
}