#include <iostream>

using namespace std;
long long N,M;

long long check(long long mid){
    long long sum=0;
    for(long long i=1;i<=N;i++){
        sum+=min(N,mid/i);
    }
    return sum;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>N>>M;
    long long left=1;
    long long right=N*N;
    while(left<=right){
        long long mid=(left+right)/2;
        long long cnt=0;
        cnt=check(mid);

        if(cnt>=M){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    cout<<left<<'\n';
}