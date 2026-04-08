#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,m;
    cin>>n>>m;
    long long *arr=new long long[n+1];

    for(long long i=0;i<m;i++){
        long long num1,num2;
        cin>>num1>>num2;
        arr[num1]++;
        arr[num2]++;
    }
    long long sum=0;

    for(long long i=1;i<=n;i++){
        if(arr[i]>=3){
            sum+=(arr[i]*(arr[i]-1)*(arr[i]-2))/6;
        }
    }
    cout<<sum%(1000000000+7)<<'\n';
}