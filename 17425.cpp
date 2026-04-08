#include <iostream>

using namespace std;

long long arr[1000001]={0,};        
long long p[1000001]={0,};

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i=1;i<1000001;i++){
        for(int j=i;j<1000001;j+=i){
            arr[j]+=i;
        }
    }//j는 i의 배수(==i는 j의 약수)
        
    for(int y=1;y<=1000000;y++){
        p[y]=p[y-1]+arr[y];
    }
        
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int A;
        cin>>A;
        cout<<p[A]<<'\n';
        
    }
    return 0;

}