#include <iostream>

using namespace std;

int arr[100001];
int pre[100001];

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;
    cin>>N>>M;
    pre[0]=arr[0]=0;
    for(int i=1;i<=N;i++){
        cin>>arr[i];
        pre[i]=pre[i-1]+arr[i];
    }
    for(int x=0;x<M;x++){
        int a,b;
        cin>>a>>b;
        printf("%d\n",pre[b]-pre[a-1]);
    }
    return 0;
}