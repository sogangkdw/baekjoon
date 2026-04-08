#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> line;
int n,m;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        line.push_back(x);
    }
    long long MAX=*max_element(line.begin(),line.end());
    long long start=1;
    long long end=MAX;
    long long count=0;
    long long result=0;
    while(start<=end){
        long long mid=(start+end)/2;
        for(int i=0;i<n;i++){
            count+=line[i]/mid;
        }

        if(m>count){
            end=mid-1;
        }
        else{
            result=max(mid,result);
            start=mid+1;
        }
        count=0;
    }
    cout<<result<<'\n';    
}