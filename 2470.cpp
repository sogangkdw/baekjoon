#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> v;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int i,j;
    i=0;
    j=v.size()-1;
    long long Min=2000000000;
    int idx1,idx2;
    while(i<j){
        if(v[i]+v[j]>0){
            if(abs(v[i]+v[j])<Min){
                Min=abs(v[i]+v[j]);
                idx1=i;
                idx2=j;
            }
            j--;
        }
        else if(v[i]+v[j]<0){
            if(abs(v[i]+v[j])<Min){
                Min=abs(v[i]+v[j]);
                idx1=i;
                idx2=j;
            }
            i++;
        }
        else{
            if(abs(v[i]+v[j])<Min){
                Min=abs(v[i]+v[j]);
                idx1=i;
                idx2=j;
            }
            break;
        }
    }
    cout<<v[idx1]<<' '<<v[idx2]<<'\n';
}