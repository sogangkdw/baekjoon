#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());

    int ans=0;
    do{
        int curr=0;
        for(int i=1;i<n;i++){
            curr+=abs(v[i]-v[i-1]);
        }
        ans=max(ans,curr);
    } while(next_permutation(v.begin(),v.end()));
    cout<<ans<<'\n';
}