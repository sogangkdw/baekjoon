#include <iostream>

using namespace std;

int arr1[101010];
int arr2[101010];

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        cin>>arr1[i];
    }
    
    for(int j=1;j<=b;j++){
        int c,d,e;
        cin>>c>>d>>e;
        arr2[c]+=e;
        arr2[d+1]-=e;
    }

    for(int k=1;k<=a;k++){
        arr2[k]+=arr2[k-1];
    }

    for(int k=1;k<=a;k++){
        cout<<arr1[k]+arr2[k]<<' ';
    }
    cout<<'\n';

    return 0;
}