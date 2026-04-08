#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

int LIS(vector<int> &v,vector<int> &a){
    for(int i=N-1;i>=0;i--){
        for(int j=i+1;j<N;j++){
            if(v[i]<v[j]){
                a[i]=max(a[i],a[j]+1);
            }
        }
    }
    return *max_element(a.begin(),a.end());
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>N;
    vector<pair<int,int>> m(N);
    vector<int> v(N);
    vector<int> a(N,1);
    int num1,num2;
    for(int i=0;i<N;i++){
        cin>>num1>>num2;
        m[i]={num1,num2};
    }
    sort(m.begin(),m.end());
    for(int i=0;i<N;i++){
        v[i]=m[i].second;
    }

    cout<<N-LIS(v,a)<<'\n';
}