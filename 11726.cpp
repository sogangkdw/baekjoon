#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int *fib=new int[n];
    fib[0]=fib[1]=1;
    for(int i=2;i<=n;i++){
        fib[i]=(fib[i-2]+fib[i-1])%10007;
    }
    cout<<fib[n]<<'\n';
}